#ifndef UE4SS_SDK_AIModule_HPP
#define UE4SS_SDK_AIModule_HPP

#include "AIModule_enums.hpp"

struct FAIDamageEvent
{
    float Amount;
    FVector Location;
    FVector HitLocation;
    class AActor* DamagedActor;
    class AActor* Instigator;
    FName Tag;

};

struct FAIDataProviderBoolValue : public FAIDataProviderTypedValue
{
    bool DefaultValue;

};

struct FAIDataProviderFloatValue : public FAIDataProviderTypedValue
{
    float DefaultValue;

};

struct FAIDataProviderIntValue : public FAIDataProviderTypedValue
{
    int32 DefaultValue;

};

struct FAIDataProviderStructValue : public FAIDataProviderValue
{
};

struct FAIDataProviderTypedValue : public FAIDataProviderValue
{
    UClass* PropertyType;

};

struct FAIDataProviderValue
{
    class UAIDataProvider* DataBinding;
    FName DataField;

};

struct FAIDynamicParam
{
    FName ParamName;
    EAIParamType ParamType;
    float Value;
    FBlackboardKeySelector BBKey;

};

struct FAIMoveRequest
{
    class AActor* GoalActor;

};

struct FAINoiseEvent
{
    FVector NoiseLocation;
    float Loudness;
    float MaxRange;
    class AActor* Instigator;
    FName Tag;

};

struct FAIPredictionEvent
{
    class AActor* Requestor;
    class AActor* PredictedActor;

};

struct FAIRequestID
{
    uint32 RequestID;

};

struct FAISenseAffiliationFilter
{
    uint8 bDetectEnemies;
    uint8 bDetectNeutrals;
    uint8 bDetectFriendlies;

};

struct FAISightEvent
{
    class AActor* SeenActor;
    class AActor* Observer;

};

struct FAIStimulus
{
    float Age;
    float ExpirationAge;
    float Strength;
    FVector StimulusLocation;
    FVector ReceiverLocation;
    FName Tag;
    uint8 bSuccessfullySensed;

};

struct FAITeamStimulusEvent
{
    class AActor* Broadcaster;
    class AActor* enemy;

};

struct FAITouchEvent
{
    class AActor* TouchReceiver;
    class AActor* OtherActor;

};

struct FActorPerceptionBlueprintInfo
{
    class AActor* Target;
    TArray<FAIStimulus> LastSensedStimuli;
    uint8 bIsHostile;

};

struct FActorPerceptionUpdateInfo
{
    int32 TargetId;
    TWeakObjectPtr<class AActor> Target;
    FAIStimulus Stimulus;

};

struct FBTCompositeChild
{
    class UBTCompositeNode* ChildComposite;
    class UBTTaskNode* ChildTask;
    TArray<class UBTDecorator*> Decorators;
    TArray<FBTDecoratorLogic> DecoratorOps;

};

struct FBTDecoratorLogic
{
    TEnumAsByte<EBTDecoratorLogic::Type> Operation;
    uint16 Number;

};

struct FBehaviorTreeTemplateInfo
{
    class UBehaviorTree* Asset;
    class UBTCompositeNode* Template;

};

struct FBlackboardEntry
{
    FName EntryName;
    class UBlackboardKeyType* KeyType;
    uint8 bInstanceSynced;

};

struct FBlackboardKeySelector
{
    TArray<class UBlackboardKeyType*> AllowedTypes;
    FName SelectedKeyName;
    TSubclassOf<class UBlackboardKeyType> SelectedKeyType;
    uint8 SelectedKeyID;
    uint8 bNoneIsAllowedValue;

};

struct FCrowdAvoidanceConfig
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

};

struct FCrowdAvoidanceSamplingPattern
{
    TArray<float> Angles;
    TArray<float> Radii;

};

struct FDefault__AISenseBlueprintListener
{
};

struct FEQSParametrizedQueryExecutionRequest
{
    class UEnvQuery* QueryTemplate;
    TArray<FAIDynamicParam> QueryConfig;
    FBlackboardKeySelector EQSQueryBlackboardKey;
    TEnumAsByte<EEnvQueryRunMode::Type> RunMode;
    uint8 bUseBBKeyForQueryTemplate;

};

struct FEnvDirection
{
    TSubclassOf<class UEnvQueryContext> LineFrom;
    TSubclassOf<class UEnvQueryContext> LineTo;
    TSubclassOf<class UEnvQueryContext> Rotation;
    TEnumAsByte<EEnvDirection::Type> DirMode;

};

struct FEnvNamedValue
{
    FName ParamName;
    EAIParamType ParamType;
    float Value;

};

struct FEnvOverlapData
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

};

struct FEnvQueryInstanceCache
{
    class UEnvQuery* Template;

};

struct FEnvQueryRequest
{
    class UEnvQuery* QueryTemplate;
    class UObject* Owner;
    class UWorld* World;

};

struct FEnvQueryResult
{
    TSubclassOf<class UEnvQueryItemType> ItemType;
    int32 OptionIndex;
    int32 QueryID;

};

struct FEnvTraceData
{
    int32 VersionNum;
    TSubclassOf<class UNavigationQueryFilter> NavigationFilter;
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

};

struct FGenericTeamId
{
    uint8 TeamID;

};

struct FIntervalCountdown
{
    float Interval;

};

struct FPawnActionEvent
{
    class UPawnAction* Action;

};

struct FPawnActionStack
{
    class UPawnAction* TopAction;

};

struct FRecastGraphWrapper
{
    class ARecastNavMesh* RecastNavMeshActor;

};

class AAIController : public AController
{
    uint8 bStartAILogicOnPossess;
    uint8 bStopAILogicOnUnposses;
    uint8 bLOSflag;
    uint8 bSkipExtraLOSChecks;
    uint8 bAllowStrafe;
    uint8 bWantsPlayerState;
    uint8 bSetControlRotationFromPawnOrientation;
    class UPathFollowingComponent* PathFollowingComponent;
    class UBrainComponent* BrainComponent;
    class UAIPerceptionComponent* PerceptionComponent;
    class UPawnActionsComponent* ActionsComp;
    class UBlackboardComponent* Blackboard;
    class UGameplayTasksComponent* CachedGameplayTasksComponent;
    TSubclassOf<class UNavigationQueryFilter> DefaultNavigationFilterClass;
    FAIControllerReceiveMoveCompleted ReceiveMoveCompleted;
    void AIMoveCompletedSignature(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> Result);

    bool UseBlackboard(class UBlackboardData* BlackboardAsset, class UBlackboardComponent*& BlackboardComponent);
    void UnclaimTaskResource(TSubclassOf<class UGameplayTaskResource> ResourceClass);
    void SetPathFollowingComponent(class UPathFollowingComponent* NewPFComponent);
    void SetMoveBlockDetection(bool bEnable);
    bool RunBehaviorTree(class UBehaviorTree* BTAsset);
    void OnUsingBlackBoard(class UBlackboardComponent* BlackboardComp, class UBlackboardData* BlackboardAsset);
    void OnGameplayTaskResourcesClaimed(FGameplayResourceSet NewlyClaimed, FGameplayResourceSet FreshlyReleased);
    TEnumAsByte<EPathFollowingRequestResult::Type> MoveToLocation(const FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, TSubclassOf<class UNavigationQueryFilter> FilterClass, bool bAllowPartialPath);
    TEnumAsByte<EPathFollowingRequestResult::Type> MoveToActor(class AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, TSubclassOf<class UNavigationQueryFilter> FilterClass, bool bAllowPartialPath);
    void K2_SetFocus(class AActor* NewFocus);
    void K2_SetFocalPoint(FVector FP);
    void K2_ClearFocus();
    bool HasPartialPath();
    class UPathFollowingComponent* GetPathFollowingComponent();
    TEnumAsByte<EPathFollowingStatus::Type> GetMoveStatus();
    FVector GetImmediateMoveDestination();
    class AActor* GetFocusActor();
    FVector GetFocalPointOnActor(const class AActor* Actor);
    FVector GetFocalPoint();
    class UAIPerceptionComponent* GetAIPerceptionComponent();
    void ClaimTaskResource(TSubclassOf<class UGameplayTaskResource> ResourceClass);
};

class ADetourCrowdAIController : public AAIController
{
};

class AEQSTestingPawn : public ACharacter
{
    class UEnvQuery* QueryTemplate;
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

};

class AGridPathAIController : public AAIController
{
};

class ANavLinkProxy : public AActor
{
    TArray<FNavigationLink> PointLinks;
    TArray<FNavigationSegmentLink> SegmentLinks;
    class UNavLinkCustomComponent* SmartLinkComp;
    bool bSmartLinkIsRelevant;
    FNavLinkProxyOnSmartLinkReached OnSmartLinkReached;
    void SmartLinkReachedSignature(class AActor* MovingActor, const FVector& DestinationPoint);

    void SetSmartLinkEnabled(bool bEnabled);
    void ResumePathFollowing(class AActor* Agent);
    void ReceiveSmartLinkReached(class AActor* Agent, const FVector& Destination);
    bool IsSmartLinkEnabled();
    bool HasMovingAgents();
};

class IAIPerceptionListenerInterface : public IInterface
{
};

class IAIResourceInterface : public IInterface
{
};

class IAISightTargetInterface : public IInterface
{
};

class IBlackboardAssetProvider : public IInterface
{

    class UBlackboardData* GetBlackboardAsset();
};

class ICrowdAgentInterface : public IInterface
{
};

class IEQSQueryResultSourceInterface : public IInterface
{
};

class IGenericTeamAgentInterface : public IInterface
{
};

class UAIAsyncTaskBlueprintProxy : public UObject
{
    FAIAsyncTaskBlueprintProxyOnSuccess OnSuccess;
    void OAISimpleDelegate(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    FAIAsyncTaskBlueprintProxyOnFail OnFail;
    void OAISimpleDelegate(TEnumAsByte<EPathFollowingResult::Type> MovementResult);

    void OnMoveCompleted(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> MovementResult);
};

class UAIBlueprintHelperLibrary : public UBlueprintFunctionLibrary
{

    void UnlockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic);
    class APawn* SpawnAIFromClass(class UObject* WorldContextObject, TSubclassOf<class APawn> PawnClass, class UBehaviorTree* BehaviorTree, FVector Location, FRotator Rotation, bool bNoCollisionFail, class AActor* Owner);
    void SimpleMoveToLocation(class AController* Controller, const FVector& Goal);
    void SimpleMoveToActor(class AController* Controller, const class AActor* Goal);
    void SendAIMessage(class APawn* Target, FName Message, class UObject* MessageSource, bool bSuccess);
    void LockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic);
    bool IsValidAIRotation(FRotator Rotation);
    bool IsValidAILocation(FVector Location);
    bool IsValidAIDirection(FVector DirectionVector);
    int32 GetNextNavLinkIndex(const class AController* Controller);
    TArray<FVector> GetCurrentPathPoints(class AController* Controller);
    int32 GetCurrentPathIndex(const class AController* Controller);
    class UNavigationPath* GetCurrentPath(class AController* Controller);
    class UBlackboardComponent* GetBlackboard(class AActor* Target);
    class AAIController* GetAIController(class AActor* ControlledActor);
    class UAIAsyncTaskBlueprintProxy* CreateMoveToProxyObject(class UObject* WorldContextObject, class APawn* Pawn, FVector Destination, class AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap);
};

class UAIDataProvider : public UObject
{
};

class UAIDataProvider_QueryParams : public UAIDataProvider
{
    FName ParamName;
    float FloatValue;
    int32 IntValue;
    bool boolValue;

};

class UAIDataProvider_Random : public UAIDataProvider_QueryParams
{
    float Min;
    float Max;
    uint8 bInteger;

};

class UAIHotSpotManager : public UObject
{
};

class UAIPerceptionComponent : public UActorComponent
{
    TArray<class UAISenseConfig*> SensesConfig;
    TSubclassOf<class UAISense> DominantSense;
    class AAIController* AIOwner;
    FAIPerceptionComponentOnPerceptionUpdated OnPerceptionUpdated;
    void PerceptionUpdatedDelegate(const TArray<class AActor*>& UpdatedActors);
    FAIPerceptionComponentOnTargetPerceptionUpdated OnTargetPerceptionUpdated;
    void ActorPerceptionUpdatedDelegate(class AActor* Actor, FAIStimulus Stimulus);
    FAIPerceptionComponentOnTargetPerceptionInfoUpdated OnTargetPerceptionInfoUpdated;
    void ActorPerceptionInfoUpdatedDelegate(const FActorPerceptionUpdateInfo& UpdateInfo);

    void SetSenseEnabled(TSubclassOf<class UAISense> SenseClass, const bool bEnable);
    void RequestStimuliListenerUpdate();
    void OnOwnerEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void GetPerceivedHostileActorsBySense(const TSubclassOf<class UAISense> SenseToUse, TArray<class AActor*>& OutActors);
    void GetPerceivedHostileActors(TArray<class AActor*>& OutActors);
    void GetPerceivedActors(TSubclassOf<class UAISense> SenseToUse, TArray<class AActor*>& OutActors);
    void GetKnownPerceivedActors(TSubclassOf<class UAISense> SenseToUse, TArray<class AActor*>& OutActors);
    void GetCurrentlyPerceivedActors(TSubclassOf<class UAISense> SenseToUse, TArray<class AActor*>& OutActors);
    bool GetActorsPerception(class AActor* Actor, FActorPerceptionBlueprintInfo& Info);
    void ForgetAll();
};

class UAIPerceptionStimuliSourceComponent : public UActorComponent
{
    uint8 bAutoRegisterAsSource;
    TArray<class TSubclassOf<UAISense>> RegisterAsSourceForSenses;

    void UnregisterFromSense(TSubclassOf<class UAISense> SenseClass);
    void UnregisterFromPerceptionSystem();
    void RegisterWithPerceptionSystem();
    void RegisterForSense(TSubclassOf<class UAISense> SenseClass);
};

class UAIPerceptionSystem : public UAISubsystem
{
    TArray<class UAISense*> Senses;
    float PerceptionAgingRate;

    void ReportPerceptionEvent(class UObject* WorldContextObject, class UAISenseEvent* PerceptionEvent);
    void ReportEvent(class UAISenseEvent* PerceptionEvent);
    bool RegisterPerceptionStimuliSource(class UObject* WorldContextObject, TSubclassOf<class UAISense> Sense, class AActor* Target);
    void OnPerceptionStimuliSourceEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    TSubclassOf<class UAISense> GetSenseClassForStimulus(class UObject* WorldContextObject, const FAIStimulus& Stimulus);
};

class UAIResource_Logic : public UGameplayTaskResource
{
};

class UAIResource_Movement : public UGameplayTaskResource
{
};

class UAISense : public UObject
{
    float DefaultExpirationAge;
    EAISenseNotifyType NotifyType;
    uint8 bWantsNewPawnNotification;
    uint8 bAutoRegisterAllPawnsAsSources;
    class UAIPerceptionSystem* PerceptionSystemInstance;

};

class UAISenseBlueprintListener : public UUserDefinedStruct
{
};

class UAISenseConfig : public UObject
{
    FColor DebugColor;
    float MaxAge;
    uint8 bStartsEnabled;

};

class UAISenseConfig_Blueprint : public UAISenseConfig
{
    TSubclassOf<class UAISense_Blueprint> Implementation;

};

class UAISenseConfig_Damage : public UAISenseConfig
{
    TSubclassOf<class UAISense_Damage> Implementation;

};

class UAISenseConfig_Hearing : public UAISenseConfig
{
    TSubclassOf<class UAISense_Hearing> Implementation;
    float HearingRange;
    float LoSHearingRange;
    uint8 bUseLoSHearing;
    FAISenseAffiliationFilter DetectionByAffiliation;

};

class UAISenseConfig_Prediction : public UAISenseConfig
{
};

class UAISenseConfig_Sight : public UAISenseConfig
{
    TSubclassOf<class UAISense_Sight> Implementation;
    float SightRadius;
    float LoseSightRadius;
    float PeripheralVisionAngleDegrees;
    FAISenseAffiliationFilter DetectionByAffiliation;
    float AutoSuccessRangeFromLastSeenLocation;
    float PointOfViewBackwardOffset;
    float NearClippingRadius;

};

class UAISenseConfig_Team : public UAISenseConfig
{
};

class UAISenseConfig_Touch : public UAISenseConfig
{
};

class UAISenseEvent : public UObject
{
};

class UAISenseEvent_Damage : public UAISenseEvent
{
    FAIDamageEvent Event;

};

class UAISenseEvent_Hearing : public UAISenseEvent
{
    FAINoiseEvent Event;

};

class UAISense_Blueprint : public UAISense
{
    TSubclassOf<class UUserDefinedStruct> ListenerDataType;
    TArray<class UAIPerceptionComponent*> ListenerContainer;
    TArray<class UAISenseEvent*> UnprocessedEvents;

    float OnUpdate(const TArray<class UAISenseEvent*>& EventsToProcess);
    void OnListenerUpdated(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
    void OnListenerUnregistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
    void OnListenerRegistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
    void K2_OnNewPawn(class APawn* NewPawn);
    void GetAllListenerComponents(TArray<class UAIPerceptionComponent*>& ListenerComponents);
    void GetAllListenerActors(TArray<class AActor*>& ListenerActors);
};

class UAISense_Damage : public UAISense
{
    TArray<FAIDamageEvent> RegisteredEvents;

    void ReportDamageEvent(class UObject* WorldContextObject, class AActor* DamagedActor, class AActor* Instigator, float damageAmount, FVector EventLocation, FVector HitLocation, FName Tag);
};

class UAISense_Hearing : public UAISense
{
    TArray<FAINoiseEvent> NoiseEvents;
    float SpeedOfSoundSq;

    void ReportNoiseEvent(class UObject* WorldContextObject, FVector NoiseLocation, float Loudness, class AActor* Instigator, float MaxRange, FName Tag);
};

class UAISense_Prediction : public UAISense
{
    TArray<FAIPredictionEvent> RegisteredEvents;

    void RequestPawnPredictionEvent(class APawn* Requestor, class AActor* PredictedActor, float PredictionTime);
    void RequestControllerPredictionEvent(class AAIController* Requestor, class AActor* PredictedActor, float PredictionTime);
};

class UAISense_Sight : public UAISense
{
    int32 MaxTracesPerTick;
    int32 MinQueriesPerTimeSliceCheck;
    double MaxTimeSlicePerTick;
    float HighImportanceQueryDistanceThreshold;
    float MaxQueryImportance;
    float SightLimitQueryImportance;

};

class UAISense_Team : public UAISense
{
    TArray<FAITeamStimulusEvent> RegisteredEvents;

};

class UAISense_Touch : public UAISense
{
    TArray<FAITouchEvent> RegisteredEvents;

};

class UAISubsystem : public UObject
{
    class UAISystem* AISystem;

};

class UAISystem : public UAISystemBase
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
    bool bAddBlackboardSelfKey;
    TEnumAsByte<ECollisionChannel> DefaultSightCollisionChannel;
    class UBehaviorTreeManager* BehaviorTreeManager;
    class UEnvQueryManager* EnvironmentQueryManager;
    class UAIPerceptionSystem* PerceptionSystem;
    TArray<class UAIAsyncTaskBlueprintProxy*> AllProxyObjects;
    class UAIHotSpotManager* HotSpotManager;
    class UNavLocalGridManager* NavLocalGrids;

    void AILoggingVerbose();
    void AIIgnorePlayers();
};

class UAITask : public UGameplayTask
{
    class AAIController* OwnerController;

};

class UAITask_LockLogic : public UAITask
{
};

class UAITask_MoveTo : public UAITask
{
    FAITask_MoveToOnRequestFailed OnRequestFailed;
    void GenericGameplayTaskDelegate();
    FAITask_MoveToOnMoveFinished OnMoveFinished;
    void MoveTaskCompletedSignature(TEnumAsByte<EPathFollowingResult::Type> Result, class AAIController* AIController);
    FAIMoveRequest MoveRequest;

    class UAITask_MoveTo* AIMoveTo(class AAIController* Controller, FVector GoalLocation, class AActor* GoalActor, float AcceptanceRadius, TEnumAsByte<EAIOptionFlag::Type> StopOnOverlap, TEnumAsByte<EAIOptionFlag::Type> AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking, TEnumAsByte<EAIOptionFlag::Type> ProjectGoalOnNavigation);
};

class UAITask_RunEQS : public UAITask
{

    class UAITask_RunEQS* RunEQS(class AAIController* Controller, class UEnvQuery* QueryTemplate);
};

class UBTAuxiliaryNode : public UBTNode
{
};

class UBTCompositeNode : public UBTNode
{
    TArray<FBTCompositeChild> Children;
    TArray<class UBTService*> Services;
    uint8 bApplyDecoratorScope;

};

class UBTComposite_Selector : public UBTCompositeNode
{
};

class UBTComposite_Sequence : public UBTCompositeNode
{
};

class UBTComposite_SimpleParallel : public UBTCompositeNode
{
    TEnumAsByte<EBTParallelMode::Type> FinishMode;

};

class UBTDecorator : public UBTAuxiliaryNode
{
    uint8 bInverseCondition;
    TEnumAsByte<EBTFlowAbortMode::Type> FlowAbortMode;

};

class UBTDecorator_Blackboard : public UBTDecorator_BlackboardBase
{
    int32 IntValue;
    float FloatValue;
    FString StringValue;
    FString CachedDescription;
    uint8 OperationType;
    TEnumAsByte<EBTBlackboardRestart::Type> NotifyObserver;

};

class UBTDecorator_BlackboardBase : public UBTDecorator
{
    FBlackboardKeySelector BlackboardKey;

};

class UBTDecorator_BlueprintBase : public UBTDecorator
{
    class AAIController* AIOwner;
    class AActor* ActorOwner;
    TArray<FName> ObservedKeyNames;
    uint8 bShowPropertyDetails;
    uint8 bCheckConditionOnlyBlackBoardChanges;
    uint8 bIsObservingBB;

    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
    void ReceiveObserverDeactivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveObserverDeactivated(class AActor* OwnerActor);
    void ReceiveObserverActivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveObserverActivated(class AActor* OwnerActor);
    void ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveExecutionStart(class AActor* OwnerActor);
    void ReceiveExecutionFinishAI(class AAIController* OwnerController, class APawn* ControlledPawn, TEnumAsByte<EBTNodeResult::Type> NodeResult);
    void ReceiveExecutionFinish(class AActor* OwnerActor, TEnumAsByte<EBTNodeResult::Type> NodeResult);
    bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    bool PerformConditionCheck(class AActor* OwnerActor);
    bool IsDecoratorObserverActive();
    bool IsDecoratorExecutionActive();
};

class UBTDecorator_CheckGameplayTagsOnActor : public UBTDecorator
{
    FBlackboardKeySelector ActorToCheck;
    EGameplayContainerMatchType TagsToMatch;
    FGameplayTagContainer GameplayTags;
    FString CachedDescription;

};

class UBTDecorator_CompareBBEntries : public UBTDecorator
{
    TEnumAsByte<EBlackBoardEntryComparison::Type> Operator;
    FBlackboardKeySelector BlackboardKeyA;
    FBlackboardKeySelector BlackboardKeyB;

};

class UBTDecorator_ConditionalLoop : public UBTDecorator_Blackboard
{
};

class UBTDecorator_ConeCheck : public UBTDecorator
{
    float ConeHalfAngle;
    FBlackboardKeySelector ConeOrigin;
    FBlackboardKeySelector ConeDirection;
    FBlackboardKeySelector Observed;

};

class UBTDecorator_Cooldown : public UBTDecorator
{
    float CoolDownTime;

};

class UBTDecorator_DoesPathExist : public UBTDecorator
{
    FBlackboardKeySelector BlackboardKeyA;
    FBlackboardKeySelector BlackboardKeyB;
    uint8 bUseSelf;
    TEnumAsByte<EPathExistanceQueryType::Type> PathQueryType;
    TSubclassOf<class UNavigationQueryFilter> FilterClass;

};

class UBTDecorator_ForceSuccess : public UBTDecorator
{
};

class UBTDecorator_IsAtLocation : public UBTDecorator_BlackboardBase
{
    float AcceptableRadius;
    FAIDataProviderFloatValue ParametrizedAcceptableRadius;
    FAIDistanceType GeometricDistanceType;
    uint8 bUseParametrizedRadius;
    uint8 bUseNavAgentGoalLocation;
    uint8 bPathFindingBasedTest;

};

class UBTDecorator_IsBBEntryOfClass : public UBTDecorator_BlackboardBase
{
    UClass* TestClass;

};

class UBTDecorator_KeepInCone : public UBTDecorator
{
    float ConeHalfAngle;
    FBlackboardKeySelector ConeOrigin;
    FBlackboardKeySelector Observed;
    uint8 bUseSelfAsOrigin;
    uint8 bUseSelfAsObserved;

};

class UBTDecorator_Loop : public UBTDecorator
{
    int32 NumLoops;
    bool bInfiniteLoop;
    float InfiniteLoopTimeoutTime;

};

class UBTDecorator_ReachedMoveGoal : public UBTDecorator
{
};

class UBTDecorator_SetTagCooldown : public UBTDecorator
{
    FGameplayTag CooldownTag;
    float CooldownDuration;
    bool bAddToExistingDuration;

};

class UBTDecorator_TagCooldown : public UBTDecorator
{
    FGameplayTag CooldownTag;
    float CooldownDuration;
    bool bAddToExistingDuration;
    bool bActivatesCooldown;

};

class UBTDecorator_TimeLimit : public UBTDecorator
{
    float TimeLimit;

};

class UBTFunctionLibrary : public UBlueprintFunctionLibrary
{

    void StopUsingExternalEvent(class UBTNode* NodeOwner);
    void StartUsingExternalEvent(class UBTNode* NodeOwner, class AActor* owningActor);
    void SetBlackboardValueAsVector(class UBTNode* NodeOwner, const FBlackboardKeySelector& Key, FVector Value);
    void SetBlackboardValueAsString(class UBTNode* NodeOwner, const FBlackboardKeySelector& Key, FString Value);
    void SetBlackboardValueAsRotator(class UBTNode* NodeOwner, const FBlackboardKeySelector& Key, FRotator Value);
    void SetBlackboardValueAsObject(class UBTNode* NodeOwner, const FBlackboardKeySelector& Key, class UObject* Value);
    void SetBlackboardValueAsName(class UBTNode* NodeOwner, const FBlackboardKeySelector& Key, FName Value);
    void SetBlackboardValueAsInt(class UBTNode* NodeOwner, const FBlackboardKeySelector& Key, int32 Value);
    void SetBlackboardValueAsFloat(class UBTNode* NodeOwner, const FBlackboardKeySelector& Key, float Value);
    void SetBlackboardValueAsEnum(class UBTNode* NodeOwner, const FBlackboardKeySelector& Key, uint8 Value);
    void SetBlackboardValueAsClass(class UBTNode* NodeOwner, const FBlackboardKeySelector& Key, UClass* Value);
    void SetBlackboardValueAsBool(class UBTNode* NodeOwner, const FBlackboardKeySelector& Key, bool Value);
    class UBlackboardComponent* GetOwnersBlackboard(class UBTNode* NodeOwner);
    class UBehaviorTreeComponent* GetOwnerComponent(class UBTNode* NodeOwner);
    FVector GetBlackboardValueAsVector(class UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    FString GetBlackboardValueAsString(class UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    FRotator GetBlackboardValueAsRotator(class UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    class UObject* GetBlackboardValueAsObject(class UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    FName GetBlackboardValueAsName(class UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    int32 GetBlackboardValueAsInt(class UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    float GetBlackboardValueAsFloat(class UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    uint8 GetBlackboardValueAsEnum(class UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    UClass* GetBlackboardValueAsClass(class UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    bool GetBlackboardValueAsBool(class UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    class AActor* GetBlackboardValueAsActor(class UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    void ClearBlackboardValueAsVector(class UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    void ClearBlackboardValue(class UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
};

class UBTNode : public UObject
{
    FString NodeName;
    class UBehaviorTree* TreeAsset;
    class UBTCompositeNode* ParentNode;

};

class UBTService : public UBTAuxiliaryNode
{
    float Interval;
    float RandomDeviation;
    uint8 bCallTickOnSearchStart;
    uint8 bRestartTimerOnEachActivation;

};

class UBTService_BlackboardBase : public UBTService
{
    FBlackboardKeySelector BlackboardKey;

};

class UBTService_BlueprintBase : public UBTService
{
    class AAIController* AIOwner;
    class AActor* ActorOwner;
    uint8 bShowPropertyDetails;
    uint8 bShowEventDetails;

    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
    void ReceiveSearchStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveSearchStart(class AActor* OwnerActor);
    void ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveDeactivation(class AActor* OwnerActor);
    void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveActivation(class AActor* OwnerActor);
    bool IsServiceActive();
};

class UBTService_DefaultFocus : public UBTService_BlackboardBase
{
    uint8 FocusPriority;

};

class UBTService_RunEQS : public UBTService_BlackboardBase
{
    FEQSParametrizedQueryExecutionRequest EQSRequest;

};

class UBTTaskNode : public UBTNode
{
    TArray<class UBTService*> Services;
    uint8 bIgnoreRestartSelf;

};

class UBTTask_BlackboardBase : public UBTTaskNode
{
    FBlackboardKeySelector BlackboardKey;

};

class UBTTask_BlueprintBase : public UBTTaskNode
{
    class AAIController* AIOwner;
    class AActor* ActorOwner;
    FIntervalCountdown TickInterval;
    uint8 bShowPropertyDetails;

    void SetFinishOnMessageWithId(FName MessageName, int32 RequestID);
    void SetFinishOnMessage(FName MessageName);
    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveExecute(class AActor* OwnerActor);
    void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveAbort(class AActor* OwnerActor);
    bool IsTaskExecuting();
    bool IsTaskAborting();
    void FinishExecute(bool bSuccess);
    void FinishAbort();
};

class UBTTask_FinishWithResult : public UBTTaskNode
{
    TEnumAsByte<EBTNodeResult::Type> Result;

};

class UBTTask_GameplayTaskBase : public UBTTaskNode
{
    uint8 bWaitForGameplayTask;

};

class UBTTask_MakeNoise : public UBTTaskNode
{
    float Loudnes;

};

class UBTTask_MoveDirectlyToward : public UBTTask_MoveTo
{
    uint8 bDisablePathUpdateOnGoalLocationChange;
    uint8 bProjectVectorGoalToNavigation;
    uint8 bUpdatedDeprecatedProperties;

};

class UBTTask_MoveTo : public UBTTask_BlackboardBase
{
    float AcceptableRadius;
    TSubclassOf<class UNavigationQueryFilter> FilterClass;
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

};

class UBTTask_PawnActionBase : public UBTTaskNode
{
};

class UBTTask_PlayAnimation : public UBTTaskNode
{
    class UAnimationAsset* AnimationToPlay;
    uint8 bLooping;
    uint8 bNonBlocking;
    class UBehaviorTreeComponent* MyOwnerComp;
    class USkeletalMeshComponent* CachedSkelMesh;

};

class UBTTask_PlaySound : public UBTTaskNode
{
    class USoundCue* SoundToPlay;

};

class UBTTask_PushPawnAction : public UBTTask_PawnActionBase
{
    class UPawnAction* Action;

};

class UBTTask_RotateToFaceBBEntry : public UBTTask_BlackboardBase
{
    float Precision;

};

class UBTTask_RunBehavior : public UBTTaskNode
{
    class UBehaviorTree* BehaviorAsset;

};

class UBTTask_RunBehaviorDynamic : public UBTTaskNode
{
    FGameplayTag InjectionTag;
    class UBehaviorTree* DefaultBehaviorAsset;
    class UBehaviorTree* BehaviorAsset;

};

class UBTTask_RunEQSQuery : public UBTTask_BlackboardBase
{
    class UEnvQuery* QueryTemplate;
    TArray<FEnvNamedValue> QueryParams;
    TArray<FAIDynamicParam> QueryConfig;
    TEnumAsByte<EEnvQueryRunMode::Type> RunMode;
    FBlackboardKeySelector EQSQueryBlackboardKey;
    bool bUseBBKey;
    FEQSParametrizedQueryExecutionRequest EQSRequest;

};

class UBTTask_SetTagCooldown : public UBTTaskNode
{
    FGameplayTag CooldownTag;
    bool bAddToExistingDuration;
    float CooldownDuration;

};

class UBTTask_Wait : public UBTTaskNode
{
    float WaitTime;
    float RandomDeviation;

};

class UBTTask_WaitBlackboardTime : public UBTTask_Wait
{
    FBlackboardKeySelector BlackboardKey;

};

class UBehaviorTree : public UObject
{
    class UBTCompositeNode* RootNode;
    class UBlackboardData* BlackboardAsset;
    TArray<class UBTDecorator*> RootDecorators;
    TArray<FBTDecoratorLogic> RootDecoratorOps;

};

class UBehaviorTreeComponent : public UBrainComponent
{
    TArray<class UBTNode*> NodeInstances;
    class UBehaviorTree* DefaultBehaviorTreeAsset;

    void SetDynamicSubtree(FGameplayTag InjectTag, class UBehaviorTree* BehaviorAsset);
    float GetTagCooldownEndTime(FGameplayTag CooldownTag);
    void AddCooldownTagDuration(FGameplayTag CooldownTag, float CooldownDuration, bool bAddToExistingDuration);
};

class UBehaviorTreeManager : public UObject
{
    int32 MaxDebuggerSteps;
    TArray<FBehaviorTreeTemplateInfo> LoadedTemplates;
    TArray<class UBehaviorTreeComponent*> ActiveComponents;

};

class UBehaviorTreeTypes : public UObject
{
};

class UBlackboardComponent : public UActorComponent
{
    class UBrainComponent* BrainComp;
    class UBlackboardData* DefaultBlackboardAsset;
    class UBlackboardData* BlackboardAsset;
    TArray<class UBlackboardKeyType*> KeyInstances;

    void SetValueAsVector(const FName& KeyName, FVector VectorValue);
    void SetValueAsString(const FName& KeyName, FString StringValue);
    void SetValueAsRotator(const FName& KeyName, FRotator VectorValue);
    void SetValueAsObject(const FName& KeyName, class UObject* ObjectValue);
    void SetValueAsName(const FName& KeyName, FName nameValue);
    void SetValueAsInt(const FName& KeyName, int32 IntValue);
    void SetValueAsFloat(const FName& KeyName, float FloatValue);
    void SetValueAsEnum(const FName& KeyName, uint8 EnumValue);
    void SetValueAsClass(const FName& KeyName, UClass* ClassValue);
    void SetValueAsBool(const FName& KeyName, bool boolValue);
    bool IsVectorValueSet(const FName& KeyName);
    FVector GetValueAsVector(const FName& KeyName);
    FString GetValueAsString(const FName& KeyName);
    FRotator GetValueAsRotator(const FName& KeyName);
    class UObject* GetValueAsObject(const FName& KeyName);
    FName GetValueAsName(const FName& KeyName);
    int32 GetValueAsInt(const FName& KeyName);
    float GetValueAsFloat(const FName& KeyName);
    uint8 GetValueAsEnum(const FName& KeyName);
    UClass* GetValueAsClass(const FName& KeyName);
    bool GetValueAsBool(const FName& KeyName);
    bool GetRotationFromEntry(const FName& KeyName, FRotator& ResultRotation);
    bool GetLocationFromEntry(const FName& KeyName, FVector& ResultLocation);
    void ClearValue(const FName& KeyName);
};

class UBlackboardData : public UDataAsset
{
    class UBlackboardData* Parent;
    TArray<FBlackboardEntry> Keys;
    uint8 bHasSynchronizedKeys;

};

class UBlackboardKeyType : public UObject
{
};

class UBlackboardKeyType_Bool : public UBlackboardKeyType
{
};

class UBlackboardKeyType_Class : public UBlackboardKeyType
{
    UClass* BaseClass;

};

class UBlackboardKeyType_Enum : public UBlackboardKeyType
{
    class UEnum* EnumType;
    FString EnumName;
    uint8 bIsEnumNameValid;

};

class UBlackboardKeyType_Float : public UBlackboardKeyType
{
};

class UBlackboardKeyType_Int : public UBlackboardKeyType
{
};

class UBlackboardKeyType_Name : public UBlackboardKeyType
{
};

class UBlackboardKeyType_NativeEnum : public UBlackboardKeyType
{
    FString EnumName;
    class UEnum* EnumType;

};

class UBlackboardKeyType_Object : public UBlackboardKeyType
{
    UClass* BaseClass;

};

class UBlackboardKeyType_Rotator : public UBlackboardKeyType
{
};

class UBlackboardKeyType_String : public UBlackboardKeyType
{
    FString StringValue;

};

class UBlackboardKeyType_Vector : public UBlackboardKeyType
{
};

class UBrainComponent : public UActorComponent
{
    class UBlackboardComponent* BlackboardComp;
    class AAIController* AIOwner;

    void StopLogic(FString reason);
    void StartLogic();
    void RestartLogic();
    bool IsRunning();
    bool IsPaused();
};

class UCrowdFollowingComponent : public UPathFollowingComponent
{
    FVector CrowdAgentMoveDirection;

    void SuspendCrowdSteering(bool bSuspend);
};

class UCrowdManager : public UCrowdManagerBase
{
    class ANavigationData* MyNavData;
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

};

class UEQSRenderingComponent : public UPrimitiveComponent
{
};

class UEnvQuery : public UDataAsset
{
    FName QueryName;
    TArray<class UEnvQueryOption*> options;

};

class UEnvQueryContext : public UObject
{
};

class UEnvQueryContext_BlueprintBase : public UEnvQueryContext
{

    void ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, FVector& ResultingLocation);
    void ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor*& ResultingActor);
    void ProvideLocationsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<FVector>& ResultingLocationSet);
    void ProvideActorsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<class AActor*>& ResultingActorsSet);
};

class UEnvQueryContext_Item : public UEnvQueryContext
{
};

class UEnvQueryContext_Querier : public UEnvQueryContext
{
};

class UEnvQueryDebugHelpers : public UObject
{
};

class UEnvQueryGenerator : public UEnvQueryNode
{
    FString OptionName;
    TSubclassOf<class UEnvQueryItemType> ItemType;
    uint8 bAutoSortTests;

};

class UEnvQueryGenerator_ActorsOfClass : public UEnvQueryGenerator
{
    TSubclassOf<class AActor> SearchedActorClass;
    FAIDataProviderBoolValue GenerateOnlyActorsInRadius;
    FAIDataProviderFloatValue SearchRadius;
    TSubclassOf<class UEnvQueryContext> SearchCenter;

};

class UEnvQueryGenerator_BlueprintBase : public UEnvQueryGenerator
{
    FText GeneratorsActionDescription;
    TSubclassOf<class UEnvQueryContext> Context;
    TSubclassOf<class UEnvQueryItemType> GeneratedItemType;

    class UObject* GetQuerier();
    void DoItemGeneration(const TArray<FVector>& ContextLocations);
    void AddGeneratedVector(FVector GeneratedVector);
    void AddGeneratedActor(class AActor* GeneratedActor);
};

class UEnvQueryGenerator_Composite : public UEnvQueryGenerator
{
    TArray<class UEnvQueryGenerator*> generators;
    uint8 bAllowDifferentItemTypes;
    uint8 bHasMatchingItemType;
    TSubclassOf<class UEnvQueryItemType> ForcedItemType;

};

class UEnvQueryGenerator_Cone : public UEnvQueryGenerator_ProjectedPoints
{
    FAIDataProviderFloatValue AlignedPointsDistance;
    FAIDataProviderFloatValue ConeDegrees;
    FAIDataProviderFloatValue AngleStep;
    FAIDataProviderFloatValue range;
    TSubclassOf<class UEnvQueryContext> CenterActor;
    uint8 bIncludeContextLocation;

};

class UEnvQueryGenerator_CurrentLocation : public UEnvQueryGenerator
{
    TSubclassOf<class UEnvQueryContext> QueryContext;

};

class UEnvQueryGenerator_Donut : public UEnvQueryGenerator_ProjectedPoints
{
    FAIDataProviderFloatValue InnerRadius;
    FAIDataProviderFloatValue OuterRadius;
    FAIDataProviderIntValue NumberOfRings;
    FAIDataProviderIntValue PointsPerRing;
    FEnvDirection ArcDirection;
    FAIDataProviderFloatValue ArcAngle;
    bool bUseSpiralPattern;
    TSubclassOf<class UEnvQueryContext> Center;
    uint8 bDefineArc;

};

class UEnvQueryGenerator_OnCircle : public UEnvQueryGenerator_ProjectedPoints
{
    FAIDataProviderFloatValue CircleRadius;
    FAIDataProviderFloatValue SpaceBetween;
    FAIDataProviderIntValue NumberOfPoints;
    EPointOnCircleSpacingMethod PointOnCircleSpacingMethod;
    FEnvDirection ArcDirection;
    FAIDataProviderFloatValue ArcAngle;
    float AngleRadians;
    TSubclassOf<class UEnvQueryContext> CircleCenter;
    bool bIgnoreAnyContextActorsWhenGeneratingCircle;
    FAIDataProviderFloatValue CircleCenterZOffset;
    FEnvTraceData TraceData;
    uint8 bDefineArc;

};

class UEnvQueryGenerator_PathingGrid : public UEnvQueryGenerator_SimpleGrid
{
    FAIDataProviderBoolValue PathToItem;
    TSubclassOf<class UNavigationQueryFilter> NavigationFilter;
    FAIDataProviderFloatValue ScanRangeMultiplier;

};

class UEnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator
{
    FEnvTraceData ProjectionData;

};

class UEnvQueryGenerator_SimpleGrid : public UEnvQueryGenerator_ProjectedPoints
{
    FAIDataProviderFloatValue GridSize;
    FAIDataProviderFloatValue SpaceBetween;
    TSubclassOf<class UEnvQueryContext> GenerateAround;

};

class UEnvQueryInstanceBlueprintWrapper : public UObject
{
    int32 QueryID;
    TSubclassOf<class UEnvQueryItemType> ItemType;
    int32 OptionIndex;
    FEnvQueryInstanceBlueprintWrapperOnQueryFinishedEvent OnQueryFinishedEvent;
    void EQSQueryDoneSignature(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus::Type> QueryStatus);

    void SetNamedParam(FName ParamName, float Value);
    TArray<FVector> GetResultsAsLocations();
    TArray<class AActor*> GetResultsAsActors();
    bool GetQueryResultsAsLocations(TArray<FVector>& ResultLocations);
    bool GetQueryResultsAsActors(TArray<class AActor*>& ResultActors);
    float GetItemScore(int32 ItemIndex);
    void EQSQueryDoneSignature__DelegateSignature(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus::Type> QueryStatus);
};

class UEnvQueryItemType : public UObject
{
};

class UEnvQueryItemType_Actor : public UEnvQueryItemType_ActorBase
{
};

class UEnvQueryItemType_ActorBase : public UEnvQueryItemType_VectorBase
{
};

class UEnvQueryItemType_Direction : public UEnvQueryItemType_VectorBase
{
};

class UEnvQueryItemType_Point : public UEnvQueryItemType_VectorBase
{
};

class UEnvQueryItemType_VectorBase : public UEnvQueryItemType
{
};

class UEnvQueryManager : public UAISubsystem
{
    TArray<FEnvQueryInstanceCache> InstanceCache;
    TArray<class UEnvQueryContext*> LocalContexts;
    TArray<class UEnvQueryInstanceBlueprintWrapper*> GCShieldedWrappers;
    float MaxAllowedTestingTime;
    bool bTestQueriesUsingBreadth;
    int32 QueryCountWarningThreshold;
    double QueryCountWarningInterval;

    class UEnvQueryInstanceBlueprintWrapper* RunEQSQuery(class UObject* WorldContextObject, class UEnvQuery* QueryTemplate, class UObject* Querier, TEnumAsByte<EEnvQueryRunMode::Type> RunMode, TSubclassOf<class UEnvQueryInstanceBlueprintWrapper> WrapperClass);
};

class UEnvQueryNode : public UObject
{
    int32 VerNum;

};

class UEnvQueryOption : public UObject
{
    class UEnvQueryGenerator* Generator;
    TArray<class UEnvQueryTest*> Tests;

};

class UEnvQueryTest : public UEnvQueryNode
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

};

class UEnvQueryTest_Distance : public UEnvQueryTest
{
    TEnumAsByte<EEnvTestDistance::Type> TestMode;
    TSubclassOf<class UEnvQueryContext> DistanceTo;

};

class UEnvQueryTest_Dot : public UEnvQueryTest
{
    FEnvDirection LineA;
    FEnvDirection LineB;
    EEnvTestDot TestMode;
    bool bAbsoluteValue;

};

class UEnvQueryTest_GameplayTags : public UEnvQueryTest
{
    FGameplayTagQuery TagQueryToMatch;
    bool bUpdatedToUseQuery;
    EGameplayContainerMatchType TagsToMatch;
    FGameplayTagContainer GameplayTags;

};

class UEnvQueryTest_Overlap : public UEnvQueryTest
{
    FEnvOverlapData OverlapData;

};

class UEnvQueryTest_Pathfinding : public UEnvQueryTest
{
    TEnumAsByte<EEnvTestPathfinding::Type> TestMode;
    TSubclassOf<class UEnvQueryContext> Context;
    FAIDataProviderBoolValue PathFromContext;
    FAIDataProviderBoolValue SkipUnreachable;
    TSubclassOf<class UNavigationQueryFilter> FilterClass;

};

class UEnvQueryTest_PathfindingBatch : public UEnvQueryTest_Pathfinding
{
    FAIDataProviderFloatValue ScanRangeMultiplier;

};

class UEnvQueryTest_Project : public UEnvQueryTest
{
    FEnvTraceData ProjectionData;

};

class UEnvQueryTest_Random : public UEnvQueryTest
{
};

class UEnvQueryTest_Trace : public UEnvQueryTest
{
    FEnvTraceData TraceData;
    FAIDataProviderBoolValue TraceFromContext;
    FAIDataProviderFloatValue ItemHeightOffset;
    FAIDataProviderFloatValue ContextHeightOffset;
    TSubclassOf<class UEnvQueryContext> Context;

};

class UEnvQueryTest_Volume : public UEnvQueryTest
{
    TSubclassOf<class UEnvQueryContext> VolumeContext;
    TSubclassOf<class AVolume> VolumeClass;
    uint8 bDoComplexVolumeTest;

};

class UEnvQueryTypes : public UObject
{
};

class UGridPathFollowingComponent : public UPathFollowingComponent
{
    class UNavLocalGridManager* GridManager;

};

class UNavFilter_AIControllerDefault : public UNavigationQueryFilter
{
};

class UNavLocalGridManager : public UObject
{

    bool SetLocalNavigationGridDensity(class UObject* WorldContextObject, float CellSize);
    void RemoveLocalNavigationGrid(class UObject* WorldContextObject, int32 GridId, bool bRebuildGrids);
    bool FindLocalNavigationGridPath(class UObject* WorldContextObject, const FVector& Start, const FVector& End, TArray<FVector>& PathPoints);
    int32 AddLocalNavigationGridForPoints(class UObject* WorldContextObject, const TArray<FVector>& Locations, const int32 Radius2D, const float Height, bool bRebuildGrids);
    int32 AddLocalNavigationGridForPoint(class UObject* WorldContextObject, const FVector& Location, const int32 Radius2D, const float Height, bool bRebuildGrids);
    int32 AddLocalNavigationGridForCapsule(class UObject* WorldContextObject, const FVector& Location, float CapsuleRadius, float CapsuleHalfHeight, const int32 Radius2D, const float Height, bool bRebuildGrids);
    int32 AddLocalNavigationGridForBox(class UObject* WorldContextObject, const FVector& Location, FVector Extent, FRotator Rotation, const int32 Radius2D, const float Height, bool bRebuildGrids);
};

class UPathFollowingComponent : public UActorComponent
{
    class UNavMovementComponent* MovementComp;
    class ANavigationData* MyNavData;

    void OnNavDataRegistered(class ANavigationData* NavData);
    void OnActorBump(class AActor* SelfActor, class AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    FVector GetPathDestination();
    TEnumAsByte<EPathFollowingAction::Type> GetPathActionType();
};

class UPathFollowingManager : public UObject
{
};

class UPawnAction : public UObject
{
    class UPawnAction* ChildAction;
    class UPawnAction* ParentAction;
    class UPawnActionsComponent* OwnerComponent;
    class UObject* Instigator;
    class UBrainComponent* BrainComp;
    uint8 bAllowNewSameClassInstance;
    uint8 bReplaceActiveSameClassInstance;
    uint8 bShouldPauseMovement;
    uint8 bAlwaysNotifyOnFinished;

    TEnumAsByte<EAIRequestPriority::Type> GetActionPriority();
    void Finish(TEnumAsByte<EPawnActionResult::Type> WithResult);
    class UPawnAction* CreateActionInstance(class UObject* WorldContextObject, TSubclassOf<class UPawnAction> ActionClass);
};

class UPawnAction_BlueprintBase : public UPawnAction
{

    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ActionStart(class APawn* ControlledPawn);
    void ActionResume(class APawn* ControlledPawn);
    void ActionPause(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult::Type> WithResult);
};

class UPawnAction_Move : public UPawnAction
{
    class AActor* GoalActor;
    FVector GoalLocation;
    float AcceptableRadius;
    TSubclassOf<class UNavigationQueryFilter> FilterClass;
    uint8 bAllowStrafe;
    uint8 bFinishOnOverlap;
    uint8 bUsePathfinding;
    uint8 bAllowPartialPath;
    uint8 bProjectGoalToNavigation;
    uint8 bUpdatePathToGoal;
    uint8 bAbortChildActionOnPathChange;

};

class UPawnAction_Repeat : public UPawnAction
{
    class UPawnAction* ActionToRepeat;
    class UPawnAction* RecentActionCopy;
    TEnumAsByte<EPawnActionFailHandling::Type> ChildFailureHandlingMode;

};

class UPawnAction_Sequence : public UPawnAction
{
    TArray<class UPawnAction*> ActionSequence;
    TEnumAsByte<EPawnActionFailHandling::Type> ChildFailureHandlingMode;
    class UPawnAction* RecentActionCopy;

};

class UPawnAction_Wait : public UPawnAction
{
    float TimeToWait;

};

class UPawnActionsComponent : public UActorComponent
{
    class APawn* ControlledPawn;
    TArray<FPawnActionStack> ActionStacks;
    TArray<FPawnActionEvent> ActionEvents;
    class UPawnAction* CurrentAction;

    bool K2_PushAction(class UPawnAction* NewAction, TEnumAsByte<EAIRequestPriority::Type> Priority, class UObject* Instigator);
    bool K2_PerformAction(class APawn* Pawn, class UPawnAction* Action, TEnumAsByte<EAIRequestPriority::Type> Priority);
    TEnumAsByte<EPawnActionAbortState::Type> K2_ForceAbortAction(class UPawnAction* ActionToAbort);
    TEnumAsByte<EPawnActionAbortState::Type> K2_AbortAction(class UPawnAction* ActionToAbort);
};

class UPawnSensingComponent : public UActorComponent
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
    void SeePawnDelegate(class APawn* Pawn);
    FPawnSensingComponentOnHearNoise OnHearNoise;
    void HearNoiseDelegate(class APawn* Instigator, const FVector& Location, float Volume);
    float PeripheralVisionAngle;
    float PeripheralVisionCosine;

    void SetSensingUpdatesEnabled(const bool bEnabled);
    void SetSensingInterval(const float NewSensingInterval);
    void SetPeripheralVisionAngle(const float NewPeripheralVisionAngle);
    void SeePawnDelegate__DelegateSignature(class APawn* Pawn);
    void HearNoiseDelegate__DelegateSignature(class APawn* Instigator, const FVector& Location, float Volume);
    float GetPeripheralVisionCosine();
    float GetPeripheralVisionAngle();
};

class UVisualLoggerExtension : public UObject
{
};

#endif
