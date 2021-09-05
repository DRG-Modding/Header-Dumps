// Class AIModule.AIController
// Size: 0x328 (Inherited: 0x298)
struct AAIController : AController {
	char bStartAILogicOnPossess : 1; // 0x2d0(0x01)
	char bStopAILogicOnUnposses : 1; // 0x2d0(0x01)
	char bLOSflag : 1; // 0x2d0(0x01)
	char bSkipExtraLOSChecks : 1; // 0x2d0(0x01)
	char bAllowStrafe : 1; // 0x2d0(0x01)
	char bWantsPlayerState : 1; // 0x2d0(0x01)
	char bSetControlRotationFromPawnOrientation : 1; // 0x2d0(0x01)
	UPathFollowingComponent* PathFollowingComponent; // 0x2d8(0x08)
	UBrainComponent* BrainComponent; // 0x2e0(0x08)
	UAIPerceptionComponent* PerceptionComponent; // 0x2e8(0x08)
	UPawnActionsComponent* ActionsComp; // 0x2f0(0x08)
	UBlackboardComponent* Blackboard; // 0x2f8(0x08)
	UGameplayTasksComponent* CachedGameplayTasksComponent; // 0x300(0x08)
	UNavigationQueryFilter* DefaultNavigationFilterClass; // 0x308(0x08)
	FMulticastInlineDelegate ReceiveMoveCompleted; // 0x310(0x10)

	bool UseBlackboard(UBlackboardData* BlackboardAsset, UBlackboardComponent* BlackboardComponent);
	void UnclaimTaskResource(UGameplayTaskResource* ResourceClass);
	void SetPathFollowingComponent(UPathFollowingComponent* NewPFComponent);
	void SetMoveBlockDetection(bool bEnable);
	bool RunBehaviorTree(UBehaviorTree* BTAsset);
	void OnUsingBlackBoard(UBlackboardComponent* BlackboardComp, UBlackboardData* BlackboardAsset);
	void OnGameplayTaskResourcesClaimed(FGameplayResourceSet NewlyClaimed, FGameplayResourceSet FreshlyReleased);
	enum class EPathFollowingRequestResult MoveToLocation(FVector Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, UNavigationQueryFilter* FilterClass, bool bAllowPartialPath);
	enum class EPathFollowingRequestResult MoveToActor(AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, UNavigationQueryFilter* FilterClass, bool bAllowPartialPath);
	void K2_SetFocus(AActor* NewFocus);
	void K2_SetFocalPoint(FVector FP);
	void K2_ClearFocus();
	bool HasPartialPath();
	UPathFollowingComponent* GetPathFollowingComponent();
	enum class EPathFollowingStatus GetMoveStatus();
	FVector GetImmediateMoveDestination();
	AActor* GetFocusActor();
	FVector GetFocalPointOnActor(AActor* Actor);
	FVector GetFocalPoint();
	UAIPerceptionComponent* GetAIPerceptionComponent();
	void ClaimTaskResource(UGameplayTaskResource* ResourceClass);
};

// Class AIModule.BTNode
// Size: 0x58 (Inherited: 0x28)
struct UBTNode : UObject {
	FString NodeName; // 0x30(0x10)
	UBehaviorTree* TreeAsset; // 0x40(0x08)
	UBTCompositeNode* ParentNode; // 0x48(0x08)
};

// Class AIModule.BTAuxiliaryNode
// Size: 0x60 (Inherited: 0x58)
struct UBTAuxiliaryNode : UBTNode {
};

// Class AIModule.BTDecorator
// Size: 0x68 (Inherited: 0x60)
struct UBTDecorator : UBTAuxiliaryNode {
	char pad_60_0 : 7; // 0x60(0x01)
	char bInverseCondition : 1; // 0x60(0x01)
	enum class EBTFlowAbortMode FlowAbortMode; // 0x64(0x01)
};

// Class AIModule.BTDecorator_BlackboardBase
// Size: 0x90 (Inherited: 0x68)
struct UBTDecorator_BlackboardBase : UBTDecorator {
	FBlackboardKeySelector BlackboardKey; // 0x68(0x28)
};

// Class AIModule.BTService
// Size: 0x70 (Inherited: 0x60)
struct UBTService : UBTAuxiliaryNode {
	float Interval; // 0x60(0x04)
	float RandomDeviation; // 0x64(0x04)
	char bCallTickOnSearchStart : 1; // 0x68(0x01)
	char bRestartTimerOnEachActivation : 1; // 0x68(0x01)
};

// Class AIModule.BTTaskNode
// Size: 0x70 (Inherited: 0x58)
struct UBTTaskNode : UBTNode {
	TArray<UBTService*> Services; // 0x58(0x10)
	char bIgnoreRestartSelf : 1; // 0x68(0x01)
};

// Class AIModule.BTTask_BlackboardBase
// Size: 0x98 (Inherited: 0x70)
struct UBTTask_BlackboardBase : UBTTaskNode {
	FBlackboardKeySelector BlackboardKey; // 0x70(0x28)
};

// Class AIModule.BrainComponent
// Size: 0x110 (Inherited: 0xb0)
struct UBrainComponent : UActorComponent {
	UBlackboardComponent* BlackboardComp; // 0xb8(0x08)
	AAIController* AIOwner; // 0xc0(0x08)

	void StopLogic(FString reason);
	void StartLogic();
	void RestartLogic();
	bool IsRunning();
	bool IsPaused();
};

// Class AIModule.BehaviorTreeComponent
// Size: 0x270 (Inherited: 0x110)
struct UBehaviorTreeComponent : UBrainComponent {
	TArray<UBTNode*> NodeInstances; // 0x130(0x10)
	UBehaviorTree* DefaultBehaviorTreeAsset; // 0x268(0x08)

	void SetDynamicSubtree(FGameplayTag InjectTag, UBehaviorTree* BehaviorAsset);
	float GetTagCooldownEndTime(FGameplayTag CooldownTag);
	void AddCooldownTagDuration(FGameplayTag CooldownTag, float CooldownDuration, bool bAddToExistingDuration);
};

// Class AIModule.AIAsyncTaskBlueprintProxy
// Size: 0x68 (Inherited: 0x28)
struct UAIAsyncTaskBlueprintProxy : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
	FMulticastInlineDelegate OnFail; // 0x38(0x10)

	void OnMoveCompleted(FAIRequestID RequestID, enum class EPathFollowingResult MovementResult);
};

// Class AIModule.AIBlueprintHelperLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAIBlueprintHelperLibrary : UBlueprintFunctionLibrary {

	void UnlockAIResourcesWithAnimation(UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic);
	APawn* SpawnAIFromClass(UObject* WorldContextObject, APawn* PawnClass, UBehaviorTree* BehaviorTree, FVector Location, FRotator Rotation, bool bNoCollisionFail, AActor* Owner);
	void SimpleMoveToLocation(AController* Controller, FVector Goal);
	void SimpleMoveToActor(AController* Controller, AActor* Goal);
	void SendAIMessage(APawn* Target, FName Message, UObject* MessageSource, bool bSuccess);
	void LockAIResourcesWithAnimation(UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic);
	bool IsValidAIRotation(FRotator Rotation);
	bool IsValidAILocation(FVector Location);
	bool IsValidAIDirection(FVector DirectionVector);
	UNavigationPath* GetCurrentPath(AController* Controller);
	UBlackboardComponent* GetBlackboard(AActor* Target);
	AAIController* GetAIController(AActor* ControlledActor);
	UAIAsyncTaskBlueprintProxy* CreateMoveToProxyObject(UObject* WorldContextObject, APawn* Pawn, FVector Destination, AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap);
};

// Class AIModule.AIDataProvider
// Size: 0x28 (Inherited: 0x28)
struct UAIDataProvider : UObject {
};

// Class AIModule.AIDataProvider_QueryParams
// Size: 0x40 (Inherited: 0x28)
struct UAIDataProvider_QueryParams : UAIDataProvider {
	FName ParamName; // 0x28(0x08)
	float FloatValue; // 0x30(0x04)
	int32_t IntValue; // 0x34(0x04)
	bool boolValue; // 0x38(0x01)
};

// Class AIModule.AIDataProvider_Random
// Size: 0x50 (Inherited: 0x40)
struct UAIDataProvider_Random : UAIDataProvider_QueryParams {
	float Min; // 0x40(0x04)
	float Max; // 0x44(0x04)
	char bInteger : 1; // 0x48(0x01)
};

// Class AIModule.AIHotSpotManager
// Size: 0x28 (Inherited: 0x28)
struct UAIHotSpotManager : UObject {
};

// Class AIModule.AIPerceptionComponent
// Size: 0x180 (Inherited: 0xb0)
struct UAIPerceptionComponent : UActorComponent {
	TArray<UAISenseConfig*> SensesConfig; // 0xb0(0x10)
	UAISense* DominantSense; // 0xc0(0x08)
	AAIController* AIOwner; // 0xd8(0x08)
	FMulticastInlineDelegate OnPerceptionUpdated; // 0x160(0x10)
	FMulticastInlineDelegate OnTargetPerceptionUpdated; // 0x170(0x10)

	void SetSenseEnabled(UAISense* SenseClass, bool bEnable);
	void RequestStimuliListenerUpdate();
	void OnOwnerEndPlay(AActor* Actor, enum class EEndPlayReason EndPlayReason);
	void GetPerceivedHostileActors(TArray<AActor*> OutActors);
	void GetPerceivedActors(UAISense* SenseToUse, TArray<AActor*> OutActors);
	void GetKnownPerceivedActors(UAISense* SenseToUse, TArray<AActor*> OutActors);
	void GetCurrentlyPerceivedActors(UAISense* SenseToUse, TArray<AActor*> OutActors);
	bool GetActorsPerception(AActor* Actor, FActorPerceptionBlueprintInfo Info);
	void ForgetAll();
};

// Class AIModule.AIPerceptionListenerInterface
// Size: 0x28 (Inherited: 0x28)
struct UAIPerceptionListenerInterface : UInterface {
};

// Class AIModule.AIPerceptionStimuliSourceComponent
// Size: 0xc8 (Inherited: 0xb0)
struct UAIPerceptionStimuliSourceComponent : UActorComponent {
	char bAutoRegisterAsSource : 1; // 0xb0(0x01)
	TArray<UAISense*> RegisterAsSourceForSenses; // 0xb8(0x10)

	void UnregisterFromSense(UAISense* SenseClass);
	void UnregisterFromPerceptionSystem();
	void RegisterWithPerceptionSystem();
	void RegisterForSense(UAISense* SenseClass);
};

// Class AIModule.AISubsystem
// Size: 0x38 (Inherited: 0x28)
struct UAISubsystem : UObject {
	UAISystem* AISystem; // 0x30(0x08)
};

// Class AIModule.AIPerceptionSystem
// Size: 0x138 (Inherited: 0x38)
struct UAIPerceptionSystem : UAISubsystem {
	TArray<UAISense*> Senses; // 0x88(0x10)
	float PerceptionAgingRate; // 0x98(0x04)

	void ReportPerceptionEvent(UObject* WorldContextObject, UAISenseEvent* PerceptionEvent);
	void ReportEvent(UAISenseEvent* PerceptionEvent);
	bool RegisterPerceptionStimuliSource(UObject* WorldContextObject, UAISense* Sense, AActor* Target);
	void OnPerceptionStimuliSourceEndPlay(AActor* Actor, enum class EEndPlayReason EndPlayReason);
	UAISense* GetSenseClassForStimulus(UObject* WorldContextObject, FAIStimulus Stimulus);
};

// Class AIModule.AIResourceInterface
// Size: 0x28 (Inherited: 0x28)
struct UAIResourceInterface : UInterface {
};

// Class AIModule.AIResource_Movement
// Size: 0x38 (Inherited: 0x38)
struct UAIResource_Movement : UGameplayTaskResource {
};

// Class AIModule.AIResource_Logic
// Size: 0x38 (Inherited: 0x38)
struct UAIResource_Logic : UGameplayTaskResource {
};

// Class AIModule.AISense
// Size: 0x80 (Inherited: 0x28)
struct UAISense : UObject {
	float DefaultExpirationAge; // 0x28(0x04)
	enum class EAISenseNotifyType NotifyType; // 0x2c(0x01)
	char bWantsNewPawnNotification : 1; // 0x30(0x01)
	char bAutoRegisterAllPawnsAsSources : 1; // 0x30(0x01)
	UAIPerceptionSystem* PerceptionSystemInstance; // 0x38(0x08)
};

// Class AIModule.AISense_Blueprint
// Size: 0xa8 (Inherited: 0x80)
struct UAISense_Blueprint : UAISense {
	UUserDefinedStruct* ListenerDataType; // 0x80(0x08)
	TArray<UAIPerceptionComponent*> ListenerContainer; // 0x88(0x10)
	TArray<UAISenseEvent*> UnprocessedEvents; // 0x98(0x10)

	float OnUpdate(TArray<UAISenseEvent*> EventsToProcess);
	void OnListenerUpdated(AActor* ActorListener, UAIPerceptionComponent* PerceptionComponent);
	void OnListenerUnregistered(AActor* ActorListener, UAIPerceptionComponent* PerceptionComponent);
	void OnListenerRegistered(AActor* ActorListener, UAIPerceptionComponent* PerceptionComponent);
	void K2_OnNewPawn(APawn* NewPawn);
	void GetAllListenerComponents(TArray<UAIPerceptionComponent*> ListenerComponents);
	void GetAllListenerActors(TArray<AActor*> ListenerActors);
};

// Class AIModule.AISense_Damage
// Size: 0x90 (Inherited: 0x80)
struct UAISense_Damage : UAISense {
	TArray<FAIDamageEvent> RegisteredEvents; // 0x80(0x10)

	void ReportDamageEvent(UObject* WorldContextObject, AActor* DamagedActor, AActor* Instigator, float damageAmount, FVector EventLocation, FVector HitLocation);
};

// Class AIModule.AISense_Hearing
// Size: 0xe8 (Inherited: 0x80)
struct UAISense_Hearing : UAISense {
	TArray<FAINoiseEvent> NoiseEvents; // 0x80(0x10)
	float SpeedOfSoundSq; // 0x90(0x04)

	void ReportNoiseEvent(UObject* WorldContextObject, FVector NoiseLocation, float Loudness, AActor* Instigator, float MaxRange, FName Tag);
};

// Class AIModule.AISense_Prediction
// Size: 0x90 (Inherited: 0x80)
struct UAISense_Prediction : UAISense {
	TArray<FAIPredictionEvent> RegisteredEvents; // 0x80(0x10)

	void RequestPawnPredictionEvent(APawn* Requestor, AActor* PredictedActor, float PredictionTime);
	void RequestControllerPredictionEvent(AAIController* Requestor, AActor* PredictedActor, float PredictionTime);
};

// Class AIModule.AISense_Sight
// Size: 0x170 (Inherited: 0x80)
struct UAISense_Sight : UAISense {
	int32_t MaxTracesPerTick; // 0x148(0x04)
	int32_t MinQueriesPerTimeSliceCheck; // 0x14c(0x04)
	double MaxTimeSlicePerTick; // 0x150(0x08)
	float HighImportanceQueryDistanceThreshold; // 0x158(0x04)
	float MaxQueryImportance; // 0x160(0x04)
	float SightLimitQueryImportance; // 0x164(0x04)
};

// Class AIModule.AISense_Team
// Size: 0x90 (Inherited: 0x80)
struct UAISense_Team : UAISense {
	TArray<FAITeamStimulusEvent> RegisteredEvents; // 0x80(0x10)
};

// Class AIModule.AISense_Touch
// Size: 0x90 (Inherited: 0x80)
struct UAISense_Touch : UAISense {
	TArray<FAITouchEvent> RegisteredEvents; // 0x80(0x10)
};

// Class AIModule.AISenseBlueprintListener
// Size: 0x108 (Inherited: 0x108)
struct UAISenseBlueprintListener : UUserDefinedStruct {
};

// Class AIModule.AISenseConfig
// Size: 0x48 (Inherited: 0x28)
struct UAISenseConfig : UObject {
	FColor DebugColor; // 0x28(0x04)
	float MaxAge; // 0x2c(0x04)
	char bStartsEnabled : 1; // 0x30(0x01)
};

// Class AIModule.AISenseConfig_Blueprint
// Size: 0x50 (Inherited: 0x48)
struct UAISenseConfig_Blueprint : UAISenseConfig {
	UAISense_Blueprint* Implementation; // 0x48(0x08)
};

// Class AIModule.AISenseConfig_Damage
// Size: 0x50 (Inherited: 0x48)
struct UAISenseConfig_Damage : UAISenseConfig {
	UAISense_Damage* Implementation; // 0x48(0x08)
};

// Class AIModule.AISenseConfig_Hearing
// Size: 0x60 (Inherited: 0x48)
struct UAISenseConfig_Hearing : UAISenseConfig {
	UAISense_Hearing* Implementation; // 0x48(0x08)
	float HearingRange; // 0x50(0x04)
	float LoSHearingRange; // 0x54(0x04)
	char bUseLoSHearing : 1; // 0x58(0x01)
	FAISenseAffiliationFilter DetectionByAffiliation; // 0x5c(0x04)
};

// Class AIModule.AISenseConfig_Prediction
// Size: 0x48 (Inherited: 0x48)
struct UAISenseConfig_Prediction : UAISenseConfig {
};

// Class AIModule.AISenseConfig_Sight
// Size: 0x68 (Inherited: 0x48)
struct UAISenseConfig_Sight : UAISenseConfig {
	UAISense_Sight* Implementation; // 0x48(0x08)
	float SightRadius; // 0x50(0x04)
	float LoseSightRadius; // 0x54(0x04)
	float PeripheralVisionAngleDegrees; // 0x58(0x04)
	FAISenseAffiliationFilter DetectionByAffiliation; // 0x5c(0x04)
	float AutoSuccessRangeFromLastSeenLocation; // 0x60(0x04)
};

// Class AIModule.AISenseConfig_Team
// Size: 0x48 (Inherited: 0x48)
struct UAISenseConfig_Team : UAISenseConfig {
};

// Class AIModule.AISenseConfig_Touch
// Size: 0x48 (Inherited: 0x48)
struct UAISenseConfig_Touch : UAISenseConfig {
};

// Class AIModule.AISenseEvent
// Size: 0x28 (Inherited: 0x28)
struct UAISenseEvent : UObject {
};

// Class AIModule.AISenseEvent_Damage
// Size: 0x58 (Inherited: 0x28)
struct UAISenseEvent_Damage : UAISenseEvent {
	FAIDamageEvent Event; // 0x28(0x30)
};

// Class AIModule.AISenseEvent_Hearing
// Size: 0x58 (Inherited: 0x28)
struct UAISenseEvent_Hearing : UAISenseEvent {
	FAINoiseEvent Event; // 0x28(0x30)
};

// Class AIModule.AISightTargetInterface
// Size: 0x28 (Inherited: 0x28)
struct UAISightTargetInterface : UInterface {
};

// Class AIModule.AISystem
// Size: 0x130 (Inherited: 0x58)
struct UAISystem : UAISystemBase {
	FSoftClassPath PerceptionSystemClassName; // 0x58(0x18)
	FSoftClassPath HotSpotManagerClassName; // 0x70(0x18)
	float AcceptanceRadius; // 0x88(0x04)
	float PathfollowingRegularPathPointAcceptanceRadius; // 0x8c(0x04)
	float PathfollowingNavLinkAcceptanceRadius; // 0x90(0x04)
	bool bFinishMoveOnGoalOverlap; // 0x94(0x01)
	bool bAcceptPartialPaths; // 0x95(0x01)
	bool bAllowStrafing; // 0x96(0x01)
	bool bEnableBTAITasks; // 0x97(0x01)
	bool bAllowControllersAsEQSQuerier; // 0x98(0x01)
	bool bEnableDebuggerPlugin; // 0x99(0x01)
	bool bForgetStaleActors; // 0x9a(0x01)
	enum class ECollisionChannel DefaultSightCollisionChannel; // 0x9b(0x01)
	UBehaviorTreeManager* BehaviorTreeManager; // 0xa0(0x08)
	UEnvQueryManager* EnvironmentQueryManager; // 0xa8(0x08)
	UAIPerceptionSystem* PerceptionSystem; // 0xb0(0x08)
	TArray<UAIAsyncTaskBlueprintProxy*> AllProxyObjects; // 0xb8(0x10)
	UAIHotSpotManager* HotSpotManager; // 0xc8(0x08)
	UNavLocalGridManager* NavLocalGrids; // 0xd0(0x08)

	void AILoggingVerbose();
	void AIIgnorePlayers();
};

// Class AIModule.AITask
// Size: 0x70 (Inherited: 0x68)
struct UAITask : UGameplayTask {
	AAIController* OwnerController; // 0x68(0x08)
};

// Class AIModule.AITask_LockLogic
// Size: 0x70 (Inherited: 0x70)
struct UAITask_LockLogic : UAITask {
};

// Class AIModule.AITask_MoveTo
// Size: 0x110 (Inherited: 0x70)
struct UAITask_MoveTo : UAITask {
	FMulticastInlineDelegate OnRequestFailed; // 0x70(0x10)
	FMulticastInlineDelegate OnMoveFinished; // 0x80(0x10)
	FAIMoveRequest MoveRequest; // 0x90(0x40)

	UAITask_MoveTo* AIMoveTo(AAIController* Controller, FVector GoalLocation, AActor* GoalActor, float AcceptanceRadius, enum class EAIOptionFlag StopOnOverlap, enum class EAIOptionFlag AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking, enum class EAIOptionFlag ProjectGoalOnNavigation);
};

// Class AIModule.AITask_RunEQS
// Size: 0xe8 (Inherited: 0x70)
struct UAITask_RunEQS : UAITask {

	UAITask_RunEQS* RunEQS(AAIController* Controller, UEnvQuery* QueryTemplate);
};

// Class AIModule.BehaviorTree
// Size: 0x68 (Inherited: 0x28)
struct UBehaviorTree : UObject {
	UBTCompositeNode* RootNode; // 0x30(0x08)
	UBlackboardData* BlackboardAsset; // 0x38(0x08)
	TArray<UBTDecorator*> RootDecorators; // 0x40(0x10)
	TArray<FBTDecoratorLogic> RootDecoratorOps; // 0x50(0x10)
};

// Class AIModule.BehaviorTreeManager
// Size: 0x50 (Inherited: 0x28)
struct UBehaviorTreeManager : UObject {
	int32_t MaxDebuggerSteps; // 0x28(0x04)
	TArray<FBehaviorTreeTemplateInfo> LoadedTemplates; // 0x30(0x10)
	TArray<UBehaviorTreeComponent*> ActiveComponents; // 0x40(0x10)
};

// Class AIModule.BehaviorTreeTypes
// Size: 0x28 (Inherited: 0x28)
struct UBehaviorTreeTypes : UObject {
};

// Class AIModule.BlackboardAssetProvider
// Size: 0x28 (Inherited: 0x28)
struct UBlackboardAssetProvider : UInterface {

	UBlackboardData* GetBlackboardAsset();
};

// Class AIModule.BlackboardComponent
// Size: 0x1b0 (Inherited: 0xb0)
struct UBlackboardComponent : UActorComponent {
	UBrainComponent* BrainComp; // 0xb0(0x08)
	UBlackboardData* DefaultBlackboardAsset; // 0xb8(0x08)
	UBlackboardData* BlackboardAsset; // 0xc0(0x08)
	TArray<UBlackboardKeyType*> KeyInstances; // 0xe8(0x10)

	void SetValueAsVector(FName KeyName, FVector VectorValue);
	void SetValueAsString(FName KeyName, FString StringValue);
	void SetValueAsRotator(FName KeyName, FRotator VectorValue);
	void SetValueAsObject(FName KeyName, UObject* ObjectValue);
	void SetValueAsName(FName KeyName, FName nameValue);
	void SetValueAsInt(FName KeyName, int32_t IntValue);
	void SetValueAsFloat(FName KeyName, float FloatValue);
	void SetValueAsEnum(FName KeyName, char EnumValue);
	void SetValueAsClass(FName KeyName, UObject* ClassValue);
	void SetValueAsBool(FName KeyName, bool boolValue);
	bool IsVectorValueSet(FName KeyName);
	FVector GetValueAsVector(FName KeyName);
	FString GetValueAsString(FName KeyName);
	FRotator GetValueAsRotator(FName KeyName);
	UObject* GetValueAsObject(FName KeyName);
	FName GetValueAsName(FName KeyName);
	int32_t GetValueAsInt(FName KeyName);
	float GetValueAsFloat(FName KeyName);
	char GetValueAsEnum(FName KeyName);
	UObject* GetValueAsClass(FName KeyName);
	bool GetValueAsBool(FName KeyName);
	bool GetRotationFromEntry(FName KeyName, FRotator ResultRotation);
	bool GetLocationFromEntry(FName KeyName, FVector ResultLocation);
	void ClearValue(FName KeyName);
};

// Class AIModule.BlackboardData
// Size: 0x50 (Inherited: 0x30)
struct UBlackboardData : UDataAsset {
	UBlackboardData* Parent; // 0x30(0x08)
	TArray<FBlackboardEntry> Keys; // 0x38(0x10)
	char bHasSynchronizedKeys : 1; // 0x48(0x01)
};

// Class AIModule.BlackboardKeyType
// Size: 0x30 (Inherited: 0x28)
struct UBlackboardKeyType : UObject {
};

// Class AIModule.BlackboardKeyType_Bool
// Size: 0x30 (Inherited: 0x30)
struct UBlackboardKeyType_Bool : UBlackboardKeyType {
};

// Class AIModule.BlackboardKeyType_Class
// Size: 0x38 (Inherited: 0x30)
struct UBlackboardKeyType_Class : UBlackboardKeyType {
	UObject* BaseClass; // 0x30(0x08)
};

// Class AIModule.BlackboardKeyType_Enum
// Size: 0x50 (Inherited: 0x30)
struct UBlackboardKeyType_Enum : UBlackboardKeyType {
	UEnum* EnumType; // 0x30(0x08)
	FString EnumName; // 0x38(0x10)
	char bIsEnumNameValid : 1; // 0x48(0x01)
};

// Class AIModule.BlackboardKeyType_Float
// Size: 0x30 (Inherited: 0x30)
struct UBlackboardKeyType_Float : UBlackboardKeyType {
};

// Class AIModule.BlackboardKeyType_Int
// Size: 0x30 (Inherited: 0x30)
struct UBlackboardKeyType_Int : UBlackboardKeyType {
};

// Class AIModule.BlackboardKeyType_Name
// Size: 0x30 (Inherited: 0x30)
struct UBlackboardKeyType_Name : UBlackboardKeyType {
};

// Class AIModule.BlackboardKeyType_NativeEnum
// Size: 0x48 (Inherited: 0x30)
struct UBlackboardKeyType_NativeEnum : UBlackboardKeyType {
	FString EnumName; // 0x30(0x10)
	UEnum* EnumType; // 0x40(0x08)
};

// Class AIModule.BlackboardKeyType_Object
// Size: 0x38 (Inherited: 0x30)
struct UBlackboardKeyType_Object : UBlackboardKeyType {
	UObject* BaseClass; // 0x30(0x08)
};

// Class AIModule.BlackboardKeyType_Rotator
// Size: 0x30 (Inherited: 0x30)
struct UBlackboardKeyType_Rotator : UBlackboardKeyType {
};

// Class AIModule.BlackboardKeyType_String
// Size: 0x40 (Inherited: 0x30)
struct UBlackboardKeyType_String : UBlackboardKeyType {
	FString StringValue; // 0x30(0x10)
};

// Class AIModule.BlackboardKeyType_Vector
// Size: 0x30 (Inherited: 0x30)
struct UBlackboardKeyType_Vector : UBlackboardKeyType {
};

// Class AIModule.BTCompositeNode
// Size: 0x90 (Inherited: 0x58)
struct UBTCompositeNode : UBTNode {
	TArray<FBTCompositeChild> Children; // 0x58(0x10)
	TArray<UBTService*> Services; // 0x68(0x10)
	char bApplyDecoratorScope : 1; // 0x88(0x01)
};

// Class AIModule.BTComposite_Selector
// Size: 0x90 (Inherited: 0x90)
struct UBTComposite_Selector : UBTCompositeNode {
};

// Class AIModule.BTComposite_Sequence
// Size: 0x90 (Inherited: 0x90)
struct UBTComposite_Sequence : UBTCompositeNode {
};

// Class AIModule.BTComposite_SimpleParallel
// Size: 0x98 (Inherited: 0x90)
struct UBTComposite_SimpleParallel : UBTCompositeNode {
	enum class EBTParallelMode FinishMode; // 0x90(0x01)
};

// Class AIModule.BTDecorator_Blackboard
// Size: 0xc0 (Inherited: 0x90)
struct UBTDecorator_Blackboard : UBTDecorator_BlackboardBase {
	int32_t IntValue; // 0x90(0x04)
	float FloatValue; // 0x94(0x04)
	FString StringValue; // 0x98(0x10)
	FString CachedDescription; // 0xa8(0x10)
	char OperationType; // 0xb8(0x01)
	enum class EBTBlackboardRestart NotifyObserver; // 0xb9(0x01)
};

// Class AIModule.BTDecorator_BlueprintBase
// Size: 0xa0 (Inherited: 0x68)
struct UBTDecorator_BlueprintBase : UBTDecorator {
	AAIController* AIOwner; // 0x68(0x08)
	AActor* ActorOwner; // 0x70(0x08)
	TArray<FName> ObservedKeyNames; // 0x78(0x10)
	char bShowPropertyDetails : 1; // 0x98(0x01)
	char bCheckConditionOnlyBlackBoardChanges : 1; // 0x98(0x01)
	char bIsObservingBB : 1; // 0x98(0x01)

	void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
	void ReceiveObserverDeactivatedAI(AAIController* OwnerController, APawn* ControlledPawn);
	void ReceiveObserverDeactivated(AActor* OwnerActor);
	void ReceiveObserverActivatedAI(AAIController* OwnerController, APawn* ControlledPawn);
	void ReceiveObserverActivated(AActor* OwnerActor);
	void ReceiveExecutionStartAI(AAIController* OwnerController, APawn* ControlledPawn);
	void ReceiveExecutionStart(AActor* OwnerActor);
	void ReceiveExecutionFinishAI(AAIController* OwnerController, APawn* ControlledPawn, enum class EBTNodeResult NodeResult);
	void ReceiveExecutionFinish(AActor* OwnerActor, enum class EBTNodeResult NodeResult);
	bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);
	bool PerformConditionCheck(AActor* OwnerActor);
	bool IsDecoratorObserverActive();
	bool IsDecoratorExecutionActive();
};

// Class AIModule.BTDecorator_CheckGameplayTagsOnActor
// Size: 0xc8 (Inherited: 0x68)
struct UBTDecorator_CheckGameplayTagsOnActor : UBTDecorator {
	FBlackboardKeySelector ActorToCheck; // 0x68(0x28)
	enum class EGameplayContainerMatchType TagsToMatch; // 0x90(0x01)
	FGameplayTagContainer GameplayTags; // 0x98(0x20)
	FString CachedDescription; // 0xb8(0x10)
};

// Class AIModule.BTDecorator_CompareBBEntries
// Size: 0xc0 (Inherited: 0x68)
struct UBTDecorator_CompareBBEntries : UBTDecorator {
	enum class EBlackBoardEntryComparison Operator; // 0x68(0x01)
	FBlackboardKeySelector BlackboardKeyA; // 0x70(0x28)
	FBlackboardKeySelector BlackboardKeyB; // 0x98(0x28)
};

// Class AIModule.BTDecorator_ConditionalLoop
// Size: 0xc0 (Inherited: 0xc0)
struct UBTDecorator_ConditionalLoop : UBTDecorator_Blackboard {
};

// Class AIModule.BTDecorator_ConeCheck
// Size: 0xf0 (Inherited: 0x68)
struct UBTDecorator_ConeCheck : UBTDecorator {
	float ConeHalfAngle; // 0x68(0x04)
	FBlackboardKeySelector ConeOrigin; // 0x70(0x28)
	FBlackboardKeySelector ConeDirection; // 0x98(0x28)
	FBlackboardKeySelector Observed; // 0xc0(0x28)
};

// Class AIModule.BTDecorator_Cooldown
// Size: 0x70 (Inherited: 0x68)
struct UBTDecorator_Cooldown : UBTDecorator {
	float CoolDownTime; // 0x68(0x04)
};

// Class AIModule.BTDecorator_DoesPathExist
// Size: 0xc8 (Inherited: 0x68)
struct UBTDecorator_DoesPathExist : UBTDecorator {
	FBlackboardKeySelector BlackboardKeyA; // 0x68(0x28)
	FBlackboardKeySelector BlackboardKeyB; // 0x90(0x28)
	char bUseSelf : 1; // 0xb8(0x01)
	enum class EPathExistanceQueryType PathQueryType; // 0xbc(0x01)
	UNavigationQueryFilter* FilterClass; // 0xc0(0x08)
};

// Class AIModule.BTDecorator_ForceSuccess
// Size: 0x68 (Inherited: 0x68)
struct UBTDecorator_ForceSuccess : UBTDecorator {
};

// Class AIModule.BTDecorator_IsAtLocation
// Size: 0xd8 (Inherited: 0x90)
struct UBTDecorator_IsAtLocation : UBTDecorator_BlackboardBase {
	float AcceptableRadius; // 0x90(0x04)
	FAIDataProviderFloatValue ParametrizedAcceptableRadius; // 0x98(0x38)
	enum class FAIDistanceType GeometricDistanceType; // 0xd0(0x01)
	char bUseParametrizedRadius : 1; // 0xd4(0x01)
	char bUseNavAgentGoalLocation : 1; // 0xd4(0x01)
	char bPathFindingBasedTest : 1; // 0xd4(0x01)
};

// Class AIModule.BTDecorator_IsBBEntryOfClass
// Size: 0x98 (Inherited: 0x90)
struct UBTDecorator_IsBBEntryOfClass : UBTDecorator_BlackboardBase {
	UObject* TestClass; // 0x90(0x08)
};

// Class AIModule.BTDecorator_KeepInCone
// Size: 0xc8 (Inherited: 0x68)
struct UBTDecorator_KeepInCone : UBTDecorator {
	float ConeHalfAngle; // 0x68(0x04)
	FBlackboardKeySelector ConeOrigin; // 0x70(0x28)
	FBlackboardKeySelector Observed; // 0x98(0x28)
	char bUseSelfAsOrigin : 1; // 0xc0(0x01)
	char bUseSelfAsObserved : 1; // 0xc0(0x01)
};

// Class AIModule.BTDecorator_Loop
// Size: 0x78 (Inherited: 0x68)
struct UBTDecorator_Loop : UBTDecorator {
	int32_t NumLoops; // 0x68(0x04)
	bool bInfiniteLoop; // 0x6c(0x01)
	float InfiniteLoopTimeoutTime; // 0x70(0x04)
};

// Class AIModule.BTDecorator_ReachedMoveGoal
// Size: 0x68 (Inherited: 0x68)
struct UBTDecorator_ReachedMoveGoal : UBTDecorator {
};

// Class AIModule.BTDecorator_SetTagCooldown
// Size: 0x78 (Inherited: 0x68)
struct UBTDecorator_SetTagCooldown : UBTDecorator {
	FGameplayTag CooldownTag; // 0x68(0x08)
	float CooldownDuration; // 0x70(0x04)
	bool bAddToExistingDuration; // 0x74(0x01)
};

// Class AIModule.BTDecorator_TagCooldown
// Size: 0x78 (Inherited: 0x68)
struct UBTDecorator_TagCooldown : UBTDecorator {
	FGameplayTag CooldownTag; // 0x68(0x08)
	float CooldownDuration; // 0x70(0x04)
	bool bAddToExistingDuration; // 0x74(0x01)
	bool bActivatesCooldown; // 0x75(0x01)
};

// Class AIModule.BTDecorator_TimeLimit
// Size: 0x70 (Inherited: 0x68)
struct UBTDecorator_TimeLimit : UBTDecorator {
	float TimeLimit; // 0x68(0x04)
};

// Class AIModule.BTFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UBTFunctionLibrary : UBlueprintFunctionLibrary {

	void StopUsingExternalEvent(UBTNode* NodeOwner);
	void StartUsingExternalEvent(UBTNode* NodeOwner, AActor* owningActor);
	void SetBlackboardValueAsVector(UBTNode* NodeOwner, FBlackboardKeySelector Key, FVector Value);
	void SetBlackboardValueAsString(UBTNode* NodeOwner, FBlackboardKeySelector Key, FString Value);
	void SetBlackboardValueAsRotator(UBTNode* NodeOwner, FBlackboardKeySelector Key, FRotator Value);
	void SetBlackboardValueAsObject(UBTNode* NodeOwner, FBlackboardKeySelector Key, UObject* Value);
	void SetBlackboardValueAsName(UBTNode* NodeOwner, FBlackboardKeySelector Key, FName Value);
	void SetBlackboardValueAsInt(UBTNode* NodeOwner, FBlackboardKeySelector Key, int32_t Value);
	void SetBlackboardValueAsFloat(UBTNode* NodeOwner, FBlackboardKeySelector Key, float Value);
	void SetBlackboardValueAsEnum(UBTNode* NodeOwner, FBlackboardKeySelector Key, char Value);
	void SetBlackboardValueAsClass(UBTNode* NodeOwner, FBlackboardKeySelector Key, UObject* Value);
	void SetBlackboardValueAsBool(UBTNode* NodeOwner, FBlackboardKeySelector Key, bool Value);
	UBlackboardComponent* GetOwnersBlackboard(UBTNode* NodeOwner);
	UBehaviorTreeComponent* GetOwnerComponent(UBTNode* NodeOwner);
	FVector GetBlackboardValueAsVector(UBTNode* NodeOwner, FBlackboardKeySelector Key);
	FString GetBlackboardValueAsString(UBTNode* NodeOwner, FBlackboardKeySelector Key);
	FRotator GetBlackboardValueAsRotator(UBTNode* NodeOwner, FBlackboardKeySelector Key);
	UObject* GetBlackboardValueAsObject(UBTNode* NodeOwner, FBlackboardKeySelector Key);
	FName GetBlackboardValueAsName(UBTNode* NodeOwner, FBlackboardKeySelector Key);
	int32_t GetBlackboardValueAsInt(UBTNode* NodeOwner, FBlackboardKeySelector Key);
	float GetBlackboardValueAsFloat(UBTNode* NodeOwner, FBlackboardKeySelector Key);
	char GetBlackboardValueAsEnum(UBTNode* NodeOwner, FBlackboardKeySelector Key);
	UObject* GetBlackboardValueAsClass(UBTNode* NodeOwner, FBlackboardKeySelector Key);
	bool GetBlackboardValueAsBool(UBTNode* NodeOwner, FBlackboardKeySelector Key);
	AActor* GetBlackboardValueAsActor(UBTNode* NodeOwner, FBlackboardKeySelector Key);
	void ClearBlackboardValueAsVector(UBTNode* NodeOwner, FBlackboardKeySelector Key);
	void ClearBlackboardValue(UBTNode* NodeOwner, FBlackboardKeySelector Key);
};

// Class AIModule.BTService_BlackboardBase
// Size: 0x98 (Inherited: 0x70)
struct UBTService_BlackboardBase : UBTService {
	FBlackboardKeySelector BlackboardKey; // 0x70(0x28)
};

// Class AIModule.BTService_BlueprintBase
// Size: 0x98 (Inherited: 0x70)
struct UBTService_BlueprintBase : UBTService {
	AAIController* AIOwner; // 0x70(0x08)
	AActor* ActorOwner; // 0x78(0x08)
	char bShowPropertyDetails : 1; // 0x90(0x01)
	char bShowEventDetails : 1; // 0x90(0x01)

	void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
	void ReceiveSearchStartAI(AAIController* OwnerController, APawn* ControlledPawn);
	void ReceiveSearchStart(AActor* OwnerActor);
	void ReceiveDeactivationAI(AAIController* OwnerController, APawn* ControlledPawn);
	void ReceiveDeactivation(AActor* OwnerActor);
	void ReceiveActivationAI(AAIController* OwnerController, APawn* ControlledPawn);
	void ReceiveActivation(AActor* OwnerActor);
	bool IsServiceActive();
};

// Class AIModule.BTService_DefaultFocus
// Size: 0xa0 (Inherited: 0x98)
struct UBTService_DefaultFocus : UBTService_BlackboardBase {
	char FocusPriority; // 0x98(0x01)
};

// Class AIModule.BTService_RunEQS
// Size: 0xf0 (Inherited: 0x98)
struct UBTService_RunEQS : UBTService_BlackboardBase {
	FEQSParametrizedQueryExecutionRequest EQSRequest; // 0x98(0x48)
};

// Class AIModule.BTTask_BlueprintBase
// Size: 0xa8 (Inherited: 0x70)
struct UBTTask_BlueprintBase : UBTTaskNode {
	AAIController* AIOwner; // 0x70(0x08)
	AActor* ActorOwner; // 0x78(0x08)
	FIntervalCountdown TickInterval; // 0x80(0x08)
	char bShowPropertyDetails : 1; // 0xa0(0x01)

	void SetFinishOnMessageWithId(FName MessageName, int32_t RequestID);
	void SetFinishOnMessage(FName MessageName);
	void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
	void ReceiveExecute(AActor* OwnerActor);
	void ReceiveAbortAI(AAIController* OwnerController, APawn* ControlledPawn);
	void ReceiveAbort(AActor* OwnerActor);
	bool IsTaskExecuting();
	bool IsTaskAborting();
	void FinishExecute(bool bSuccess);
	void FinishAbort();
};

// Class AIModule.BTTask_FinishWithResult
// Size: 0x78 (Inherited: 0x70)
struct UBTTask_FinishWithResult : UBTTaskNode {
	enum class EBTNodeResult Result; // 0x70(0x01)
};

// Class AIModule.BTTask_GameplayTaskBase
// Size: 0x78 (Inherited: 0x70)
struct UBTTask_GameplayTaskBase : UBTTaskNode {
	char bWaitForGameplayTask : 1; // 0x70(0x01)
};

// Class AIModule.BTTask_MakeNoise
// Size: 0x78 (Inherited: 0x70)
struct UBTTask_MakeNoise : UBTTaskNode {
	float Loudnes; // 0x70(0x04)
};

// Class AIModule.BTTask_MoveTo
// Size: 0xb0 (Inherited: 0x98)
struct UBTTask_MoveTo : UBTTask_BlackboardBase {
	float AcceptableRadius; // 0x98(0x04)
	UNavigationQueryFilter* FilterClass; // 0xa0(0x08)
	float ObservedBlackboardValueTolerance; // 0xa8(0x04)
	char bObserveBlackboardValue : 1; // 0xac(0x01)
	char bAllowStrafe : 1; // 0xac(0x01)
	char bAllowPartialPath : 1; // 0xac(0x01)
	char bTrackMovingGoal : 1; // 0xac(0x01)
	char bProjectGoalLocation : 1; // 0xac(0x01)
	char bReachTestIncludesAgentRadius : 1; // 0xac(0x01)
	char bReachTestIncludesGoalRadius : 1; // 0xac(0x01)
	char bStopOnOverlap : 1; // 0xac(0x01)
	char bStopOnOverlapNeedsUpdate : 1; // 0xad(0x01)
};

// Class AIModule.BTTask_MoveDirectlyToward
// Size: 0xb8 (Inherited: 0xb0)
struct UBTTask_MoveDirectlyToward : UBTTask_MoveTo {
	char bDisablePathUpdateOnGoalLocationChange : 1; // 0xb0(0x01)
	char bProjectVectorGoalToNavigation : 1; // 0xb0(0x01)
	char bUpdatedDeprecatedProperties : 1; // 0xb0(0x01)
};

// Class AIModule.BTTask_PawnActionBase
// Size: 0x70 (Inherited: 0x70)
struct UBTTask_PawnActionBase : UBTTaskNode {
};

// Class AIModule.BTTask_PlayAnimation
// Size: 0xb0 (Inherited: 0x70)
struct UBTTask_PlayAnimation : UBTTaskNode {
	UAnimationAsset* AnimationToPlay; // 0x70(0x08)
	char bLooping : 1; // 0x78(0x01)
	char bNonBlocking : 1; // 0x78(0x01)
	UBehaviorTreeComponent* MyOwnerComp; // 0x80(0x08)
	USkeletalMeshComponent* CachedSkelMesh; // 0x88(0x08)
};

// Class AIModule.BTTask_PlaySound
// Size: 0x78 (Inherited: 0x70)
struct UBTTask_PlaySound : UBTTaskNode {
	USoundCue* SoundToPlay; // 0x70(0x08)
};

// Class AIModule.BTTask_PushPawnAction
// Size: 0x78 (Inherited: 0x70)
struct UBTTask_PushPawnAction : UBTTask_PawnActionBase {
	UPawnAction* Action; // 0x70(0x08)
};

// Class AIModule.BTTask_RotateToFaceBBEntry
// Size: 0xa0 (Inherited: 0x98)
struct UBTTask_RotateToFaceBBEntry : UBTTask_BlackboardBase {
	float Precision; // 0x98(0x04)
};

// Class AIModule.BTTask_RunBehavior
// Size: 0x78 (Inherited: 0x70)
struct UBTTask_RunBehavior : UBTTaskNode {
	UBehaviorTree* BehaviorAsset; // 0x70(0x08)
};

// Class AIModule.BTTask_RunBehaviorDynamic
// Size: 0x88 (Inherited: 0x70)
struct UBTTask_RunBehaviorDynamic : UBTTaskNode {
	FGameplayTag InjectionTag; // 0x70(0x08)
	UBehaviorTree* DefaultBehaviorAsset; // 0x78(0x08)
	UBehaviorTree* BehaviorAsset; // 0x80(0x08)
};

// Class AIModule.BTTask_RunEQSQuery
// Size: 0x150 (Inherited: 0x98)
struct UBTTask_RunEQSQuery : UBTTask_BlackboardBase {
	UEnvQuery* QueryTemplate; // 0x98(0x08)
	TArray<FEnvNamedValue> QueryParams; // 0xa0(0x10)
	TArray<FAIDynamicParam> QueryConfig; // 0xb0(0x10)
	enum class EEnvQueryRunMode RunMode; // 0xc0(0x01)
	FBlackboardKeySelector EQSQueryBlackboardKey; // 0xc8(0x28)
	bool bUseBBKey; // 0xf0(0x01)
	FEQSParametrizedQueryExecutionRequest EQSRequest; // 0xf8(0x48)
};

// Class AIModule.BTTask_SetTagCooldown
// Size: 0x80 (Inherited: 0x70)
struct UBTTask_SetTagCooldown : UBTTaskNode {
	FGameplayTag CooldownTag; // 0x70(0x08)
	bool bAddToExistingDuration; // 0x78(0x01)
	float CooldownDuration; // 0x7c(0x04)
};

// Class AIModule.BTTask_Wait
// Size: 0x78 (Inherited: 0x70)
struct UBTTask_Wait : UBTTaskNode {
	float WaitTime; // 0x70(0x04)
	float RandomDeviation; // 0x74(0x04)
};

// Class AIModule.BTTask_WaitBlackboardTime
// Size: 0xa0 (Inherited: 0x78)
struct UBTTask_WaitBlackboardTime : UBTTask_Wait {
	FBlackboardKeySelector BlackboardKey; // 0x78(0x28)
};

// Class AIModule.CrowdAgentInterface
// Size: 0x28 (Inherited: 0x28)
struct UCrowdAgentInterface : UInterface {
};

// Class AIModule.PathFollowingComponent
// Size: 0x258 (Inherited: 0xb0)
struct UPathFollowingComponent : UActorComponent {
	UNavMovementComponent* MovementComp; // 0xe8(0x08)
	ANavigationData* MyNavData; // 0xf8(0x08)

	void OnNavDataRegistered(ANavigationData* NavData);
	void OnActorBump(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, FHitResult Hit);
	FVector GetPathDestination();
	enum class EPathFollowingAction GetPathActionType();
};

// Class AIModule.CrowdFollowingComponent
// Size: 0x298 (Inherited: 0x258)
struct UCrowdFollowingComponent : UPathFollowingComponent {
	UCharacterMovementComponent* CharacterMovement; // 0x260(0x08)
	FVector CrowdAgentMoveDirection; // 0x268(0x0c)

	void SuspendCrowdSteering(bool bSuspend);
};

// Class AIModule.CrowdManager
// Size: 0xf0 (Inherited: 0x28)
struct UCrowdManager : UCrowdManagerBase {
	ANavigationData* MyNavData; // 0x28(0x08)
	TArray<FCrowdAvoidanceConfig> AvoidanceConfig; // 0x30(0x10)
	TArray<FCrowdAvoidanceSamplingPattern> SamplingPatterns; // 0x40(0x10)
	int32_t MaxAgents; // 0x50(0x04)
	float MaxAgentRadius; // 0x54(0x04)
	int32_t MaxAvoidedAgents; // 0x58(0x04)
	int32_t MaxAvoidedWalls; // 0x5c(0x04)
	float NavmeshCheckInterval; // 0x60(0x04)
	float PathOptimizationInterval; // 0x64(0x04)
	float SeparationDirClamp; // 0x68(0x04)
	float PathOffsetRadiusMultiplier; // 0x6c(0x04)
	char pad_70_0 : 4; // 0x70(0x01)
	char bResolveCollisions : 1; // 0x70(0x01)
};

// Class AIModule.DetourCrowdAIController
// Size: 0x328 (Inherited: 0x328)
struct ADetourCrowdAIController : AAIController {
};

// Class AIModule.EnvQuery
// Size: 0x48 (Inherited: 0x30)
struct UEnvQuery : UDataAsset {
	FName QueryName; // 0x30(0x08)
	TArray<UEnvQueryOption*> options; // 0x38(0x10)
};

// Class AIModule.EnvQueryContext
// Size: 0x28 (Inherited: 0x28)
struct UEnvQueryContext : UObject {
};

// Class AIModule.EnvQueryContext_BlueprintBase
// Size: 0x30 (Inherited: 0x28)
struct UEnvQueryContext_BlueprintBase : UEnvQueryContext {

	void ProvideSingleLocation(UObject* QuerierObject, AActor* QuerierActor, FVector ResultingLocation);
	void ProvideSingleActor(UObject* QuerierObject, AActor* QuerierActor, AActor* ResultingActor);
	void ProvideLocationsSet(UObject* QuerierObject, AActor* QuerierActor, TArray<FVector> ResultingLocationSet);
	void ProvideActorsSet(UObject* QuerierObject, AActor* QuerierActor, TArray<AActor*> ResultingActorsSet);
};

// Class AIModule.EnvQueryContext_Item
// Size: 0x28 (Inherited: 0x28)
struct UEnvQueryContext_Item : UEnvQueryContext {
};

// Class AIModule.EnvQueryContext_Querier
// Size: 0x28 (Inherited: 0x28)
struct UEnvQueryContext_Querier : UEnvQueryContext {
};

// Class AIModule.EnvQueryDebugHelpers
// Size: 0x28 (Inherited: 0x28)
struct UEnvQueryDebugHelpers : UObject {
};

// Class AIModule.EnvQueryNode
// Size: 0x30 (Inherited: 0x28)
struct UEnvQueryNode : UObject {
	int32_t VerNum; // 0x28(0x04)
};

// Class AIModule.EnvQueryGenerator
// Size: 0x50 (Inherited: 0x30)
struct UEnvQueryGenerator : UEnvQueryNode {
	FString OptionName; // 0x30(0x10)
	UEnvQueryItemType* ItemType; // 0x40(0x08)
	char bAutoSortTests : 1; // 0x48(0x01)
};

// Class AIModule.EnvQueryGenerator_ActorsOfClass
// Size: 0xd0 (Inherited: 0x50)
struct UEnvQueryGenerator_ActorsOfClass : UEnvQueryGenerator {
	AActor* SearchedActorClass; // 0x50(0x08)
	FAIDataProviderBoolValue GenerateOnlyActorsInRadius; // 0x58(0x38)
	FAIDataProviderFloatValue SearchRadius; // 0x90(0x38)
	UEnvQueryContext* SearchCenter; // 0xc8(0x08)
};

// Class AIModule.EnvQueryGenerator_BlueprintBase
// Size: 0x80 (Inherited: 0x50)
struct UEnvQueryGenerator_BlueprintBase : UEnvQueryGenerator {
	FText GeneratorsActionDescription; // 0x50(0x18)
	UEnvQueryContext* Context; // 0x68(0x08)
	UEnvQueryItemType* GeneratedItemType; // 0x70(0x08)

	UObject* GetQuerier();
	void DoItemGeneration(TArray<FVector> ContextLocations);
	void AddGeneratedVector(FVector GeneratedVector);
	void AddGeneratedActor(AActor* GeneratedActor);
};

// Class AIModule.EnvQueryGenerator_Composite
// Size: 0x70 (Inherited: 0x50)
struct UEnvQueryGenerator_Composite : UEnvQueryGenerator {
	TArray<UEnvQueryGenerator*> generators; // 0x50(0x10)
	char bAllowDifferentItemTypes : 1; // 0x60(0x01)
	char bHasMatchingItemType : 1; // 0x60(0x01)
	UEnvQueryItemType* ForcedItemType; // 0x68(0x08)
};

// Class AIModule.EnvQueryGenerator_ProjectedPoints
// Size: 0x80 (Inherited: 0x50)
struct UEnvQueryGenerator_ProjectedPoints : UEnvQueryGenerator {
	FEnvTraceData ProjectionData; // 0x50(0x30)
};

// Class AIModule.EnvQueryGenerator_Cone
// Size: 0x170 (Inherited: 0x80)
struct UEnvQueryGenerator_Cone : UEnvQueryGenerator_ProjectedPoints {
	FAIDataProviderFloatValue AlignedPointsDistance; // 0x80(0x38)
	FAIDataProviderFloatValue ConeDegrees; // 0xb8(0x38)
	FAIDataProviderFloatValue AngleStep; // 0xf0(0x38)
	FAIDataProviderFloatValue Range; // 0x128(0x38)
	UEnvQueryContext* CenterActor; // 0x160(0x08)
	char bIncludeContextLocation : 1; // 0x168(0x01)
};

// Class AIModule.EnvQueryGenerator_CurrentLocation
// Size: 0x58 (Inherited: 0x50)
struct UEnvQueryGenerator_CurrentLocation : UEnvQueryGenerator {
	UEnvQueryContext* QueryContext; // 0x50(0x08)
};

// Class AIModule.EnvQueryGenerator_Donut
// Size: 0x1d0 (Inherited: 0x80)
struct UEnvQueryGenerator_Donut : UEnvQueryGenerator_ProjectedPoints {
	FAIDataProviderFloatValue InnerRadius; // 0x80(0x38)
	FAIDataProviderFloatValue OuterRadius; // 0xb8(0x38)
	FAIDataProviderIntValue NumberOfRings; // 0xf0(0x38)
	FAIDataProviderIntValue PointsPerRing; // 0x128(0x38)
	FEnvDirection ArcDirection; // 0x160(0x20)
	FAIDataProviderFloatValue ArcAngle; // 0x180(0x38)
	bool bUseSpiralPattern; // 0x1b8(0x01)
	UEnvQueryContext* Center; // 0x1c0(0x08)
	char bDefineArc : 1; // 0x1c8(0x01)
};

// Class AIModule.EnvQueryGenerator_OnCircle
// Size: 0x210 (Inherited: 0x80)
struct UEnvQueryGenerator_OnCircle : UEnvQueryGenerator_ProjectedPoints {
	FAIDataProviderFloatValue CircleRadius; // 0x80(0x38)
	FAIDataProviderFloatValue SpaceBetween; // 0xb8(0x38)
	FAIDataProviderIntValue NumberOfPoints; // 0xf0(0x38)
	enum class EPointOnCircleSpacingMethod PointOnCircleSpacingMethod; // 0x128(0x01)
	FEnvDirection ArcDirection; // 0x130(0x20)
	FAIDataProviderFloatValue ArcAngle; // 0x150(0x38)
	float AngleRadians; // 0x188(0x04)
	UEnvQueryContext* CircleCenter; // 0x190(0x08)
	bool bIgnoreAnyContextActorsWhenGeneratingCircle; // 0x198(0x01)
	FAIDataProviderFloatValue CircleCenterZOffset; // 0x1a0(0x38)
	FEnvTraceData TraceData; // 0x1d8(0x30)
	char bDefineArc : 1; // 0x208(0x01)
};

// Class AIModule.EnvQueryGenerator_SimpleGrid
// Size: 0xf8 (Inherited: 0x80)
struct UEnvQueryGenerator_SimpleGrid : UEnvQueryGenerator_ProjectedPoints {
	FAIDataProviderFloatValue GridSize; // 0x80(0x38)
	FAIDataProviderFloatValue SpaceBetween; // 0xb8(0x38)
	UEnvQueryContext* GenerateAround; // 0xf0(0x08)
};

// Class AIModule.EnvQueryGenerator_PathingGrid
// Size: 0x170 (Inherited: 0xf8)
struct UEnvQueryGenerator_PathingGrid : UEnvQueryGenerator_SimpleGrid {
	FAIDataProviderBoolValue PathToItem; // 0xf8(0x38)
	UNavigationQueryFilter* NavigationFilter; // 0x130(0x08)
	FAIDataProviderFloatValue ScanRangeMultiplier; // 0x138(0x38)
};

// Class AIModule.EnvQueryInstanceBlueprintWrapper
// Size: 0x78 (Inherited: 0x28)
struct UEnvQueryInstanceBlueprintWrapper : UObject {
	int32_t QueryID; // 0x30(0x04)
	UEnvQueryItemType* ItemType; // 0x58(0x08)
	int32_t OptionIndex; // 0x60(0x04)
	FMulticastInlineDelegate OnQueryFinishedEvent; // 0x68(0x10)

	void SetNamedParam(FName ParamName, float Value);
	TArray<FVector> GetResultsAsLocations();
	TArray<AActor*> GetResultsAsActors();
	bool GetQueryResultsAsLocations(TArray<FVector> ResultLocations);
	bool GetQueryResultsAsActors(TArray<AActor*> ResultActors);
	float GetItemScore(int32_t ItemIndex);
	void EQSQueryDoneSignature__DelegateSignature(UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus);
};

// Class AIModule.EnvQueryItemType
// Size: 0x30 (Inherited: 0x28)
struct UEnvQueryItemType : UObject {
};

// Class AIModule.EnvQueryItemType_VectorBase
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryItemType_VectorBase : UEnvQueryItemType {
};

// Class AIModule.EnvQueryItemType_ActorBase
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryItemType_ActorBase : UEnvQueryItemType_VectorBase {
};

// Class AIModule.EnvQueryItemType_Actor
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryItemType_Actor : UEnvQueryItemType_ActorBase {
};

// Class AIModule.EnvQueryItemType_Direction
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryItemType_Direction : UEnvQueryItemType_VectorBase {
};

// Class AIModule.EnvQueryItemType_Point
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryItemType_Point : UEnvQueryItemType_VectorBase {
};

// Class AIModule.EnvQueryManager
// Size: 0x140 (Inherited: 0x38)
struct UEnvQueryManager : UAISubsystem {
	TArray<FEnvQueryInstanceCache> InstanceCache; // 0xa8(0x10)
	TArray<UEnvQueryContext*> LocalContexts; // 0xb8(0x10)
	TArray<UEnvQueryInstanceBlueprintWrapper*> GCShieldedWrappers; // 0xc8(0x10)
	float MaxAllowedTestingTime; // 0x12c(0x04)
	bool bTestQueriesUsingBreadth; // 0x130(0x01)
	int32_t QueryCountWarningThreshold; // 0x134(0x04)
	double QueryCountWarningInterval; // 0x138(0x08)

	UEnvQueryInstanceBlueprintWrapper* RunEQSQuery(UObject* WorldContextObject, UEnvQuery* QueryTemplate, UObject* Querier, enum class EEnvQueryRunMode RunMode, UEnvQueryInstanceBlueprintWrapper* WrapperClass);
};

// Class AIModule.EnvQueryOption
// Size: 0x40 (Inherited: 0x28)
struct UEnvQueryOption : UObject {
	UEnvQueryGenerator* Generator; // 0x28(0x08)
	TArray<UEnvQueryTest*> Tests; // 0x30(0x10)
};

// Class AIModule.EnvQueryTest
// Size: 0x1f8 (Inherited: 0x30)
struct UEnvQueryTest : UEnvQueryNode {
	int32_t TestOrder; // 0x30(0x04)
	enum class EEnvTestPurpose TestPurpose; // 0x34(0x01)
	FString TestComment; // 0x38(0x10)
	enum class EEnvTestFilterOperator MultipleContextFilterOp; // 0x48(0x01)
	enum class EEnvTestScoreOperator MultipleContextScoreOp; // 0x49(0x01)
	enum class EEnvTestFilterType FilterType; // 0x4a(0x01)
	FAIDataProviderBoolValue boolValue; // 0x50(0x38)
	FAIDataProviderFloatValue FloatValueMin; // 0x88(0x38)
	FAIDataProviderFloatValue FloatValueMax; // 0xc0(0x38)
	enum class EEnvTestScoreEquation ScoringEquation; // 0xf9(0x01)
	enum class EEnvQueryTestClamping ClampMinType; // 0xfa(0x01)
	enum class EEnvQueryTestClamping ClampMaxType; // 0xfb(0x01)
	enum class EEQSNormalizationType NormalizationType; // 0xfc(0x01)
	FAIDataProviderFloatValue ScoreClampMin; // 0x100(0x38)
	FAIDataProviderFloatValue ScoreClampMax; // 0x138(0x38)
	FAIDataProviderFloatValue ScoringFactor; // 0x170(0x38)
	FAIDataProviderFloatValue ReferenceValue; // 0x1a8(0x38)
	bool bDefineReferenceValue; // 0x1e0(0x01)
	char bWorkOnFloatValues : 1; // 0x1f0(0x01)
};

// Class AIModule.EnvQueryTest_Distance
// Size: 0x208 (Inherited: 0x1f8)
struct UEnvQueryTest_Distance : UEnvQueryTest {
	enum class EEnvTestDistance TestMode; // 0x1f8(0x01)
	UEnvQueryContext* DistanceTo; // 0x200(0x08)
};

// Class AIModule.EnvQueryTest_Dot
// Size: 0x240 (Inherited: 0x1f8)
struct UEnvQueryTest_Dot : UEnvQueryTest {
	FEnvDirection LineA; // 0x1f8(0x20)
	FEnvDirection LineB; // 0x218(0x20)
	enum class EEnvTestDot TestMode; // 0x238(0x01)
	bool bAbsoluteValue; // 0x239(0x01)
};

// Class AIModule.EnvQueryTest_GameplayTags
// Size: 0x268 (Inherited: 0x1f8)
struct UEnvQueryTest_GameplayTags : UEnvQueryTest {
	FGameplayTagQuery TagQueryToMatch; // 0x1f8(0x48)
	bool bUpdatedToUseQuery; // 0x240(0x01)
	enum class EGameplayContainerMatchType TagsToMatch; // 0x241(0x01)
	FGameplayTagContainer GameplayTags; // 0x248(0x20)
};

// Class AIModule.EnvQueryTest_Overlap
// Size: 0x218 (Inherited: 0x1f8)
struct UEnvQueryTest_Overlap : UEnvQueryTest {
	FEnvOverlapData OverlapData; // 0x1f8(0x20)
};

// Class AIModule.EnvQueryTest_Pathfinding
// Size: 0x280 (Inherited: 0x1f8)
struct UEnvQueryTest_Pathfinding : UEnvQueryTest {
	enum class EEnvTestPathfinding TestMode; // 0x1f8(0x01)
	UEnvQueryContext* Context; // 0x200(0x08)
	FAIDataProviderBoolValue PathFromContext; // 0x208(0x38)
	FAIDataProviderBoolValue SkipUnreachable; // 0x240(0x38)
	UNavigationQueryFilter* FilterClass; // 0x278(0x08)
};

// Class AIModule.EnvQueryTest_PathfindingBatch
// Size: 0x2b8 (Inherited: 0x280)
struct UEnvQueryTest_PathfindingBatch : UEnvQueryTest_Pathfinding {
	FAIDataProviderFloatValue ScanRangeMultiplier; // 0x280(0x38)
};

// Class AIModule.EnvQueryTest_Project
// Size: 0x228 (Inherited: 0x1f8)
struct UEnvQueryTest_Project : UEnvQueryTest {
	FEnvTraceData ProjectionData; // 0x1f8(0x30)
};

// Class AIModule.EnvQueryTest_Random
// Size: 0x1f8 (Inherited: 0x1f8)
struct UEnvQueryTest_Random : UEnvQueryTest {
};

// Class AIModule.EnvQueryTest_Trace
// Size: 0x2d8 (Inherited: 0x1f8)
struct UEnvQueryTest_Trace : UEnvQueryTest {
	FEnvTraceData TraceData; // 0x1f8(0x30)
	FAIDataProviderBoolValue TraceFromContext; // 0x228(0x38)
	FAIDataProviderFloatValue ItemHeightOffset; // 0x260(0x38)
	FAIDataProviderFloatValue ContextHeightOffset; // 0x298(0x38)
	UEnvQueryContext* Context; // 0x2d0(0x08)
};

// Class AIModule.EnvQueryTest_Volume
// Size: 0x210 (Inherited: 0x1f8)
struct UEnvQueryTest_Volume : UEnvQueryTest {
	UEnvQueryContext* VolumeContext; // 0x1f8(0x08)
	AVolume* VolumeClass; // 0x200(0x08)
	char bDoComplexVolumeTest : 1; // 0x208(0x01)
};

// Class AIModule.EnvQueryTypes
// Size: 0x28 (Inherited: 0x28)
struct UEnvQueryTypes : UObject {
};

// Class AIModule.EQSQueryResultSourceInterface
// Size: 0x28 (Inherited: 0x28)
struct UEQSQueryResultSourceInterface : UInterface {
};

// Class AIModule.EQSRenderingComponent
// Size: 0x430 (Inherited: 0x3f0)
struct UEQSRenderingComponent : UPrimitiveComponent {
};

// Class AIModule.EQSTestingPawn
// Size: 0x550 (Inherited: 0x4c0)
struct AEQSTestingPawn : ACharacter {
	UEnvQuery* QueryTemplate; // 0x4c0(0x08)
	TArray<FEnvNamedValue> QueryParams; // 0x4c8(0x10)
	TArray<FAIDynamicParam> QueryConfig; // 0x4d8(0x10)
	float TimeLimitPerStep; // 0x4e8(0x04)
	int32_t StepToDebugDraw; // 0x4ec(0x04)
	enum class EEnvQueryHightlightMode HighlightMode; // 0x4f0(0x01)
	char bDrawLabels : 1; // 0x4f4(0x01)
	char bDrawFailedItems : 1; // 0x4f4(0x01)
	char bReRunQueryOnlyOnFinishedMove : 1; // 0x4f4(0x01)
	char bShouldBeVisibleInGame : 1; // 0x4f4(0x01)
	char bTickDuringGame : 1; // 0x4f4(0x01)
	enum class EEnvQueryRunMode QueryingMode; // 0x4f8(0x01)
	FNavAgentProperties NavAgentProperties; // 0x500(0x30)
};

// Class AIModule.GenericTeamAgentInterface
// Size: 0x28 (Inherited: 0x28)
struct UGenericTeamAgentInterface : UInterface {
};

// Class AIModule.GridPathAIController
// Size: 0x328 (Inherited: 0x328)
struct AGridPathAIController : AAIController {
};

// Class AIModule.GridPathFollowingComponent
// Size: 0x288 (Inherited: 0x258)
struct UGridPathFollowingComponent : UPathFollowingComponent {
	UNavLocalGridManager* GridManager; // 0x258(0x08)
};

// Class AIModule.NavFilter_AIControllerDefault
// Size: 0x48 (Inherited: 0x48)
struct UNavFilter_AIControllerDefault : UNavigationQueryFilter {
};

// Class AIModule.NavLinkProxy
// Size: 0x270 (Inherited: 0x220)
struct ANavLinkProxy : AActor {
	TArray<FNavigationLink> PointLinks; // 0x230(0x10)
	TArray<FNavigationSegmentLink> SegmentLinks; // 0x240(0x10)
	UNavLinkCustomComponent* SmartLinkComp; // 0x250(0x08)
	bool bSmartLinkIsRelevant; // 0x258(0x01)
	FMulticastInlineDelegate OnSmartLinkReached; // 0x260(0x10)

	void SetSmartLinkEnabled(bool bEnabled);
	void ResumePathFollowing(AActor* Agent);
	void ReceiveSmartLinkReached(AActor* Agent, FVector Destination);
	bool IsSmartLinkEnabled();
	bool HasMovingAgents();
};

// Class AIModule.NavLocalGridManager
// Size: 0x58 (Inherited: 0x28)
struct UNavLocalGridManager : UObject {

	bool SetLocalNavigationGridDensity(UObject* WorldContextObject, float CellSize);
	void RemoveLocalNavigationGrid(UObject* WorldContextObject, int32_t GridId, bool bRebuildGrids);
	bool FindLocalNavigationGridPath(UObject* WorldContextObject, FVector Start, FVector End, TArray<FVector> PathPoints);
	int32_t AddLocalNavigationGridForPoints(UObject* WorldContextObject, TArray<FVector> Locations, int32_t Radius2D, float Height, bool bRebuildGrids);
	int32_t AddLocalNavigationGridForPoint(UObject* WorldContextObject, FVector Location, int32_t Radius2D, float Height, bool bRebuildGrids);
	int32_t AddLocalNavigationGridForCapsule(UObject* WorldContextObject, FVector Location, float CapsuleRadius, float CapsuleHalfHeight, int32_t Radius2D, float Height, bool bRebuildGrids);
	int32_t AddLocalNavigationGridForBox(UObject* WorldContextObject, FVector Location, FVector Extent, FRotator Rotation, int32_t Radius2D, float Height, bool bRebuildGrids);
};

// Class AIModule.PathFollowingManager
// Size: 0x28 (Inherited: 0x28)
struct UPathFollowingManager : UObject {
};

// Class AIModule.PawnAction
// Size: 0x98 (Inherited: 0x28)
struct UPawnAction : UObject {
	UPawnAction* ChildAction; // 0x28(0x08)
	UPawnAction* ParentAction; // 0x30(0x08)
	UPawnActionsComponent* OwnerComponent; // 0x38(0x08)
	UObject* Instigator; // 0x40(0x08)
	UBrainComponent* BrainComp; // 0x48(0x08)
	char bAllowNewSameClassInstance : 1; // 0x80(0x01)
	char bReplaceActiveSameClassInstance : 1; // 0x80(0x01)
	char bShouldPauseMovement : 1; // 0x80(0x01)
	char bAlwaysNotifyOnFinished : 1; // 0x80(0x01)

	enum class EAIRequestPriority GetActionPriority();
	void Finish(enum class EPawnActionResult WithResult);
	UPawnAction* CreateActionInstance(UObject* WorldContextObject, UPawnAction* ActionClass);
};

// Class AIModule.PawnAction_BlueprintBase
// Size: 0x98 (Inherited: 0x98)
struct UPawnAction_BlueprintBase : UPawnAction {

	void ActionTick(APawn* ControlledPawn, float DeltaSeconds);
	void ActionStart(APawn* ControlledPawn);
	void ActionResume(APawn* ControlledPawn);
	void ActionPause(APawn* ControlledPawn);
	void ActionFinished(APawn* ControlledPawn, enum class EPawnActionResult WithResult);
};

// Class AIModule.PawnAction_Move
// Size: 0xe8 (Inherited: 0x98)
struct UPawnAction_Move : UPawnAction {
	AActor* GoalActor; // 0x98(0x08)
	FVector GoalLocation; // 0xa0(0x0c)
	float AcceptableRadius; // 0xac(0x04)
	UNavigationQueryFilter* FilterClass; // 0xb0(0x08)
	char bAllowStrafe : 1; // 0xb8(0x01)
	char bFinishOnOverlap : 1; // 0xb8(0x01)
	char bUsePathfinding : 1; // 0xb8(0x01)
	char bAllowPartialPath : 1; // 0xb8(0x01)
	char bProjectGoalToNavigation : 1; // 0xb8(0x01)
	char bUpdatePathToGoal : 1; // 0xb8(0x01)
	char bAbortChildActionOnPathChange : 1; // 0xb8(0x01)
};

// Class AIModule.PawnAction_Repeat
// Size: 0xb8 (Inherited: 0x98)
struct UPawnAction_Repeat : UPawnAction {
	UPawnAction* ActionToRepeat; // 0x98(0x08)
	UPawnAction* RecentActionCopy; // 0xa0(0x08)
	enum class EPawnActionFailHandling ChildFailureHandlingMode; // 0xa8(0x01)
};

// Class AIModule.PawnAction_Sequence
// Size: 0xc0 (Inherited: 0x98)
struct UPawnAction_Sequence : UPawnAction {
	TArray<UPawnAction*> ActionSequence; // 0x98(0x10)
	enum class EPawnActionFailHandling ChildFailureHandlingMode; // 0xa8(0x01)
	UPawnAction* RecentActionCopy; // 0xb0(0x08)
};

// Class AIModule.PawnAction_Wait
// Size: 0xa8 (Inherited: 0x98)
struct UPawnAction_Wait : UPawnAction {
	float TimeToWait; // 0x98(0x04)
};

// Class AIModule.PawnActionsComponent
// Size: 0xe8 (Inherited: 0xb0)
struct UPawnActionsComponent : UActorComponent {
	APawn* ControlledPawn; // 0xb0(0x08)
	TArray<FPawnActionStack> ActionStacks; // 0xb8(0x10)
	TArray<FPawnActionEvent> ActionEvents; // 0xc8(0x10)
	UPawnAction* CurrentAction; // 0xd8(0x08)

	bool K2_PushAction(UPawnAction* NewAction, enum class EAIRequestPriority Priority, UObject* Instigator);
	bool K2_PerformAction(APawn* Pawn, UPawnAction* Action, enum class EAIRequestPriority Priority);
	enum class EPawnActionAbortState K2_ForceAbortAction(UPawnAction* ActionToAbort);
	enum class EPawnActionAbortState K2_AbortAction(UPawnAction* ActionToAbort);
};

// Class AIModule.PawnSensingComponent
// Size: 0xf8 (Inherited: 0xb0)
struct UPawnSensingComponent : UActorComponent {
	float HearingThreshold; // 0xb0(0x04)
	float LOSHearingThreshold; // 0xb4(0x04)
	float SightRadius; // 0xb8(0x04)
	float SensingInterval; // 0xbc(0x04)
	float HearingMaxSoundAge; // 0xc0(0x04)
	char bEnableSensingUpdates : 1; // 0xc4(0x01)
	char bOnlySensePlayers : 1; // 0xc4(0x01)
	char bSeePawns : 1; // 0xc4(0x01)
	char bHearNoises : 1; // 0xc4(0x01)
	FMulticastInlineDelegate OnSeePawn; // 0xd0(0x10)
	FMulticastInlineDelegate OnHearNoise; // 0xe0(0x10)
	float PeripheralVisionAngle; // 0xf0(0x04)
	float PeripheralVisionCosine; // 0xf4(0x04)

	void SetSensingUpdatesEnabled(bool bEnabled);
	void SetSensingInterval(float NewSensingInterval);
	void SetPeripheralVisionAngle(float NewPeripheralVisionAngle);
	void SeePawnDelegate__DelegateSignature(APawn* Pawn);
	void HearNoiseDelegate__DelegateSignature(APawn* Instigator, FVector Location, float Volume);
	float GetPeripheralVisionCosine();
	float GetPeripheralVisionAngle();
};

// Class AIModule.VisualLoggerExtension
// Size: 0x28 (Inherited: 0x28)
struct UVisualLoggerExtension : UObject {
};

