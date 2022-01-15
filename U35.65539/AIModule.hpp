#ifndef UE4SS_SDK_AIModule_HPP
#define UE4SS_SDK_AIModule_HPP

#include "AIModule_enums.hpp"

class AAIController : AController
{
    uint8 bStartAILogicOnPossess;
    uint8 bStopAILogicOnUnposses;
    uint8 bLOSflag;
    uint8 bSkipExtraLOSChecks;
    uint8 bAllowStrafe;
    uint8 bWantsPlayerState;
    uint8 bSetControlRotationFromPawnOrientation;
    UPathFollowingComponent* PathFollowingComponent;
    UBrainComponent* BrainComponent;
    UAIPerceptionComponent* PerceptionComponent;
    UPawnActionsComponent* ActionsComp;
    UBlackboardComponent* Blackboard;
    UGameplayTasksComponent* CachedGameplayTasksComponent;
    TSubclassOf<UNavigationQueryFilter> DefaultNavigationFilterClass;
    FAIControllerReceiveMoveCompleted ReceiveMoveCompleted;
    void AIMoveCompletedSignature(FAIRequestID RequestID, uint8 Result);

    bool UseBlackboard(UBlackboardData* BlackboardAsset, UBlackboardComponent*& BlackboardComponent);
    void UnclaimTaskResource(TSubclassOf<UGameplayTaskResource> ResourceClass);
    void SetPathFollowingComponent(UPathFollowingComponent* NewPFComponent);
    void SetMoveBlockDetection(bool bEnable);
    bool RunBehaviorTree(UBehaviorTree* BTAsset);
    void OnUsingBlackBoard(UBlackboardComponent* BlackboardComp, UBlackboardData* BlackboardAsset);
    void OnGameplayTaskResourcesClaimed(FGameplayResourceSet NewlyClaimed, FGameplayResourceSet FreshlyReleased);
    TEnumAsByte<EPathFollowingRequestResult::Type> MoveToLocation(const FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, TSubclassOf<UNavigationQueryFilter> FilterClass, bool bAllowPartialPath);
    TEnumAsByte<EPathFollowingRequestResult::Type> MoveToActor(AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, TSubclassOf<UNavigationQueryFilter> FilterClass, bool bAllowPartialPath);
    void K2_SetFocus(AActor* NewFocus);
    void K2_SetFocalPoint(FVector FP);
    void K2_ClearFocus();
    bool HasPartialPath();
    UPathFollowingComponent* GetPathFollowingComponent();
    TEnumAsByte<EPathFollowingStatus::Type> GetMoveStatus();
    FVector GetImmediateMoveDestination();
    AActor* GetFocusActor();
    FVector GetFocalPointOnActor(const AActor* Actor);
    FVector GetFocalPoint();
    UAIPerceptionComponent* GetAIPerceptionComponent();
    void ClaimTaskResource(TSubclassOf<UGameplayTaskResource> ResourceClass);
}

class UBTNode : UObject
{
    FString NodeName;
    UBehaviorTree* TreeAsset;
    UBTCompositeNode* ParentNode;
}

class UBTAuxiliaryNode : UBTNode
{
}

class UBTDecorator : UBTAuxiliaryNode
{
    uint8 bInverseCondition;
    TEnumAsByte<EBTFlowAbortMode::Type> FlowAbortMode;
}

class UBTDecorator_BlackboardBase : UBTDecorator
{
    FBlackboardKeySelector BlackboardKey;
}

class UBTService : UBTAuxiliaryNode
{
    float Interval;
    float RandomDeviation;
    uint8 bCallTickOnSearchStart;
    uint8 bRestartTimerOnEachActivation;
}

class UBTTaskNode : UBTNode
{
    TArray<UBTService*> Services;
    uint8 bIgnoreRestartSelf;
}

class UBTTask_BlackboardBase : UBTTaskNode
{
    FBlackboardKeySelector BlackboardKey;
}

class UBrainComponent : UActorComponent
{
    UBlackboardComponent* BlackboardComp;
    AAIController* AIOwner;

    void StopLogic(FString reason);
    void StartLogic();
    void RestartLogic();
    bool IsRunning();
    bool IsPaused();
}

class UBehaviorTreeComponent : UBrainComponent
{
    TArray<UBTNode*> NodeInstances;
    UBehaviorTree* DefaultBehaviorTreeAsset;

    void SetDynamicSubtree(FGameplayTag InjectTag, UBehaviorTree* BehaviorAsset);
    float GetTagCooldownEndTime(FGameplayTag CooldownTag);
    void AddCooldownTagDuration(FGameplayTag CooldownTag, float CooldownDuration, bool bAddToExistingDuration);
}

class UAIAsyncTaskBlueprintProxy : UObject
{
    FAIAsyncTaskBlueprintProxyOnSuccess OnSuccess;
    void OAISimpleDelegate(uint8 MovementResult);
    FAIAsyncTaskBlueprintProxyOnFail OnFail;
    void OAISimpleDelegate(uint8 MovementResult);

    void OnMoveCompleted(FAIRequestID RequestID, uint8 MovementResult);
}

class UAIBlueprintHelperLibrary : UBlueprintFunctionLibrary
{

    void UnlockAIResourcesWithAnimation(UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic);
    APawn* SpawnAIFromClass(UObject* WorldContextObject, TSubclassOf<APawn> PawnClass, UBehaviorTree* BehaviorTree, FVector Location, FRotator Rotation, bool bNoCollisionFail, AActor* Owner);
    void SimpleMoveToLocation(AController* Controller, const FVector& Goal);
    void SimpleMoveToActor(AController* Controller, const AActor* Goal);
    void SendAIMessage(APawn* Target, FName Message, UObject* MessageSource, bool bSuccess);
    void LockAIResourcesWithAnimation(UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic);
    bool IsValidAIRotation(FRotator Rotation);
    bool IsValidAILocation(FVector Location);
    bool IsValidAIDirection(FVector DirectionVector);
    UNavigationPath* GetCurrentPath(AController* Controller);
    UBlackboardComponent* GetBlackboard(AActor* Target);
    AAIController* GetAIController(AActor* ControlledActor);
    UAIAsyncTaskBlueprintProxy* CreateMoveToProxyObject(UObject* WorldContextObject, APawn* Pawn, FVector Destination, AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap);
}

class UAIDataProvider : UObject
{
}

class UAIDataProvider_QueryParams : UAIDataProvider
{
    FName ParamName;
    float FloatValue;
    int32 IntValue;
    bool boolValue;
}

class UAIDataProvider_Random : UAIDataProvider_QueryParams
{
    float Min;
    float Max;
    uint8 bInteger;
}

class UAIHotSpotManager : UObject
{
}

class UAIPerceptionComponent : UActorComponent
{
    TArray<UAISenseConfig*> SensesConfig;
    TSubclassOf<UAISense> DominantSense;
    AAIController* AIOwner;
    FAIPerceptionComponentOnPerceptionUpdated OnPerceptionUpdated;
    void PerceptionUpdatedDelegate(const TArray<AActor*>& UpdatedActors);
    FAIPerceptionComponentOnTargetPerceptionUpdated OnTargetPerceptionUpdated;
    void ActorPerceptionUpdatedDelegate(AActor* Actor, FAIStimulus Stimulus);

    void SetSenseEnabled(TSubclassOf<UAISense> SenseClass, const bool bEnable);
    void RequestStimuliListenerUpdate();
    void OnOwnerEndPlay(AActor* Actor, uint8 EndPlayReason);
    void GetPerceivedHostileActors(TArray<AActor*>& OutActors);
    void GetPerceivedActors(TSubclassOf<UAISense> SenseToUse, TArray<AActor*>& OutActors);
    void GetKnownPerceivedActors(TSubclassOf<UAISense> SenseToUse, TArray<AActor*>& OutActors);
    void GetCurrentlyPerceivedActors(TSubclassOf<UAISense> SenseToUse, TArray<AActor*>& OutActors);
    bool GetActorsPerception(AActor* Actor, FActorPerceptionBlueprintInfo& Info);
    void ForgetAll();
}

class UAIPerceptionListenerInterface : UInterface
{
}

class UAIPerceptionStimuliSourceComponent : UActorComponent
{
    uint8 bAutoRegisterAsSource;
    TArray<TSubclassOf<UAISense>> RegisterAsSourceForSenses;

    void UnregisterFromSense(TSubclassOf<UAISense> SenseClass);
    void UnregisterFromPerceptionSystem();
    void RegisterWithPerceptionSystem();
    void RegisterForSense(TSubclassOf<UAISense> SenseClass);
}

class UAISubsystem : UObject
{
    UAISystem* AISystem;
}

class UAIPerceptionSystem : UAISubsystem
{
    TArray<UAISense*> Senses;
    float PerceptionAgingRate;

    void ReportPerceptionEvent(UObject* WorldContextObject, UAISenseEvent* PerceptionEvent);
    void ReportEvent(UAISenseEvent* PerceptionEvent);
    bool RegisterPerceptionStimuliSource(UObject* WorldContextObject, TSubclassOf<UAISense> Sense, AActor* Target);
    void OnPerceptionStimuliSourceEndPlay(AActor* Actor, uint8 EndPlayReason);
    TSubclassOf<UAISense> GetSenseClassForStimulus(UObject* WorldContextObject, const FAIStimulus& Stimulus);
}

class UAIResourceInterface : UInterface
{
}

class UAIResource_Movement : UGameplayTaskResource
{
}

class UAIResource_Logic : UGameplayTaskResource
{
}

class UAISense : UObject
{
    float DefaultExpirationAge;
    EAISenseNotifyType NotifyType;
    uint8 bWantsNewPawnNotification;
    uint8 bAutoRegisterAllPawnsAsSources;
    UAIPerceptionSystem* PerceptionSystemInstance;
}

class UAISense_Blueprint : UAISense
{
    TSubclassOf<UUserDefinedStruct> ListenerDataType;
    TArray<UAIPerceptionComponent*> ListenerContainer;
    TArray<UAISenseEvent*> UnprocessedEvents;

    float OnUpdate(const TArray<UAISenseEvent*>& EventsToProcess);
    void OnListenerUpdated(AActor* ActorListener, UAIPerceptionComponent* PerceptionComponent);
    void OnListenerUnregistered(AActor* ActorListener, UAIPerceptionComponent* PerceptionComponent);
    void OnListenerRegistered(AActor* ActorListener, UAIPerceptionComponent* PerceptionComponent);
    void K2_OnNewPawn(APawn* NewPawn);
    void GetAllListenerComponents(TArray<UAIPerceptionComponent*>& ListenerComponents);
    void GetAllListenerActors(TArray<AActor*>& ListenerActors);
}

class UAISense_Damage : UAISense
{
    TArray<FAIDamageEvent> RegisteredEvents;

    void ReportDamageEvent(UObject* WorldContextObject, AActor* DamagedActor, AActor* Instigator, float damageAmount, FVector EventLocation, FVector HitLocation);
}

class UAISense_Hearing : UAISense
{
    TArray<FAINoiseEvent> NoiseEvents;
    float SpeedOfSoundSq;

    void ReportNoiseEvent(UObject* WorldContextObject, FVector NoiseLocation, float Loudness, AActor* Instigator, float MaxRange, FName Tag);
}

class UAISense_Prediction : UAISense
{
    TArray<FAIPredictionEvent> RegisteredEvents;

    void RequestPawnPredictionEvent(APawn* Requestor, AActor* PredictedActor, float PredictionTime);
    void RequestControllerPredictionEvent(UAIController* Requestor, AActor* PredictedActor, float PredictionTime);
}

class UAISense_Sight : UAISense
{
    int32 MaxTracesPerTick;
    int32 MinQueriesPerTimeSliceCheck;
    double MaxTimeSlicePerTick;
    float HighImportanceQueryDistanceThreshold;
    float MaxQueryImportance;
    float SightLimitQueryImportance;
}

class UAISense_Team : UAISense
{
    TArray<FAITeamStimulusEvent> RegisteredEvents;
}

class UAISense_Touch : UAISense
{
    TArray<FAITouchEvent> RegisteredEvents;
}

class UAISenseBlueprintListener : UUserDefinedStruct
{
}

class UAISenseConfig : UObject
{
    FColor DebugColor;
    float MaxAge;
    uint8 bStartsEnabled;
}

class UAISenseConfig_Blueprint : UAISenseConfig
{
    TSubclassOf<UAISense_Blueprint> Implementation;
}

class UAISenseConfig_Damage : UAISenseConfig
{
    TSubclassOf<UAISense_Damage> Implementation;
}

class UAISenseConfig_Hearing : UAISenseConfig
{
    TSubclassOf<UAISense_Hearing> Implementation;
    float HearingRange;
    float LoSHearingRange;
    uint8 bUseLoSHearing;
    FAISenseAffiliationFilter DetectionByAffiliation;
}

class UAISenseConfig_Prediction : UAISenseConfig
{
}

class UAISenseConfig_Sight : UAISenseConfig
{
    TSubclassOf<UAISense_Sight> Implementation;
    float SightRadius;
    float LoseSightRadius;
    float PeripheralVisionAngleDegrees;
    FAISenseAffiliationFilter DetectionByAffiliation;
    float AutoSuccessRangeFromLastSeenLocation;
}

class UAISenseConfig_Team : UAISenseConfig
{
}

class UAISenseConfig_Touch : UAISenseConfig
{
}

class UAISenseEvent : UObject
{
}

class UAISenseEvent_Damage : UAISenseEvent
{
    FAIDamageEvent Event;
}

class UAISenseEvent_Hearing : UAISenseEvent
{
    FAINoiseEvent Event;
}

class UAISightTargetInterface : UInterface
{
}

class UAISystem : UAISystemBase
{
    FSoftClassPath PerceptionSystemClassName;
    FSoftClassPath HotSpotManagerClassName;
    float AcceptanceRadius;
    float PathfollowingRegularPathPointAcceptanceRadius;
    float PathfollowingNavLinkAcceptanceRadius;
    bool bFinishMoveOnGoalOverlap;
    bool bAcceptPartialPaths;
    bool bAllowStrafing;
    bool bEnableBTAITasks;
    bool bAllowControllersAsEQSQuerier;
    bool bEnableDebuggerPlugin;
    bool bForgetStaleActors;
    TEnumAsByte<ECollisionChannel> DefaultSightCollisionChannel;
    UBehaviorTreeManager* BehaviorTreeManager;
    UEnvQueryManager* EnvironmentQueryManager;
    UAIPerceptionSystem* PerceptionSystem;
    TArray<UAIAsyncTaskBlueprintProxy*> AllProxyObjects;
    UAIHotSpotManager* HotSpotManager;
    UNavLocalGridManager* NavLocalGrids;

    void AILoggingVerbose();
    void AIIgnorePlayers();
}

class UAITask : UGameplayTask
{
    AAIController* OwnerController;
}

class UAITask_LockLogic : UAITask
{
}

class UAITask_MoveTo : UAITask
{
    FAITask_MoveToOnRequestFailed OnRequestFailed;
    void GenericGameplayTaskDelegate();
    FAITask_MoveToOnMoveFinished OnMoveFinished;
    void MoveTaskCompletedSignature(uint8 Result, UAIController* AIController);
    FAIMoveRequest MoveRequest;

    UAITask_MoveTo* AIMoveTo(UAIController* Controller, FVector GoalLocation, AActor* GoalActor, float AcceptanceRadius, uint8 StopOnOverlap, uint8 AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking, uint8 ProjectGoalOnNavigation);
}

class UAITask_RunEQS : UAITask
{

    UAITask_RunEQS* RunEQS(UAIController* Controller, UEnvQuery* QueryTemplate);
}

class UBehaviorTree : UObject
{
    UBTCompositeNode* RootNode;
    UBlackboardData* BlackboardAsset;
    TArray<UBTDecorator*> RootDecorators;
    TArray<FBTDecoratorLogic> RootDecoratorOps;
}

class UBehaviorTreeManager : UObject
{
    int32 MaxDebuggerSteps;
    TArray<FBehaviorTreeTemplateInfo> LoadedTemplates;
    TArray<UBehaviorTreeComponent*> ActiveComponents;
}

class UBehaviorTreeTypes : UObject
{
}

class UBlackboardAssetProvider : UInterface
{

    UBlackboardData* GetBlackboardAsset();
}

class UBlackboardComponent : UActorComponent
{
    UBrainComponent* BrainComp;
    UBlackboardData* DefaultBlackboardAsset;
    UBlackboardData* BlackboardAsset;
    TArray<UBlackboardKeyType*> KeyInstances;

    void SetValueAsVector(const FName& KeyName, FVector VectorValue);
    void SetValueAsString(const FName& KeyName, FString StringValue);
    void SetValueAsRotator(const FName& KeyName, FRotator VectorValue);
    void SetValueAsObject(const FName& KeyName, UObject* ObjectValue);
    void SetValueAsName(const FName& KeyName, FName nameValue);
    void SetValueAsInt(const FName& KeyName, int32 IntValue);
    void SetValueAsFloat(const FName& KeyName, float FloatValue);
    void SetValueAsEnum(const FName& KeyName, uint8 EnumValue);
    void SetValueAsClass(const FName& KeyName, TSubclassOf<UObject> ClassValue);
    void SetValueAsBool(const FName& KeyName, bool boolValue);
    bool IsVectorValueSet(const FName& KeyName);
    FVector GetValueAsVector(const FName& KeyName);
    FString GetValueAsString(const FName& KeyName);
    FRotator GetValueAsRotator(const FName& KeyName);
    UObject* GetValueAsObject(const FName& KeyName);
    FName GetValueAsName(const FName& KeyName);
    int32 GetValueAsInt(const FName& KeyName);
    float GetValueAsFloat(const FName& KeyName);
    uint8 GetValueAsEnum(const FName& KeyName);
    UClass* GetValueAsClass(const FName& KeyName);
    bool GetValueAsBool(const FName& KeyName);
    bool GetRotationFromEntry(const FName& KeyName, FRotator& ResultRotation);
    bool GetLocationFromEntry(const FName& KeyName, FVector& ResultLocation);
    void ClearValue(const FName& KeyName);
}

class UBlackboardData : UDataAsset
{
    UBlackboardData* Parent;
    TArray<FBlackboardEntry> Keys;
    uint8 bHasSynchronizedKeys;
}

class UBlackboardKeyType : UObject
{
}

class UBlackboardKeyType_Bool : UBlackboardKeyType
{
}

class UBlackboardKeyType_Class : UBlackboardKeyType
{
    UClass* BaseClass;
}

class UBlackboardKeyType_Enum : UBlackboardKeyType
{
    UEnum* EnumType;
    FString EnumName;
    uint8 bIsEnumNameValid;
}

class UBlackboardKeyType_Float : UBlackboardKeyType
{
}

class UBlackboardKeyType_Int : UBlackboardKeyType
{
}

class UBlackboardKeyType_Name : UBlackboardKeyType
{
}

class UBlackboardKeyType_NativeEnum : UBlackboardKeyType
{
    FString EnumName;
    UEnum* EnumType;
}

class UBlackboardKeyType_Object : UBlackboardKeyType
{
    UClass* BaseClass;
}

class UBlackboardKeyType_Rotator : UBlackboardKeyType
{
}

class UBlackboardKeyType_String : UBlackboardKeyType
{
    FString StringValue;
}

class UBlackboardKeyType_Vector : UBlackboardKeyType
{
}

class UBTCompositeNode : UBTNode
{
    TArray<FBTCompositeChild> Children;
    TArray<UBTService*> Services;
    uint8 bApplyDecoratorScope;
}

class UBTComposite_Selector : UBTCompositeNode
{
}

class UBTComposite_Sequence : UBTCompositeNode
{
}

class UBTComposite_SimpleParallel : UBTCompositeNode
{
    TEnumAsByte<EBTParallelMode::Type> FinishMode;
}

class UBTDecorator_Blackboard : UBTDecorator_BlackboardBase
{
    int32 IntValue;
    float FloatValue;
    FString StringValue;
    FString CachedDescription;
    uint8 OperationType;
    TEnumAsByte<EBTBlackboardRestart::Type> NotifyObserver;
}

class UBTDecorator_BlueprintBase : UBTDecorator
{
    AAIController* AIOwner;
    AActor* ActorOwner;
    TArray<FName> ObservedKeyNames;
    uint8 bShowPropertyDetails;
    uint8 bCheckConditionOnlyBlackBoardChanges;
    uint8 bIsObservingBB;

    void ReceiveTickAI(UAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    void ReceiveObserverDeactivatedAI(UAIController* OwnerController, APawn* ControlledPawn);
    void ReceiveObserverDeactivated(AActor* OwnerActor);
    void ReceiveObserverActivatedAI(UAIController* OwnerController, APawn* ControlledPawn);
    void ReceiveObserverActivated(AActor* OwnerActor);
    void ReceiveExecutionStartAI(UAIController* OwnerController, APawn* ControlledPawn);
    void ReceiveExecutionStart(AActor* OwnerActor);
    void ReceiveExecutionFinishAI(UAIController* OwnerController, APawn* ControlledPawn, uint8 NodeResult);
    void ReceiveExecutionFinish(AActor* OwnerActor, uint8 NodeResult);
    bool PerformConditionCheckAI(UAIController* OwnerController, APawn* ControlledPawn);
    bool PerformConditionCheck(AActor* OwnerActor);
    bool IsDecoratorObserverActive();
    bool IsDecoratorExecutionActive();
}

class UBTDecorator_CheckGameplayTagsOnActor : UBTDecorator
{
    FBlackboardKeySelector ActorToCheck;
    EGameplayContainerMatchType TagsToMatch;
    FGameplayTagContainer GameplayTags;
    FString CachedDescription;
}

class UBTDecorator_CompareBBEntries : UBTDecorator
{
    TEnumAsByte<EBlackBoardEntryComparison::Type> Operator;
    FBlackboardKeySelector BlackboardKeyA;
    FBlackboardKeySelector BlackboardKeyB;
}

class UBTDecorator_ConditionalLoop : UBTDecorator_Blackboard
{
}

class UBTDecorator_ConeCheck : UBTDecorator
{
    float ConeHalfAngle;
    FBlackboardKeySelector ConeOrigin;
    FBlackboardKeySelector ConeDirection;
    FBlackboardKeySelector Observed;
}

class UBTDecorator_Cooldown : UBTDecorator
{
    float CoolDownTime;
}

class UBTDecorator_DoesPathExist : UBTDecorator
{
    FBlackboardKeySelector BlackboardKeyA;
    FBlackboardKeySelector BlackboardKeyB;
    uint8 bUseSelf;
    TEnumAsByte<EPathExistanceQueryType::Type> PathQueryType;
    TSubclassOf<UNavigationQueryFilter> FilterClass;
}

class UBTDecorator_ForceSuccess : UBTDecorator
{
}

class UBTDecorator_IsAtLocation : UBTDecorator_BlackboardBase
{
    float AcceptableRadius;
    FAIDataProviderFloatValue ParametrizedAcceptableRadius;
    FAIDistanceType GeometricDistanceType;
    uint8 bUseParametrizedRadius;
    uint8 bUseNavAgentGoalLocation;
    uint8 bPathFindingBasedTest;
}

class UBTDecorator_IsBBEntryOfClass : UBTDecorator_BlackboardBase
{
    UClass* TestClass;
}

class UBTDecorator_KeepInCone : UBTDecorator
{
    float ConeHalfAngle;
    FBlackboardKeySelector ConeOrigin;
    FBlackboardKeySelector Observed;
    uint8 bUseSelfAsOrigin;
    uint8 bUseSelfAsObserved;
}

class UBTDecorator_Loop : UBTDecorator
{
    int32 NumLoops;
    bool bInfiniteLoop;
    float InfiniteLoopTimeoutTime;
}

class UBTDecorator_ReachedMoveGoal : UBTDecorator
{
}

class UBTDecorator_SetTagCooldown : UBTDecorator
{
    FGameplayTag CooldownTag;
    float CooldownDuration;
    bool bAddToExistingDuration;
}

class UBTDecorator_TagCooldown : UBTDecorator
{
    FGameplayTag CooldownTag;
    float CooldownDuration;
    bool bAddToExistingDuration;
    bool bActivatesCooldown;
}

class UBTDecorator_TimeLimit : UBTDecorator
{
    float TimeLimit;
}

class UBTFunctionLibrary : UBlueprintFunctionLibrary
{

    void StopUsingExternalEvent(UBTNode* NodeOwner);
    void StartUsingExternalEvent(UBTNode* NodeOwner, AActor* owningActor);
    void SetBlackboardValueAsVector(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, FVector Value);
    void SetBlackboardValueAsString(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, FString Value);
    void SetBlackboardValueAsRotator(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, FRotator Value);
    void SetBlackboardValueAsObject(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, UObject* Value);
    void SetBlackboardValueAsName(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, FName Value);
    void SetBlackboardValueAsInt(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, int32 Value);
    void SetBlackboardValueAsFloat(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, float Value);
    void SetBlackboardValueAsEnum(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, uint8 Value);
    void SetBlackboardValueAsClass(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, TSubclassOf<UObject> Value);
    void SetBlackboardValueAsBool(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, bool Value);
    UBlackboardComponent* GetOwnersBlackboard(UBTNode* NodeOwner);
    UBehaviorTreeComponent* GetOwnerComponent(UBTNode* NodeOwner);
    FVector GetBlackboardValueAsVector(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    FString GetBlackboardValueAsString(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    FRotator GetBlackboardValueAsRotator(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    UObject* GetBlackboardValueAsObject(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    FName GetBlackboardValueAsName(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    int32 GetBlackboardValueAsInt(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    float GetBlackboardValueAsFloat(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    uint8 GetBlackboardValueAsEnum(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    UClass* GetBlackboardValueAsClass(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    bool GetBlackboardValueAsBool(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    AActor* GetBlackboardValueAsActor(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    void ClearBlackboardValueAsVector(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    void ClearBlackboardValue(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
}

class UBTService_BlackboardBase : UBTService
{
    FBlackboardKeySelector BlackboardKey;
}

class UBTService_BlueprintBase : UBTService
{
    AAIController* AIOwner;
    AActor* ActorOwner;
    uint8 bShowPropertyDetails;
    uint8 bShowEventDetails;

    void ReceiveTickAI(UAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    void ReceiveSearchStartAI(UAIController* OwnerController, APawn* ControlledPawn);
    void ReceiveSearchStart(AActor* OwnerActor);
    void ReceiveDeactivationAI(UAIController* OwnerController, APawn* ControlledPawn);
    void ReceiveDeactivation(AActor* OwnerActor);
    void ReceiveActivationAI(UAIController* OwnerController, APawn* ControlledPawn);
    void ReceiveActivation(AActor* OwnerActor);
    bool IsServiceActive();
}

class UBTService_DefaultFocus : UBTService_BlackboardBase
{
    uint8 FocusPriority;
}

class UBTService_RunEQS : UBTService_BlackboardBase
{
    FEQSParametrizedQueryExecutionRequest EQSRequest;
}

class UBTTask_BlueprintBase : UBTTaskNode
{
    AAIController* AIOwner;
    AActor* ActorOwner;
    FIntervalCountdown TickInterval;
    uint8 bShowPropertyDetails;

    void SetFinishOnMessageWithId(FName MessageName, int32 RequestID);
    void SetFinishOnMessage(FName MessageName);
    void ReceiveTickAI(UAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    void ReceiveExecuteAI(UAIController* OwnerController, APawn* ControlledPawn);
    void ReceiveExecute(AActor* OwnerActor);
    void ReceiveAbortAI(UAIController* OwnerController, APawn* ControlledPawn);
    void ReceiveAbort(AActor* OwnerActor);
    bool IsTaskExecuting();
    bool IsTaskAborting();
    void FinishExecute(bool bSuccess);
    void FinishAbort();
}

class UBTTask_FinishWithResult : UBTTaskNode
{
    TEnumAsByte<EBTNodeResult::Type> Result;
}

class UBTTask_GameplayTaskBase : UBTTaskNode
{
    uint8 bWaitForGameplayTask;
}

class UBTTask_MakeNoise : UBTTaskNode
{
    float Loudnes;
}

class UBTTask_MoveTo : UBTTask_BlackboardBase
{
    float AcceptableRadius;
    TSubclassOf<UNavigationQueryFilter> FilterClass;
    float ObservedBlackboardValueTolerance;
    uint8 bObserveBlackboardValue;
    uint8 bAllowStrafe;
    uint8 bAllowPartialPath;
    uint8 bTrackMovingGoal;
    uint8 bProjectGoalLocation;
    uint8 bReachTestIncludesAgentRadius;
    uint8 bReachTestIncludesGoalRadius;
    uint8 bStopOnOverlap;
    uint8 bStopOnOverlapNeedsUpdate;
}

class UBTTask_MoveDirectlyToward : UBTTask_MoveTo
{
    uint8 bDisablePathUpdateOnGoalLocationChange;
    uint8 bProjectVectorGoalToNavigation;
    uint8 bUpdatedDeprecatedProperties;
}

class UBTTask_PawnActionBase : UBTTaskNode
{
}

class UBTTask_PlayAnimation : UBTTaskNode
{
    UAnimationAsset* AnimationToPlay;
    uint8 bLooping;
    uint8 bNonBlocking;
    UBehaviorTreeComponent* MyOwnerComp;
    USkeletalMeshComponent* CachedSkelMesh;
}

class UBTTask_PlaySound : UBTTaskNode
{
    USoundCue* SoundToPlay;
}

class UBTTask_PushPawnAction : UBTTask_PawnActionBase
{
    UPawnAction* Action;
}

class UBTTask_RotateToFaceBBEntry : UBTTask_BlackboardBase
{
    float Precision;
}

class UBTTask_RunBehavior : UBTTaskNode
{
    UBehaviorTree* BehaviorAsset;
}

class UBTTask_RunBehaviorDynamic : UBTTaskNode
{
    FGameplayTag InjectionTag;
    UBehaviorTree* DefaultBehaviorAsset;
    UBehaviorTree* BehaviorAsset;
}

class UBTTask_RunEQSQuery : UBTTask_BlackboardBase
{
    UEnvQuery* QueryTemplate;
    TArray<FEnvNamedValue> QueryParams;
    TArray<FAIDynamicParam> QueryConfig;
    TEnumAsByte<EEnvQueryRunMode::Type> RunMode;
    FBlackboardKeySelector EQSQueryBlackboardKey;
    bool bUseBBKey;
    FEQSParametrizedQueryExecutionRequest EQSRequest;
}

class UBTTask_SetTagCooldown : UBTTaskNode
{
    FGameplayTag CooldownTag;
    bool bAddToExistingDuration;
    float CooldownDuration;
}

class UBTTask_Wait : UBTTaskNode
{
    float WaitTime;
    float RandomDeviation;
}

class UBTTask_WaitBlackboardTime : UBTTask_Wait
{
    FBlackboardKeySelector BlackboardKey;
}

class UCrowdAgentInterface : UInterface
{
}

class UPathFollowingComponent : UActorComponent
{
    UNavMovementComponent* MovementComp;
    ANavigationData* MyNavData;

    void OnNavDataRegistered(ANavigationData* NavData);
    void OnActorBump(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    FVector GetPathDestination();
    TEnumAsByte<EPathFollowingAction::Type> GetPathActionType();
}

class UCrowdFollowingComponent : UPathFollowingComponent
{
    UCharacterMovementComponent* CharacterMovement;
    FVector CrowdAgentMoveDirection;

    void SuspendCrowdSteering(bool bSuspend);
}

class UCrowdManager : UCrowdManagerBase
{
    ANavigationData* MyNavData;
    TArray<FCrowdAvoidanceConfig> AvoidanceConfig;
    TArray<FCrowdAvoidanceSamplingPattern> SamplingPatterns;
    int32 MaxAgents;
    float MaxAgentRadius;
    int32 MaxAvoidedAgents;
    int32 MaxAvoidedWalls;
    float NavmeshCheckInterval;
    float PathOptimizationInterval;
    float SeparationDirClamp;
    float PathOffsetRadiusMultiplier;
    uint8 bResolveCollisions;
}

class ADetourCrowdAIController : UAIController
{
}

class UEnvQuery : UDataAsset
{
    FName QueryName;
    TArray<UEnvQueryOption*> options;
}

class UEnvQueryContext : UObject
{
}

class UEnvQueryContext_BlueprintBase : UEnvQueryContext
{

    void ProvideSingleLocation(UObject* QuerierObject, AActor* QuerierActor, FVector& ResultingLocation);
    void ProvideSingleActor(UObject* QuerierObject, AActor* QuerierActor, AActor*& ResultingActor);
    void ProvideLocationsSet(UObject* QuerierObject, AActor* QuerierActor, TArray<FVector>& ResultingLocationSet);
    void ProvideActorsSet(UObject* QuerierObject, AActor* QuerierActor, TArray<AActor*>& ResultingActorsSet);
}

class UEnvQueryContext_Item : UEnvQueryContext
{
}

class UEnvQueryContext_Querier : UEnvQueryContext
{
}

class UEnvQueryDebugHelpers : UObject
{
}

class UEnvQueryNode : UObject
{
    int32 VerNum;
}

class UEnvQueryGenerator : UEnvQueryNode
{
    FString OptionName;
    TSubclassOf<UEnvQueryItemType> ItemType;
    uint8 bAutoSortTests;
}

class UEnvQueryGenerator_ActorsOfClass : UEnvQueryGenerator
{
    TSubclassOf<AActor> SearchedActorClass;
    FAIDataProviderBoolValue GenerateOnlyActorsInRadius;
    FAIDataProviderFloatValue SearchRadius;
    TSubclassOf<UEnvQueryContext> SearchCenter;
}

class UEnvQueryGenerator_BlueprintBase : UEnvQueryGenerator
{
    FText GeneratorsActionDescription;
    TSubclassOf<UEnvQueryContext> Context;
    TSubclassOf<UEnvQueryItemType> GeneratedItemType;

    UObject* GetQuerier();
    void DoItemGeneration(const TArray<FVector>& ContextLocations);
    void AddGeneratedVector(FVector GeneratedVector);
    void AddGeneratedActor(AActor* GeneratedActor);
}

class UEnvQueryGenerator_Composite : UEnvQueryGenerator
{
    TArray<UEnvQueryGenerator*> generators;
    uint8 bAllowDifferentItemTypes;
    uint8 bHasMatchingItemType;
    TSubclassOf<UEnvQueryItemType> ForcedItemType;
}

class UEnvQueryGenerator_ProjectedPoints : UEnvQueryGenerator
{
    FEnvTraceData ProjectionData;
}

class UEnvQueryGenerator_Cone : UEnvQueryGenerator_ProjectedPoints
{
    FAIDataProviderFloatValue AlignedPointsDistance;
    FAIDataProviderFloatValue ConeDegrees;
    FAIDataProviderFloatValue AngleStep;
    FAIDataProviderFloatValue range;
    TSubclassOf<UEnvQueryContext> CenterActor;
    uint8 bIncludeContextLocation;
}

class UEnvQueryGenerator_CurrentLocation : UEnvQueryGenerator
{
    TSubclassOf<UEnvQueryContext> QueryContext;
}

class UEnvQueryGenerator_Donut : UEnvQueryGenerator_ProjectedPoints
{
    FAIDataProviderFloatValue InnerRadius;
    FAIDataProviderFloatValue OuterRadius;
    FAIDataProviderIntValue NumberOfRings;
    FAIDataProviderIntValue PointsPerRing;
    FEnvDirection ArcDirection;
    FAIDataProviderFloatValue ArcAngle;
    bool bUseSpiralPattern;
    TSubclassOf<UEnvQueryContext> Center;
    uint8 bDefineArc;
}

class UEnvQueryGenerator_OnCircle : UEnvQueryGenerator_ProjectedPoints
{
    FAIDataProviderFloatValue CircleRadius;
    FAIDataProviderFloatValue SpaceBetween;
    FAIDataProviderIntValue NumberOfPoints;
    EPointOnCircleSpacingMethod PointOnCircleSpacingMethod;
    FEnvDirection ArcDirection;
    FAIDataProviderFloatValue ArcAngle;
    float AngleRadians;
    TSubclassOf<UEnvQueryContext> CircleCenter;
    bool bIgnoreAnyContextActorsWhenGeneratingCircle;
    FAIDataProviderFloatValue CircleCenterZOffset;
    FEnvTraceData TraceData;
    uint8 bDefineArc;
}

class UEnvQueryGenerator_SimpleGrid : UEnvQueryGenerator_ProjectedPoints
{
    FAIDataProviderFloatValue GridSize;
    FAIDataProviderFloatValue SpaceBetween;
    TSubclassOf<UEnvQueryContext> GenerateAround;
}

class UEnvQueryGenerator_PathingGrid : UEnvQueryGenerator_SimpleGrid
{
    FAIDataProviderBoolValue PathToItem;
    TSubclassOf<UNavigationQueryFilter> NavigationFilter;
    FAIDataProviderFloatValue ScanRangeMultiplier;
}

class UEnvQueryInstanceBlueprintWrapper : UObject
{
    int32 QueryID;
    TSubclassOf<UEnvQueryItemType> ItemType;
    int32 OptionIndex;
    FEnvQueryInstanceBlueprintWrapperOnQueryFinishedEvent OnQueryFinishedEvent;
    void EQSQueryDoneSignature(UEnvQueryInstanceBlueprintWrapper* QueryInstance, uint8 QueryStatus);

    void SetNamedParam(FName ParamName, float Value);
    TArray<FVector> GetResultsAsLocations();
    TArray<AActor*> GetResultsAsActors();
    bool GetQueryResultsAsLocations(TArray<FVector>& ResultLocations);
    bool GetQueryResultsAsActors(TArray<AActor*>& ResultActors);
    float GetItemScore(int32 ItemIndex);
    void EQSQueryDoneSignature__DelegateSignature(UEnvQueryInstanceBlueprintWrapper* QueryInstance, uint8 QueryStatus);
}

class UEnvQueryItemType : UObject
{
}

class UEnvQueryItemType_VectorBase : UEnvQueryItemType
{
}

class UEnvQueryItemType_ActorBase : UEnvQueryItemType_VectorBase
{
}

class UEnvQueryItemType_Actor : UEnvQueryItemType_ActorBase
{
}

class UEnvQueryItemType_Direction : UEnvQueryItemType_VectorBase
{
}

class UEnvQueryItemType_Point : UEnvQueryItemType_VectorBase
{
}

class UEnvQueryManager : UAISubsystem
{
    TArray<FEnvQueryInstanceCache> InstanceCache;
    TArray<UEnvQueryContext*> LocalContexts;
    TArray<UEnvQueryInstanceBlueprintWrapper*> GCShieldedWrappers;
    float MaxAllowedTestingTime;
    bool bTestQueriesUsingBreadth;
    int32 QueryCountWarningThreshold;
    double QueryCountWarningInterval;

    UEnvQueryInstanceBlueprintWrapper* RunEQSQuery(UObject* WorldContextObject, UEnvQuery* QueryTemplate, UObject* Querier, uint8 RunMode, TSubclassOf<UEnvQueryInstanceBlueprintWrapper> WrapperClass);
}

class UEnvQueryOption : UObject
{
    UEnvQueryGenerator* Generator;
    TArray<UEnvQueryTest*> Tests;
}

class UEnvQueryTest : UEnvQueryNode
{
    int32 TestOrder;
    TEnumAsByte<EEnvTestPurpose::Type> TestPurpose;
    FString TestComment;
    TEnumAsByte<EEnvTestFilterOperator::Type> MultipleContextFilterOp;
    TEnumAsByte<EEnvTestScoreOperator::Type> MultipleContextScoreOp;
    TEnumAsByte<EEnvTestFilterType::Type> FilterType;
    FAIDataProviderBoolValue boolValue;
    FAIDataProviderFloatValue FloatValueMin;
    FAIDataProviderFloatValue FloatValueMax;
    TEnumAsByte<EEnvTestScoreEquation::Type> ScoringEquation;
    TEnumAsByte<EEnvQueryTestClamping::Type> ClampMinType;
    TEnumAsByte<EEnvQueryTestClamping::Type> ClampMaxType;
    EEQSNormalizationType NormalizationType;
    FAIDataProviderFloatValue ScoreClampMin;
    FAIDataProviderFloatValue ScoreClampMax;
    FAIDataProviderFloatValue ScoringFactor;
    FAIDataProviderFloatValue ReferenceValue;
    bool bDefineReferenceValue;
    uint8 bWorkOnFloatValues;
}

class UEnvQueryTest_Distance : UEnvQueryTest
{
    TEnumAsByte<EEnvTestDistance::Type> TestMode;
    TSubclassOf<UEnvQueryContext> DistanceTo;
}

class UEnvQueryTest_Dot : UEnvQueryTest
{
    FEnvDirection LineA;
    FEnvDirection LineB;
    EEnvTestDot TestMode;
    bool bAbsoluteValue;
}

class UEnvQueryTest_GameplayTags : UEnvQueryTest
{
    FGameplayTagQuery TagQueryToMatch;
    bool bUpdatedToUseQuery;
    EGameplayContainerMatchType TagsToMatch;
    FGameplayTagContainer GameplayTags;
}

class UEnvQueryTest_Overlap : UEnvQueryTest
{
    FEnvOverlapData OverlapData;
}

class UEnvQueryTest_Pathfinding : UEnvQueryTest
{
    TEnumAsByte<EEnvTestPathfinding::Type> TestMode;
    TSubclassOf<UEnvQueryContext> Context;
    FAIDataProviderBoolValue PathFromContext;
    FAIDataProviderBoolValue SkipUnreachable;
    TSubclassOf<UNavigationQueryFilter> FilterClass;
}

class UEnvQueryTest_PathfindingBatch : UEnvQueryTest_Pathfinding
{
    FAIDataProviderFloatValue ScanRangeMultiplier;
}

class UEnvQueryTest_Project : UEnvQueryTest
{
    FEnvTraceData ProjectionData;
}

class UEnvQueryTest_Random : UEnvQueryTest
{
}

class UEnvQueryTest_Trace : UEnvQueryTest
{
    FEnvTraceData TraceData;
    FAIDataProviderBoolValue TraceFromContext;
    FAIDataProviderFloatValue ItemHeightOffset;
    FAIDataProviderFloatValue ContextHeightOffset;
    TSubclassOf<UEnvQueryContext> Context;
}

class UEnvQueryTest_Volume : UEnvQueryTest
{
    TSubclassOf<UEnvQueryContext> VolumeContext;
    TSubclassOf<AVolume> VolumeClass;
    uint8 bDoComplexVolumeTest;
}

class UEnvQueryTypes : UObject
{
}

class UEQSQueryResultSourceInterface : UInterface
{
}

class UEQSRenderingComponent : UPrimitiveComponent
{
}

class AEQSTestingPawn : UCharacter
{
    UEnvQuery* QueryTemplate;
    TArray<FEnvNamedValue> QueryParams;
    TArray<FAIDynamicParam> QueryConfig;
    float TimeLimitPerStep;
    int32 StepToDebugDraw;
    EEnvQueryHightlightMode HighlightMode;
    uint8 bDrawLabels;
    uint8 bDrawFailedItems;
    uint8 bReRunQueryOnlyOnFinishedMove;
    uint8 bShouldBeVisibleInGame;
    uint8 bTickDuringGame;
    TEnumAsByte<EEnvQueryRunMode::Type> QueryingMode;
    FNavAgentProperties NavAgentProperties;
}

class UGenericTeamAgentInterface : UInterface
{
}

class AGridPathAIController : UAIController
{
}

class UGridPathFollowingComponent : UPathFollowingComponent
{
    UNavLocalGridManager* GridManager;
}

class UNavFilter_AIControllerDefault : UNavigationQueryFilter
{
}

class ANavLinkProxy : AActor
{
    TArray<FNavigationLink> PointLinks;
    TArray<FNavigationSegmentLink> SegmentLinks;
    UNavLinkCustomComponent* SmartLinkComp;
    bool bSmartLinkIsRelevant;
    FNavLinkProxyOnSmartLinkReached OnSmartLinkReached;
    void SmartLinkReachedSignature(AActor* MovingActor, const FVector& DestinationPoint);

    void SetSmartLinkEnabled(bool bEnabled);
    void ResumePathFollowing(AActor* Agent);
    void ReceiveSmartLinkReached(AActor* Agent, const FVector& Destination);
    bool IsSmartLinkEnabled();
    bool HasMovingAgents();
}

class UNavLocalGridManager : UObject
{

    bool SetLocalNavigationGridDensity(UObject* WorldContextObject, float CellSize);
    void RemoveLocalNavigationGrid(UObject* WorldContextObject, int32 GridId, bool bRebuildGrids);
    bool FindLocalNavigationGridPath(UObject* WorldContextObject, const FVector& Start, const FVector& End, TArray<FVector>& PathPoints);
    int32 AddLocalNavigationGridForPoints(UObject* WorldContextObject, const TArray<FVector>& Locations, const int32 Radius2D, const float Height, bool bRebuildGrids);
    int32 AddLocalNavigationGridForPoint(UObject* WorldContextObject, const FVector& Location, const int32 Radius2D, const float Height, bool bRebuildGrids);
    int32 AddLocalNavigationGridForCapsule(UObject* WorldContextObject, const FVector& Location, float CapsuleRadius, float CapsuleHalfHeight, const int32 Radius2D, const float Height, bool bRebuildGrids);
    int32 AddLocalNavigationGridForBox(UObject* WorldContextObject, const FVector& Location, FVector Extent, FRotator Rotation, const int32 Radius2D, const float Height, bool bRebuildGrids);
}

class UPathFollowingManager : UObject
{
}

class UPawnAction : UObject
{
    UPawnAction* ChildAction;
    UPawnAction* ParentAction;
    UPawnActionsComponent* OwnerComponent;
    UObject* Instigator;
    UBrainComponent* BrainComp;
    uint8 bAllowNewSameClassInstance;
    uint8 bReplaceActiveSameClassInstance;
    uint8 bShouldPauseMovement;
    uint8 bAlwaysNotifyOnFinished;

    TEnumAsByte<EAIRequestPriority::Type> GetActionPriority();
    void Finish(uint8 WithResult);
    UPawnAction* CreateActionInstance(UObject* WorldContextObject, TSubclassOf<UPawnAction> ActionClass);
}

class UPawnAction_BlueprintBase : UPawnAction
{

    void ActionTick(APawn* ControlledPawn, float DeltaSeconds);
    void ActionStart(APawn* ControlledPawn);
    void ActionResume(APawn* ControlledPawn);
    void ActionPause(APawn* ControlledPawn);
    void ActionFinished(APawn* ControlledPawn, uint8 WithResult);
}

class UPawnAction_Move : UPawnAction
{
    AActor* GoalActor;
    FVector GoalLocation;
    float AcceptableRadius;
    TSubclassOf<UNavigationQueryFilter> FilterClass;
    uint8 bAllowStrafe;
    uint8 bFinishOnOverlap;
    uint8 bUsePathfinding;
    uint8 bAllowPartialPath;
    uint8 bProjectGoalToNavigation;
    uint8 bUpdatePathToGoal;
    uint8 bAbortChildActionOnPathChange;
}

class UPawnAction_Repeat : UPawnAction
{
    UPawnAction* ActionToRepeat;
    UPawnAction* RecentActionCopy;
    TEnumAsByte<EPawnActionFailHandling::Type> ChildFailureHandlingMode;
}

class UPawnAction_Sequence : UPawnAction
{
    TArray<UPawnAction*> ActionSequence;
    TEnumAsByte<EPawnActionFailHandling::Type> ChildFailureHandlingMode;
    UPawnAction* RecentActionCopy;
}

class UPawnAction_Wait : UPawnAction
{
    float TimeToWait;
}

class UPawnActionsComponent : UActorComponent
{
    APawn* ControlledPawn;
    TArray<FPawnActionStack> ActionStacks;
    TArray<FPawnActionEvent> ActionEvents;
    UPawnAction* CurrentAction;

    bool K2_PushAction(UPawnAction* NewAction, uint8 Priority, UObject* Instigator);
    bool K2_PerformAction(APawn* Pawn, UPawnAction* Action, uint8 Priority);
    TEnumAsByte<EPawnActionAbortState::Type> K2_ForceAbortAction(UPawnAction* ActionToAbort);
    TEnumAsByte<EPawnActionAbortState::Type> K2_AbortAction(UPawnAction* ActionToAbort);
}

class UPawnSensingComponent : UActorComponent
{
    float HearingThreshold;
    float LOSHearingThreshold;
    float SightRadius;
    float SensingInterval;
    float HearingMaxSoundAge;
    uint8 bEnableSensingUpdates;
    uint8 bOnlySensePlayers;
    uint8 bSeePawns;
    uint8 bHearNoises;
    FPawnSensingComponentOnSeePawn OnSeePawn;
    void SeePawnDelegate(APawn* Pawn);
    FPawnSensingComponentOnHearNoise OnHearNoise;
    void HearNoiseDelegate(APawn* Instigator, const FVector& Location, float Volume);
    float PeripheralVisionAngle;
    float PeripheralVisionCosine;

    void SetSensingUpdatesEnabled(const bool bEnabled);
    void SetSensingInterval(const float NewSensingInterval);
    void SetPeripheralVisionAngle(const float NewPeripheralVisionAngle);
    void SeePawnDelegate__DelegateSignature(APawn* Pawn);
    void HearNoiseDelegate__DelegateSignature(APawn* Instigator, const FVector& Location, float Volume);
    float GetPeripheralVisionCosine();
    float GetPeripheralVisionAngle();
}

class UVisualLoggerExtension : UObject
{
}

struct UAIRequestID
{
    uint32 RequestID;
}

struct UAIStimulus
{
    float Age;
    float ExpirationAge;
    float Strength;
    FVector StimulusLocation;
    FVector ReceiverLocation;
    FName Tag;
    uint8 bSuccessfullySensed;
}

struct UAIDataProviderValue
{
    UAIDataProvider* DataBinding;
    FName DataField;
}

struct UAIDataProviderTypedValue : FAIDataProviderValue
{
    UClass* PropertyType;
}

struct UAIDataProviderBoolValue : FAIDataProviderTypedValue
{
    bool DefaultValue;
}

struct UAIDataProviderFloatValue : FAIDataProviderTypedValue
{
    float DefaultValue;
}

struct UAIDataProviderIntValue : FAIDataProviderTypedValue
{
    int32 DefaultValue;
}

struct UAIDataProviderStructValue : FAIDataProviderValue
{
}

struct UActorPerceptionBlueprintInfo
{
    AActor* Target;
    TArray<FAIStimulus> LastSensedStimuli;
    uint8 bIsHostile;
}

struct UAISenseAffiliationFilter
{
    uint8 bDetectEnemies;
    uint8 bDetectNeutrals;
    uint8 bDetectFriendlies;
}

struct UAIDamageEvent
{
    float Amount;
    FVector Location;
    FVector HitLocation;
    AActor* DamagedActor;
    AActor* Instigator;
}

struct UAINoiseEvent
{
    FVector NoiseLocation;
    float Loudness;
    float MaxRange;
    AActor* Instigator;
    FName Tag;
}

struct UAIPredictionEvent
{
    AActor* Requestor;
    AActor* PredictedActor;
}

struct UAISightEvent
{
    AActor* SeenActor;
    AActor* Observer;
}

struct UAITeamStimulusEvent
{
    AActor* Broadcaster;
    AActor* enemy;
}

struct UAITouchEvent
{
    AActor* TouchReceiver;
    AActor* OtherActor;
}

struct UIntervalCountdown
{
    float Interval;
}

struct UAIMoveRequest
{
    AActor* GoalActor;
}

struct UBehaviorTreeTemplateInfo
{
    UBehaviorTree* Asset;
    UBTCompositeNode* Template;
}

struct UBlackboardKeySelector
{
    TArray<UBlackboardKeyType*> AllowedTypes;
    FName SelectedKeyName;
    TSubclassOf<UBlackboardKeyType> SelectedKeyType;
    uint8 SelectedKeyID;
    uint8 bNoneIsAllowedValue;
}

struct UBlackboardEntry
{
    FName EntryName;
    UBlackboardKeyType* KeyType;
    uint8 bInstanceSynced;
}

struct UBTCompositeChild
{
    UBTCompositeNode* ChildComposite;
    UBTTaskNode* ChildTask;
    TArray<UBTDecorator*> Decorators;
    TArray<FBTDecoratorLogic> DecoratorOps;
}

struct UBTDecoratorLogic
{
    TEnumAsByte<EBTDecoratorLogic::Type> Operation;
    uint16 Number;
}

struct UCrowdAvoidanceSamplingPattern
{
    TArray<float> Angles;
    TArray<float> Radii;
}

struct UCrowdAvoidanceConfig
{
    float VelocityBias;
    float DesiredVelocityWeight;
    float CurrentVelocityWeight;
    float SideBiasWeight;
    float ImpactTimeWeight;
    float ImpactTimeRange;
    uint8 CustomPatternIdx;
    uint8 AdaptiveDivisions;
    uint8 AdaptiveRings;
    uint8 AdaptiveDepth;
}

struct UEnvQueryInstanceCache
{
    UEnvQuery* Template;
}

struct UEnvQueryRequest
{
    UEnvQuery* QueryTemplate;
    UObject* Owner;
    UWorld* World;
}

struct UEQSParametrizedQueryExecutionRequest
{
    UEnvQuery* QueryTemplate;
    TArray<FAIDynamicParam> QueryConfig;
    FBlackboardKeySelector EQSQueryBlackboardKey;
    TEnumAsByte<EEnvQueryRunMode::Type> RunMode;
    uint8 bUseBBKeyForQueryTemplate;
}

struct UAIDynamicParam
{
    FName ParamName;
    EAIParamType ParamType;
    float Value;
    FBlackboardKeySelector BBKey;
}

struct UEnvQueryResult
{
    TSubclassOf<UEnvQueryItemType> ItemType;
    int32 OptionIndex;
    int32 QueryID;
}

struct UEnvOverlapData
{
    float ExtentX;
    float ExtentY;
    float ExtentZ;
    FVector ShapeOffset;
    TEnumAsByte<ECollisionChannel> OverlapChannel;
    TEnumAsByte<EEnvOverlapShape::Type> OverlapShape;
    uint8 bOnlyBlockingHits;
    uint8 bOverlapComplex;
    uint8 bSkipOverlapQuerier;
}

struct UEnvTraceData
{
    int32 VersionNum;
    TSubclassOf<UNavigationQueryFilter> NavigationFilter;
    float ProjectDown;
    float ProjectUp;
    float ExtentX;
    float ExtentY;
    float ExtentZ;
    float PostProjectionVerticalOffset;
    TEnumAsByte<ETraceTypeQuery> TraceChannel;
    TEnumAsByte<ECollisionChannel> SerializedChannel;
    TEnumAsByte<EEnvTraceShape::Type> TraceShape;
    TEnumAsByte<EEnvQueryTrace::Type> TraceMode;
    uint8 bTraceComplex;
    uint8 bOnlyBlockingHits;
    uint8 bCanTraceOnNavMesh;
    uint8 bCanTraceOnGeometry;
    uint8 bCanDisableTrace;
    uint8 bCanProjectDown;
}

struct UEnvDirection
{
    TSubclassOf<UEnvQueryContext> LineFrom;
    TSubclassOf<UEnvQueryContext> LineTo;
    TSubclassOf<UEnvQueryContext> Rotation;
    TEnumAsByte<EEnvDirection::Type> DirMode;
}

struct UEnvNamedValue
{
    FName ParamName;
    EAIParamType ParamType;
    float Value;
}

struct UGenericTeamId
{
    uint8 TeamID;
}

struct UPawnActionStack
{
    UPawnAction* TopAction;
}

struct UPawnActionEvent
{
    UPawnAction* Action;
}

class UDefault__AISenseBlueprintListener
{
}

#endif
