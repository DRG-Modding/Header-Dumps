// Class AIModule.AIController
// Size: 0x328 (Inherited: 0x298)
struct AAIController : AController {
	char UnknownData_298[0x38]; // 0x298(0x38)
	char bStartAILogicOnPossess : 1; // 0x2d0(0x01)
	char bStopAILogicOnUnposses : 1; // 0x2d0(0x01)
	char bLOSflag : 1; // 0x2d0(0x01)
	char bSkipExtraLOSChecks : 1; // 0x2d0(0x01)
	char bAllowStrafe : 1; // 0x2d0(0x01)
	char bWantsPlayerState : 1; // 0x2d0(0x01)
	char bSetControlRotationFromPawnOrientation : 1; // 0x2d0(0x01)
	char UnknownData_2D1[0x7]; // 0x2d1(0x07)
	struct UPathFollowingComponent* PathFollowingComponent; // 0x2d8(0x08)
	struct UBrainComponent* BrainComponent; // 0x2e0(0x08)
	struct UAIPerceptionComponent* PerceptionComponent; // 0x2e8(0x08)
	struct UPawnActionsComponent* ActionsComp; // 0x2f0(0x08)
	struct UBlackboardComponent* Blackboard; // 0x2f8(0x08)
	struct UGameplayTasksComponent* CachedGameplayTasksComponent; // 0x300(0x08)
	struct UNavigationQueryFilter* DefaultNavigationFilterClass; // 0x308(0x08)
	struct FMulticastInlineDelegate ReceiveMoveCompleted; // 0x310(0x10)
	char UnknownData_320[0x8]; // 0x320(0x08)

	bool UseBlackboard(struct UBlackboardData* BlackboardAsset, struct UBlackboardComponent* BlackboardComponent); // Function AIModule.AIController.UseBlackboard
	void UnclaimTaskResource(struct UGameplayTaskResource* ResourceClass); // Function AIModule.AIController.UnclaimTaskResource
	void SetPathFollowingComponent(struct UPathFollowingComponent* NewPFComponent); // Function AIModule.AIController.SetPathFollowingComponent
	void SetMoveBlockDetection(bool bEnable); // Function AIModule.AIController.SetMoveBlockDetection
	bool RunBehaviorTree(struct UBehaviorTree* BTAsset); // Function AIModule.AIController.RunBehaviorTree
	void OnUsingBlackBoard(struct UBlackboardComponent* BlackboardComp, struct UBlackboardData* BlackboardAsset); // Function AIModule.AIController.OnUsingBlackBoard
	void OnGameplayTaskResourcesClaimed(struct FGameplayResourceSet NewlyClaimed, struct FGameplayResourceSet FreshlyReleased); // Function AIModule.AIController.OnGameplayTaskResourcesClaimed
	char MoveToLocation(struct FVector Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, struct UNavigationQueryFilter* FilterClass, bool bAllowPartialPath); // Function AIModule.AIController.MoveToLocation
	char MoveToActor(struct AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, struct UNavigationQueryFilter* FilterClass, bool bAllowPartialPath); // Function AIModule.AIController.MoveToActor
	void K2_SetFocus(struct AActor* NewFocus); // Function AIModule.AIController.K2_SetFocus
	void K2_SetFocalPoint(struct FVector FP); // Function AIModule.AIController.K2_SetFocalPoint
	void K2_ClearFocus(); // Function AIModule.AIController.K2_ClearFocus
	bool HasPartialPath(); // Function AIModule.AIController.HasPartialPath
	struct UPathFollowingComponent* GetPathFollowingComponent(); // Function AIModule.AIController.GetPathFollowingComponent
	char GetMoveStatus(); // Function AIModule.AIController.GetMoveStatus
	struct FVector GetImmediateMoveDestination(); // Function AIModule.AIController.GetImmediateMoveDestination
	struct AActor* GetFocusActor(); // Function AIModule.AIController.GetFocusActor
	struct FVector GetFocalPointOnActor(struct AActor* Actor); // Function AIModule.AIController.GetFocalPointOnActor
	struct FVector GetFocalPoint(); // Function AIModule.AIController.GetFocalPoint
	struct UAIPerceptionComponent* GetAIPerceptionComponent(); // Function AIModule.AIController.GetAIPerceptionComponent
	void ClaimTaskResource(struct UGameplayTaskResource* ResourceClass); // Function AIModule.AIController.ClaimTaskResource
};

// Class AIModule.BTNode
// Size: 0x58 (Inherited: 0x28)
struct UBTNode : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct FString NodeName; // 0x30(0x10)
	struct UBehaviorTree* TreeAsset; // 0x40(0x08)
	struct UBTCompositeNode* ParentNode; // 0x48(0x08)
	char UnknownData_50[0x8]; // 0x50(0x08)
};

// Class AIModule.BTAuxiliaryNode
// Size: 0x60 (Inherited: 0x58)
struct UBTAuxiliaryNode : UBTNode {
	char UnknownData_58[0x8]; // 0x58(0x08)
};

// Class AIModule.BTDecorator
// Size: 0x68 (Inherited: 0x60)
struct UBTDecorator : UBTAuxiliaryNode {
	char UnknownData_60_0 : 7; // 0x60(0x01)
	char bInverseCondition : 1; // 0x60(0x01)
	char UnknownData_61[0x3]; // 0x61(0x03)
	char FlowAbortMode; // 0x64(0x01)
	char UnknownData_65[0x3]; // 0x65(0x03)
};

// Class AIModule.BTDecorator_BlackboardBase
// Size: 0x90 (Inherited: 0x68)
struct UBTDecorator_BlackboardBase : UBTDecorator {
	struct FBlackboardKeySelector BlackboardKey; // 0x68(0x28)
};

// Class AIModule.BTService
// Size: 0x70 (Inherited: 0x60)
struct UBTService : UBTAuxiliaryNode {
	float Interval; // 0x60(0x04)
	float RandomDeviation; // 0x64(0x04)
	char bCallTickOnSearchStart : 1; // 0x68(0x01)
	char bRestartTimerOnEachActivation : 1; // 0x68(0x01)
	char UnknownData_68_2 : 6; // 0x68(0x01)
	char UnknownData_69[0x7]; // 0x69(0x07)
};

// Class AIModule.BTTaskNode
// Size: 0x70 (Inherited: 0x58)
struct UBTTaskNode : UBTNode {
	struct TArray<struct UBTService*> Services; // 0x58(0x10)
	char bIgnoreRestartSelf : 1; // 0x68(0x01)
	char UnknownData_68_1 : 7; // 0x68(0x01)
	char UnknownData_69[0x7]; // 0x69(0x07)
};

// Class AIModule.BTTask_BlackboardBase
// Size: 0x98 (Inherited: 0x70)
struct UBTTask_BlackboardBase : UBTTaskNode {
	struct FBlackboardKeySelector BlackboardKey; // 0x70(0x28)
};

// Class AIModule.BrainComponent
// Size: 0x110 (Inherited: 0xb0)
struct UBrainComponent : UActorComponent {
	char UnknownData_B0[0x8]; // 0xb0(0x08)
	struct UBlackboardComponent* BlackboardComp; // 0xb8(0x08)
	struct AAIController* AIOwner; // 0xc0(0x08)
	char UnknownData_C8[0x48]; // 0xc8(0x48)

	void StopLogic(struct FString reason); // Function AIModule.BrainComponent.StopLogic
	void StartLogic(); // Function AIModule.BrainComponent.StartLogic
	void RestartLogic(); // Function AIModule.BrainComponent.RestartLogic
	bool IsRunning(); // Function AIModule.BrainComponent.IsRunning
	bool IsPaused(); // Function AIModule.BrainComponent.IsPaused
};

// Class AIModule.BehaviorTreeComponent
// Size: 0x270 (Inherited: 0x110)
struct UBehaviorTreeComponent : UBrainComponent {
	char UnknownData_110[0x20]; // 0x110(0x20)
	struct TArray<struct UBTNode*> NodeInstances; // 0x130(0x10)
	char UnknownData_140[0x128]; // 0x140(0x128)
	struct UBehaviorTree* DefaultBehaviorTreeAsset; // 0x268(0x08)

	void SetDynamicSubtree(struct FGameplayTag InjectTag, struct UBehaviorTree* BehaviorAsset); // Function AIModule.BehaviorTreeComponent.SetDynamicSubtree
	float GetTagCooldownEndTime(struct FGameplayTag CooldownTag); // Function AIModule.BehaviorTreeComponent.GetTagCooldownEndTime
	void AddCooldownTagDuration(struct FGameplayTag CooldownTag, float CooldownDuration, bool bAddToExistingDuration); // Function AIModule.BehaviorTreeComponent.AddCooldownTagDuration
};

// Class AIModule.AIAsyncTaskBlueprintProxy
// Size: 0x68 (Inherited: 0x28)
struct UAIAsyncTaskBlueprintProxy : UObject {
	struct FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x38(0x10)
	char UnknownData_48[0x20]; // 0x48(0x20)

	void OnMoveCompleted(struct FAIRequestID RequestID, char MovementResult); // Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted
};

// Class AIModule.AIBlueprintHelperLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAIBlueprintHelperLibrary : UBlueprintFunctionLibrary {

	void UnlockAIResourcesWithAnimation(struct UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic); // Function AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation
	struct APawn* SpawnAIFromClass(struct UObject* WorldContextObject, struct APawn* PawnClass, struct UBehaviorTree* BehaviorTree, struct FVector Location, struct FRotator Rotation, bool bNoCollisionFail, struct AActor* Owner); // Function AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass
	void SimpleMoveToLocation(struct AController* Controller, struct FVector Goal); // Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToLocation
	void SimpleMoveToActor(struct AController* Controller, struct AActor* Goal); // Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToActor
	void SendAIMessage(struct APawn* Target, struct FName Message, struct UObject* MessageSource, bool bSuccess); // Function AIModule.AIBlueprintHelperLibrary.SendAIMessage
	void LockAIResourcesWithAnimation(struct UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic); // Function AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation
	bool IsValidAIRotation(struct FRotator Rotation); // Function AIModule.AIBlueprintHelperLibrary.IsValidAIRotation
	bool IsValidAILocation(struct FVector Location); // Function AIModule.AIBlueprintHelperLibrary.IsValidAILocation
	bool IsValidAIDirection(struct FVector DirectionVector); // Function AIModule.AIBlueprintHelperLibrary.IsValidAIDirection
	struct UNavigationPath* GetCurrentPath(struct AController* Controller); // Function AIModule.AIBlueprintHelperLibrary.GetCurrentPath
	struct UBlackboardComponent* GetBlackboard(struct AActor* Target); // Function AIModule.AIBlueprintHelperLibrary.GetBlackboard
	struct AAIController* GetAIController(struct AActor* ControlledActor); // Function AIModule.AIBlueprintHelperLibrary.GetAIController
	struct UAIAsyncTaskBlueprintProxy* CreateMoveToProxyObject(struct UObject* WorldContextObject, struct APawn* Pawn, struct FVector Destination, struct AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap); // Function AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject
};

// Class AIModule.AIDataProvider
// Size: 0x28 (Inherited: 0x28)
struct UAIDataProvider : UObject {
};

// Class AIModule.AIDataProvider_QueryParams
// Size: 0x40 (Inherited: 0x28)
struct UAIDataProvider_QueryParams : UAIDataProvider {
	struct FName ParamName; // 0x28(0x08)
	float FloatValue; // 0x30(0x04)
	int32_t IntValue; // 0x34(0x04)
	bool boolValue; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
};

// Class AIModule.AIDataProvider_Random
// Size: 0x50 (Inherited: 0x40)
struct UAIDataProvider_Random : UAIDataProvider_QueryParams {
	float Min; // 0x40(0x04)
	float Max; // 0x44(0x04)
	char bInteger : 1; // 0x48(0x01)
	char UnknownData_48_1 : 7; // 0x48(0x01)
	char UnknownData_49[0x7]; // 0x49(0x07)
};

// Class AIModule.AIHotSpotManager
// Size: 0x28 (Inherited: 0x28)
struct UAIHotSpotManager : UObject {
};

// Class AIModule.AIPerceptionComponent
// Size: 0x180 (Inherited: 0xb0)
struct UAIPerceptionComponent : UActorComponent {
	struct TArray<struct UAISenseConfig*> SensesConfig; // 0xb0(0x10)
	struct UAISense* DominantSense; // 0xc0(0x08)
	char UnknownData_C8[0x10]; // 0xc8(0x10)
	struct AAIController* AIOwner; // 0xd8(0x08)
	char UnknownData_E0[0x80]; // 0xe0(0x80)
	struct FMulticastInlineDelegate OnPerceptionUpdated; // 0x160(0x10)
	struct FMulticastInlineDelegate OnTargetPerceptionUpdated; // 0x170(0x10)

	void SetSenseEnabled(struct UAISense* SenseClass, bool bEnable); // Function AIModule.AIPerceptionComponent.SetSenseEnabled
	void RequestStimuliListenerUpdate(); // Function AIModule.AIPerceptionComponent.RequestStimuliListenerUpdate
	void OnOwnerEndPlay(struct AActor* Actor, char EndPlayReason); // Function AIModule.AIPerceptionComponent.OnOwnerEndPlay
	void GetPerceivedHostileActors(struct TArray<struct AActor*> OutActors); // Function AIModule.AIPerceptionComponent.GetPerceivedHostileActors
	void GetPerceivedActors(struct UAISense* SenseToUse, struct TArray<struct AActor*> OutActors); // Function AIModule.AIPerceptionComponent.GetPerceivedActors
	void GetKnownPerceivedActors(struct UAISense* SenseToUse, struct TArray<struct AActor*> OutActors); // Function AIModule.AIPerceptionComponent.GetKnownPerceivedActors
	void GetCurrentlyPerceivedActors(struct UAISense* SenseToUse, struct TArray<struct AActor*> OutActors); // Function AIModule.AIPerceptionComponent.GetCurrentlyPerceivedActors
	bool GetActorsPerception(struct AActor* Actor, struct FActorPerceptionBlueprintInfo Info); // Function AIModule.AIPerceptionComponent.GetActorsPerception
	void ForgetAll(); // Function AIModule.AIPerceptionComponent.ForgetAll
};

// Class AIModule.AIPerceptionListenerInterface
// Size: 0x28 (Inherited: 0x28)
struct UAIPerceptionListenerInterface : UInterface {
};

// Class AIModule.AIPerceptionStimuliSourceComponent
// Size: 0xc8 (Inherited: 0xb0)
struct UAIPerceptionStimuliSourceComponent : UActorComponent {
	char bAutoRegisterAsSource : 1; // 0xb0(0x01)
	char UnknownData_B0_1 : 7; // 0xb0(0x01)
	char UnknownData_B1[0x7]; // 0xb1(0x07)
	struct TArray<struct UAISense*> RegisterAsSourceForSenses; // 0xb8(0x10)

	void UnregisterFromSense(struct UAISense* SenseClass); // Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense
	void UnregisterFromPerceptionSystem(); // Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem
	void RegisterWithPerceptionSystem(); // Function AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem
	void RegisterForSense(struct UAISense* SenseClass); // Function AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense
};

// Class AIModule.AISubsystem
// Size: 0x38 (Inherited: 0x28)
struct UAISubsystem : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct UAISystem* AISystem; // 0x30(0x08)
};

// Class AIModule.AIPerceptionSystem
// Size: 0x138 (Inherited: 0x38)
struct UAIPerceptionSystem : UAISubsystem {
	char UnknownData_38[0x50]; // 0x38(0x50)
	struct TArray<struct UAISense*> Senses; // 0x88(0x10)
	float PerceptionAgingRate; // 0x98(0x04)
	char UnknownData_9C[0x9c]; // 0x9c(0x9c)

	void ReportPerceptionEvent(struct UObject* WorldContextObject, struct UAISenseEvent* PerceptionEvent); // Function AIModule.AIPerceptionSystem.ReportPerceptionEvent
	void ReportEvent(struct UAISenseEvent* PerceptionEvent); // Function AIModule.AIPerceptionSystem.ReportEvent
	bool RegisterPerceptionStimuliSource(struct UObject* WorldContextObject, struct UAISense* Sense, struct AActor* Target); // Function AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource
	void OnPerceptionStimuliSourceEndPlay(struct AActor* Actor, char EndPlayReason); // Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay
	struct UAISense* GetSenseClassForStimulus(struct UObject* WorldContextObject, struct FAIStimulus Stimulus); // Function AIModule.AIPerceptionSystem.GetSenseClassForStimulus
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
	char UnknownData_2D[0x3]; // 0x2d(0x03)
	char bWantsNewPawnNotification : 1; // 0x30(0x01)
	char bAutoRegisterAllPawnsAsSources : 1; // 0x30(0x01)
	char UnknownData_30_2 : 6; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
	struct UAIPerceptionSystem* PerceptionSystemInstance; // 0x38(0x08)
	char UnknownData_40[0x40]; // 0x40(0x40)
};

// Class AIModule.AISense_Blueprint
// Size: 0xa8 (Inherited: 0x80)
struct UAISense_Blueprint : UAISense {
	struct UUserDefinedStruct* ListenerDataType; // 0x80(0x08)
	struct TArray<struct UAIPerceptionComponent*> ListenerContainer; // 0x88(0x10)
	struct TArray<struct UAISenseEvent*> UnprocessedEvents; // 0x98(0x10)

	float OnUpdate(struct TArray<struct UAISenseEvent*> EventsToProcess); // Function AIModule.AISense_Blueprint.OnUpdate
	void OnListenerUpdated(struct AActor* ActorListener, struct UAIPerceptionComponent* PerceptionComponent); // Function AIModule.AISense_Blueprint.OnListenerUpdated
	void OnListenerUnregistered(struct AActor* ActorListener, struct UAIPerceptionComponent* PerceptionComponent); // Function AIModule.AISense_Blueprint.OnListenerUnregistered
	void OnListenerRegistered(struct AActor* ActorListener, struct UAIPerceptionComponent* PerceptionComponent); // Function AIModule.AISense_Blueprint.OnListenerRegistered
	void K2_OnNewPawn(struct APawn* NewPawn); // Function AIModule.AISense_Blueprint.K2_OnNewPawn
	void GetAllListenerComponents(struct TArray<struct UAIPerceptionComponent*> ListenerComponents); // Function AIModule.AISense_Blueprint.GetAllListenerComponents
	void GetAllListenerActors(struct TArray<struct AActor*> ListenerActors); // Function AIModule.AISense_Blueprint.GetAllListenerActors
};

// Class AIModule.AISense_Damage
// Size: 0x90 (Inherited: 0x80)
struct UAISense_Damage : UAISense {
	struct TArray<struct FAIDamageEvent> RegisteredEvents; // 0x80(0x10)

	void ReportDamageEvent(struct UObject* WorldContextObject, struct AActor* DamagedActor, struct AActor* Instigator, float damageAmount, struct FVector EventLocation, struct FVector HitLocation); // Function AIModule.AISense_Damage.ReportDamageEvent
};

// Class AIModule.AISense_Hearing
// Size: 0xe8 (Inherited: 0x80)
struct UAISense_Hearing : UAISense {
	struct TArray<struct FAINoiseEvent> NoiseEvents; // 0x80(0x10)
	float SpeedOfSoundSq; // 0x90(0x04)
	char UnknownData_94[0x54]; // 0x94(0x54)

	void ReportNoiseEvent(struct UObject* WorldContextObject, struct FVector NoiseLocation, float Loudness, struct AActor* Instigator, float MaxRange, struct FName Tag); // Function AIModule.AISense_Hearing.ReportNoiseEvent
};

// Class AIModule.AISense_Prediction
// Size: 0x90 (Inherited: 0x80)
struct UAISense_Prediction : UAISense {
	struct TArray<struct FAIPredictionEvent> RegisteredEvents; // 0x80(0x10)

	void RequestPawnPredictionEvent(struct APawn* Requestor, struct AActor* PredictedActor, float PredictionTime); // Function AIModule.AISense_Prediction.RequestPawnPredictionEvent
	void RequestControllerPredictionEvent(struct AAIController* Requestor, struct AActor* PredictedActor, float PredictionTime); // Function AIModule.AISense_Prediction.RequestControllerPredictionEvent
};

// Class AIModule.AISense_Sight
// Size: 0x170 (Inherited: 0x80)
struct UAISense_Sight : UAISense {
	char UnknownData_80[0xc8]; // 0x80(0xc8)
	int32_t MaxTracesPerTick; // 0x148(0x04)
	int32_t MinQueriesPerTimeSliceCheck; // 0x14c(0x04)
	double MaxTimeSlicePerTick; // 0x150(0x08)
	float HighImportanceQueryDistanceThreshold; // 0x158(0x04)
	char UnknownData_15C[0x4]; // 0x15c(0x04)
	float MaxQueryImportance; // 0x160(0x04)
	float SightLimitQueryImportance; // 0x164(0x04)
	char UnknownData_168[0x8]; // 0x168(0x08)
};

// Class AIModule.AISense_Team
// Size: 0x90 (Inherited: 0x80)
struct UAISense_Team : UAISense {
	struct TArray<struct FAITeamStimulusEvent> RegisteredEvents; // 0x80(0x10)
};

// Class AIModule.AISense_Touch
// Size: 0x90 (Inherited: 0x80)
struct UAISense_Touch : UAISense {
	struct TArray<struct FAITouchEvent> RegisteredEvents; // 0x80(0x10)
};

// Class AIModule.AISenseBlueprintListener
// Size: 0x108 (Inherited: 0x108)
struct UAISenseBlueprintListener : UUserDefinedStruct {
};

// Class AIModule.AISenseConfig
// Size: 0x48 (Inherited: 0x28)
struct UAISenseConfig : UObject {
	struct FColor DebugColor; // 0x28(0x04)
	float MaxAge; // 0x2c(0x04)
	char bStartsEnabled : 1; // 0x30(0x01)
	char UnknownData_30_1 : 7; // 0x30(0x01)
	char UnknownData_31[0x17]; // 0x31(0x17)
};

// Class AIModule.AISenseConfig_Blueprint
// Size: 0x50 (Inherited: 0x48)
struct UAISenseConfig_Blueprint : UAISenseConfig {
	struct UAISense_Blueprint* Implementation; // 0x48(0x08)
};

// Class AIModule.AISenseConfig_Damage
// Size: 0x50 (Inherited: 0x48)
struct UAISenseConfig_Damage : UAISenseConfig {
	struct UAISense_Damage* Implementation; // 0x48(0x08)
};

// Class AIModule.AISenseConfig_Hearing
// Size: 0x60 (Inherited: 0x48)
struct UAISenseConfig_Hearing : UAISenseConfig {
	struct UAISense_Hearing* Implementation; // 0x48(0x08)
	float HearingRange; // 0x50(0x04)
	float LoSHearingRange; // 0x54(0x04)
	char bUseLoSHearing : 1; // 0x58(0x01)
	char UnknownData_58_1 : 7; // 0x58(0x01)
	char UnknownData_59[0x3]; // 0x59(0x03)
	struct FAISenseAffiliationFilter DetectionByAffiliation; // 0x5c(0x04)
};

// Class AIModule.AISenseConfig_Prediction
// Size: 0x48 (Inherited: 0x48)
struct UAISenseConfig_Prediction : UAISenseConfig {
};

// Class AIModule.AISenseConfig_Sight
// Size: 0x68 (Inherited: 0x48)
struct UAISenseConfig_Sight : UAISenseConfig {
	struct UAISense_Sight* Implementation; // 0x48(0x08)
	float SightRadius; // 0x50(0x04)
	float LoseSightRadius; // 0x54(0x04)
	float PeripheralVisionAngleDegrees; // 0x58(0x04)
	struct FAISenseAffiliationFilter DetectionByAffiliation; // 0x5c(0x04)
	float AutoSuccessRangeFromLastSeenLocation; // 0x60(0x04)
	char UnknownData_64[0x4]; // 0x64(0x04)
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
	struct FAIDamageEvent Event; // 0x28(0x30)
};

// Class AIModule.AISenseEvent_Hearing
// Size: 0x58 (Inherited: 0x28)
struct UAISenseEvent_Hearing : UAISenseEvent {
	struct FAINoiseEvent Event; // 0x28(0x30)
};

// Class AIModule.AISightTargetInterface
// Size: 0x28 (Inherited: 0x28)
struct UAISightTargetInterface : UInterface {
};

// Class AIModule.AISystem
// Size: 0x130 (Inherited: 0x58)
struct UAISystem : UAISystemBase {
	struct FSoftClassPath PerceptionSystemClassName; // 0x58(0x18)
	struct FSoftClassPath HotSpotManagerClassName; // 0x70(0x18)
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
	char DefaultSightCollisionChannel; // 0x9b(0x01)
	char UnknownData_9C[0x4]; // 0x9c(0x04)
	struct UBehaviorTreeManager* BehaviorTreeManager; // 0xa0(0x08)
	struct UEnvQueryManager* EnvironmentQueryManager; // 0xa8(0x08)
	struct UAIPerceptionSystem* PerceptionSystem; // 0xb0(0x08)
	struct TArray<struct UAIAsyncTaskBlueprintProxy*> AllProxyObjects; // 0xb8(0x10)
	struct UAIHotSpotManager* HotSpotManager; // 0xc8(0x08)
	struct UNavLocalGridManager* NavLocalGrids; // 0xd0(0x08)
	char UnknownData_D8[0x58]; // 0xd8(0x58)

	void AILoggingVerbose(); // Function AIModule.AISystem.AILoggingVerbose
	void AIIgnorePlayers(); // Function AIModule.AISystem.AIIgnorePlayers
};

// Class AIModule.AITask
// Size: 0x70 (Inherited: 0x68)
struct UAITask : UGameplayTask {
	struct AAIController* OwnerController; // 0x68(0x08)
};

// Class AIModule.AITask_LockLogic
// Size: 0x70 (Inherited: 0x70)
struct UAITask_LockLogic : UAITask {
};

// Class AIModule.AITask_MoveTo
// Size: 0x110 (Inherited: 0x70)
struct UAITask_MoveTo : UAITask {
	struct FMulticastInlineDelegate OnRequestFailed; // 0x70(0x10)
	struct FMulticastInlineDelegate OnMoveFinished; // 0x80(0x10)
	struct FAIMoveRequest MoveRequest; // 0x90(0x40)
	char UnknownData_D0[0x40]; // 0xd0(0x40)

	struct UAITask_MoveTo* AIMoveTo(struct AAIController* Controller, struct FVector GoalLocation, struct AActor* GoalActor, float AcceptanceRadius, char StopOnOverlap, char AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking, char ProjectGoalOnNavigation); // Function AIModule.AITask_MoveTo.AIMoveTo
};

// Class AIModule.AITask_RunEQS
// Size: 0xe8 (Inherited: 0x70)
struct UAITask_RunEQS : UAITask {
	char UnknownData_70[0x78]; // 0x70(0x78)

	struct UAITask_RunEQS* RunEQS(struct AAIController* Controller, struct UEnvQuery* QueryTemplate); // Function AIModule.AITask_RunEQS.RunEQS
};

// Class AIModule.BehaviorTree
// Size: 0x68 (Inherited: 0x28)
struct UBehaviorTree : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct UBTCompositeNode* RootNode; // 0x30(0x08)
	struct UBlackboardData* BlackboardAsset; // 0x38(0x08)
	struct TArray<struct UBTDecorator*> RootDecorators; // 0x40(0x10)
	struct TArray<struct FBTDecoratorLogic> RootDecoratorOps; // 0x50(0x10)
	char UnknownData_60[0x8]; // 0x60(0x08)
};

// Class AIModule.BehaviorTreeManager
// Size: 0x50 (Inherited: 0x28)
struct UBehaviorTreeManager : UObject {
	int32_t MaxDebuggerSteps; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FBehaviorTreeTemplateInfo> LoadedTemplates; // 0x30(0x10)
	struct TArray<struct UBehaviorTreeComponent*> ActiveComponents; // 0x40(0x10)
};

// Class AIModule.BehaviorTreeTypes
// Size: 0x28 (Inherited: 0x28)
struct UBehaviorTreeTypes : UObject {
};

// Class AIModule.BlackboardAssetProvider
// Size: 0x28 (Inherited: 0x28)
struct UBlackboardAssetProvider : UInterface {

	struct UBlackboardData* GetBlackboardAsset(); // Function AIModule.BlackboardAssetProvider.GetBlackboardAsset
};

// Class AIModule.BlackboardComponent
// Size: 0x1b0 (Inherited: 0xb0)
struct UBlackboardComponent : UActorComponent {
	struct UBrainComponent* BrainComp; // 0xb0(0x08)
	struct UBlackboardData* DefaultBlackboardAsset; // 0xb8(0x08)
	struct UBlackboardData* BlackboardAsset; // 0xc0(0x08)
	char UnknownData_C8[0x20]; // 0xc8(0x20)
	struct TArray<struct UBlackboardKeyType*> KeyInstances; // 0xe8(0x10)
	char UnknownData_F8[0xb8]; // 0xf8(0xb8)

	void SetValueAsVector(struct FName KeyName, struct FVector VectorValue); // Function AIModule.BlackboardComponent.SetValueAsVector
	void SetValueAsString(struct FName KeyName, struct FString StringValue); // Function AIModule.BlackboardComponent.SetValueAsString
	void SetValueAsRotator(struct FName KeyName, struct FRotator VectorValue); // Function AIModule.BlackboardComponent.SetValueAsRotator
	void SetValueAsObject(struct FName KeyName, struct UObject* ObjectValue); // Function AIModule.BlackboardComponent.SetValueAsObject
	void SetValueAsName(struct FName KeyName, struct FName nameValue); // Function AIModule.BlackboardComponent.SetValueAsName
	void SetValueAsInt(struct FName KeyName, int32_t IntValue); // Function AIModule.BlackboardComponent.SetValueAsInt
	void SetValueAsFloat(struct FName KeyName, float FloatValue); // Function AIModule.BlackboardComponent.SetValueAsFloat
	void SetValueAsEnum(struct FName KeyName, char EnumValue); // Function AIModule.BlackboardComponent.SetValueAsEnum
	void SetValueAsClass(struct FName KeyName, struct UObject* ClassValue); // Function AIModule.BlackboardComponent.SetValueAsClass
	void SetValueAsBool(struct FName KeyName, bool boolValue); // Function AIModule.BlackboardComponent.SetValueAsBool
	bool IsVectorValueSet(struct FName KeyName); // Function AIModule.BlackboardComponent.IsVectorValueSet
	struct FVector GetValueAsVector(struct FName KeyName); // Function AIModule.BlackboardComponent.GetValueAsVector
	struct FString GetValueAsString(struct FName KeyName); // Function AIModule.BlackboardComponent.GetValueAsString
	struct FRotator GetValueAsRotator(struct FName KeyName); // Function AIModule.BlackboardComponent.GetValueAsRotator
	struct UObject* GetValueAsObject(struct FName KeyName); // Function AIModule.BlackboardComponent.GetValueAsObject
	struct FName GetValueAsName(struct FName KeyName); // Function AIModule.BlackboardComponent.GetValueAsName
	int32_t GetValueAsInt(struct FName KeyName); // Function AIModule.BlackboardComponent.GetValueAsInt
	float GetValueAsFloat(struct FName KeyName); // Function AIModule.BlackboardComponent.GetValueAsFloat
	char GetValueAsEnum(struct FName KeyName); // Function AIModule.BlackboardComponent.GetValueAsEnum
	struct UObject* GetValueAsClass(struct FName KeyName); // Function AIModule.BlackboardComponent.GetValueAsClass
	bool GetValueAsBool(struct FName KeyName); // Function AIModule.BlackboardComponent.GetValueAsBool
	bool GetRotationFromEntry(struct FName KeyName, struct FRotator ResultRotation); // Function AIModule.BlackboardComponent.GetRotationFromEntry
	bool GetLocationFromEntry(struct FName KeyName, struct FVector ResultLocation); // Function AIModule.BlackboardComponent.GetLocationFromEntry
	void ClearValue(struct FName KeyName); // Function AIModule.BlackboardComponent.ClearValue
};

// Class AIModule.BlackboardData
// Size: 0x50 (Inherited: 0x30)
struct UBlackboardData : UDataAsset {
	struct UBlackboardData* Parent; // 0x30(0x08)
	struct TArray<struct FBlackboardEntry> Keys; // 0x38(0x10)
	char bHasSynchronizedKeys : 1; // 0x48(0x01)
	char UnknownData_48_1 : 7; // 0x48(0x01)
	char UnknownData_49[0x7]; // 0x49(0x07)
};

// Class AIModule.BlackboardKeyType
// Size: 0x30 (Inherited: 0x28)
struct UBlackboardKeyType : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// Class AIModule.BlackboardKeyType_Bool
// Size: 0x30 (Inherited: 0x30)
struct UBlackboardKeyType_Bool : UBlackboardKeyType {
};

// Class AIModule.BlackboardKeyType_Class
// Size: 0x38 (Inherited: 0x30)
struct UBlackboardKeyType_Class : UBlackboardKeyType {
	struct UObject* BaseClass; // 0x30(0x08)
};

// Class AIModule.BlackboardKeyType_Enum
// Size: 0x50 (Inherited: 0x30)
struct UBlackboardKeyType_Enum : UBlackboardKeyType {
	struct UEnum* EnumType; // 0x30(0x08)
	struct FString EnumName; // 0x38(0x10)
	char bIsEnumNameValid : 1; // 0x48(0x01)
	char UnknownData_48_1 : 7; // 0x48(0x01)
	char UnknownData_49[0x7]; // 0x49(0x07)
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
	struct FString EnumName; // 0x30(0x10)
	struct UEnum* EnumType; // 0x40(0x08)
};

// Class AIModule.BlackboardKeyType_Object
// Size: 0x38 (Inherited: 0x30)
struct UBlackboardKeyType_Object : UBlackboardKeyType {
	struct UObject* BaseClass; // 0x30(0x08)
};

// Class AIModule.BlackboardKeyType_Rotator
// Size: 0x30 (Inherited: 0x30)
struct UBlackboardKeyType_Rotator : UBlackboardKeyType {
};

// Class AIModule.BlackboardKeyType_String
// Size: 0x40 (Inherited: 0x30)
struct UBlackboardKeyType_String : UBlackboardKeyType {
	struct FString StringValue; // 0x30(0x10)
};

// Class AIModule.BlackboardKeyType_Vector
// Size: 0x30 (Inherited: 0x30)
struct UBlackboardKeyType_Vector : UBlackboardKeyType {
};

// Class AIModule.BTCompositeNode
// Size: 0x90 (Inherited: 0x58)
struct UBTCompositeNode : UBTNode {
	struct TArray<struct FBTCompositeChild> Children; // 0x58(0x10)
	struct TArray<struct UBTService*> Services; // 0x68(0x10)
	char UnknownData_78[0x10]; // 0x78(0x10)
	char bApplyDecoratorScope : 1; // 0x88(0x01)
	char UnknownData_88_1 : 7; // 0x88(0x01)
	char UnknownData_89[0x7]; // 0x89(0x07)
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
	char FinishMode; // 0x90(0x01)
	char UnknownData_91[0x7]; // 0x91(0x07)
};

// Class AIModule.BTDecorator_Blackboard
// Size: 0xc0 (Inherited: 0x90)
struct UBTDecorator_Blackboard : UBTDecorator_BlackboardBase {
	int32_t IntValue; // 0x90(0x04)
	float FloatValue; // 0x94(0x04)
	struct FString StringValue; // 0x98(0x10)
	struct FString CachedDescription; // 0xa8(0x10)
	char OperationType; // 0xb8(0x01)
	char NotifyObserver; // 0xb9(0x01)
	char UnknownData_BA[0x6]; // 0xba(0x06)
};

// Class AIModule.BTDecorator_BlueprintBase
// Size: 0xa0 (Inherited: 0x68)
struct UBTDecorator_BlueprintBase : UBTDecorator {
	struct AAIController* AIOwner; // 0x68(0x08)
	struct AActor* ActorOwner; // 0x70(0x08)
	struct TArray<struct FName> ObservedKeyNames; // 0x78(0x10)
	char UnknownData_88[0x10]; // 0x88(0x10)
	char bShowPropertyDetails : 1; // 0x98(0x01)
	char bCheckConditionOnlyBlackBoardChanges : 1; // 0x98(0x01)
	char bIsObservingBB : 1; // 0x98(0x01)
	char UnknownData_98_3 : 5; // 0x98(0x01)
	char UnknownData_99[0x7]; // 0x99(0x07)

	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function AIModule.BTDecorator_BlueprintBase.ReceiveTick
	void ReceiveObserverDeactivatedAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI
	void ReceiveObserverDeactivated(struct AActor* OwnerActor); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated
	void ReceiveObserverActivatedAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI
	void ReceiveObserverActivated(struct AActor* OwnerActor); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated
	void ReceiveExecutionStartAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI
	void ReceiveExecutionStart(struct AActor* OwnerActor); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart
	void ReceiveExecutionFinishAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, char NodeResult); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI
	void ReceiveExecutionFinish(struct AActor* OwnerActor, char NodeResult); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish
	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI
	bool PerformConditionCheck(struct AActor* OwnerActor); // Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck
	bool IsDecoratorObserverActive(); // Function AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive
	bool IsDecoratorExecutionActive(); // Function AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive
};

// Class AIModule.BTDecorator_CheckGameplayTagsOnActor
// Size: 0xc8 (Inherited: 0x68)
struct UBTDecorator_CheckGameplayTagsOnActor : UBTDecorator {
	struct FBlackboardKeySelector ActorToCheck; // 0x68(0x28)
	enum class EGameplayContainerMatchType TagsToMatch; // 0x90(0x01)
	char UnknownData_91[0x7]; // 0x91(0x07)
	struct FGameplayTagContainer GameplayTags; // 0x98(0x20)
	struct FString CachedDescription; // 0xb8(0x10)
};

// Class AIModule.BTDecorator_CompareBBEntries
// Size: 0xc0 (Inherited: 0x68)
struct UBTDecorator_CompareBBEntries : UBTDecorator {
	char Operator; // 0x68(0x01)
	char UnknownData_69[0x7]; // 0x69(0x07)
	struct FBlackboardKeySelector BlackboardKeyA; // 0x70(0x28)
	struct FBlackboardKeySelector BlackboardKeyB; // 0x98(0x28)
};

// Class AIModule.BTDecorator_ConditionalLoop
// Size: 0xc0 (Inherited: 0xc0)
struct UBTDecorator_ConditionalLoop : UBTDecorator_Blackboard {
};

// Class AIModule.BTDecorator_ConeCheck
// Size: 0xf0 (Inherited: 0x68)
struct UBTDecorator_ConeCheck : UBTDecorator {
	float ConeHalfAngle; // 0x68(0x04)
	char UnknownData_6C[0x4]; // 0x6c(0x04)
	struct FBlackboardKeySelector ConeOrigin; // 0x70(0x28)
	struct FBlackboardKeySelector ConeDirection; // 0x98(0x28)
	struct FBlackboardKeySelector Observed; // 0xc0(0x28)
	char UnknownData_E8[0x8]; // 0xe8(0x08)
};

// Class AIModule.BTDecorator_Cooldown
// Size: 0x70 (Inherited: 0x68)
struct UBTDecorator_Cooldown : UBTDecorator {
	float CoolDownTime; // 0x68(0x04)
	char UnknownData_6C[0x4]; // 0x6c(0x04)
};

// Class AIModule.BTDecorator_DoesPathExist
// Size: 0xc8 (Inherited: 0x68)
struct UBTDecorator_DoesPathExist : UBTDecorator {
	struct FBlackboardKeySelector BlackboardKeyA; // 0x68(0x28)
	struct FBlackboardKeySelector BlackboardKeyB; // 0x90(0x28)
	char bUseSelf : 1; // 0xb8(0x01)
	char UnknownData_B8_1 : 7; // 0xb8(0x01)
	char UnknownData_B9[0x3]; // 0xb9(0x03)
	char PathQueryType; // 0xbc(0x01)
	char UnknownData_BD[0x3]; // 0xbd(0x03)
	struct UNavigationQueryFilter* FilterClass; // 0xc0(0x08)
};

// Class AIModule.BTDecorator_ForceSuccess
// Size: 0x68 (Inherited: 0x68)
struct UBTDecorator_ForceSuccess : UBTDecorator {
};

// Class AIModule.BTDecorator_IsAtLocation
// Size: 0xd8 (Inherited: 0x90)
struct UBTDecorator_IsAtLocation : UBTDecorator_BlackboardBase {
	float AcceptableRadius; // 0x90(0x04)
	char UnknownData_94[0x4]; // 0x94(0x04)
	struct FAIDataProviderFloatValue ParametrizedAcceptableRadius; // 0x98(0x38)
	enum class FAIDistanceType GeometricDistanceType; // 0xd0(0x01)
	char UnknownData_D1[0x3]; // 0xd1(0x03)
	char bUseParametrizedRadius : 1; // 0xd4(0x01)
	char bUseNavAgentGoalLocation : 1; // 0xd4(0x01)
	char bPathFindingBasedTest : 1; // 0xd4(0x01)
	char UnknownData_D4_3 : 5; // 0xd4(0x01)
	char UnknownData_D5[0x3]; // 0xd5(0x03)
};

// Class AIModule.BTDecorator_IsBBEntryOfClass
// Size: 0x98 (Inherited: 0x90)
struct UBTDecorator_IsBBEntryOfClass : UBTDecorator_BlackboardBase {
	struct UObject* TestClass; // 0x90(0x08)
};

// Class AIModule.BTDecorator_KeepInCone
// Size: 0xc8 (Inherited: 0x68)
struct UBTDecorator_KeepInCone : UBTDecorator {
	float ConeHalfAngle; // 0x68(0x04)
	char UnknownData_6C[0x4]; // 0x6c(0x04)
	struct FBlackboardKeySelector ConeOrigin; // 0x70(0x28)
	struct FBlackboardKeySelector Observed; // 0x98(0x28)
	char bUseSelfAsOrigin : 1; // 0xc0(0x01)
	char bUseSelfAsObserved : 1; // 0xc0(0x01)
	char UnknownData_C0_2 : 6; // 0xc0(0x01)
	char UnknownData_C1[0x7]; // 0xc1(0x07)
};

// Class AIModule.BTDecorator_Loop
// Size: 0x78 (Inherited: 0x68)
struct UBTDecorator_Loop : UBTDecorator {
	int32_t NumLoops; // 0x68(0x04)
	bool bInfiniteLoop; // 0x6c(0x01)
	char UnknownData_6D[0x3]; // 0x6d(0x03)
	float InfiniteLoopTimeoutTime; // 0x70(0x04)
	char UnknownData_74[0x4]; // 0x74(0x04)
};

// Class AIModule.BTDecorator_ReachedMoveGoal
// Size: 0x68 (Inherited: 0x68)
struct UBTDecorator_ReachedMoveGoal : UBTDecorator {
};

// Class AIModule.BTDecorator_SetTagCooldown
// Size: 0x78 (Inherited: 0x68)
struct UBTDecorator_SetTagCooldown : UBTDecorator {
	struct FGameplayTag CooldownTag; // 0x68(0x08)
	float CooldownDuration; // 0x70(0x04)
	bool bAddToExistingDuration; // 0x74(0x01)
	char UnknownData_75[0x3]; // 0x75(0x03)
};

// Class AIModule.BTDecorator_TagCooldown
// Size: 0x78 (Inherited: 0x68)
struct UBTDecorator_TagCooldown : UBTDecorator {
	struct FGameplayTag CooldownTag; // 0x68(0x08)
	float CooldownDuration; // 0x70(0x04)
	bool bAddToExistingDuration; // 0x74(0x01)
	bool bActivatesCooldown; // 0x75(0x01)
	char UnknownData_76[0x2]; // 0x76(0x02)
};

// Class AIModule.BTDecorator_TimeLimit
// Size: 0x70 (Inherited: 0x68)
struct UBTDecorator_TimeLimit : UBTDecorator {
	float TimeLimit; // 0x68(0x04)
	char UnknownData_6C[0x4]; // 0x6c(0x04)
};

// Class AIModule.BTFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UBTFunctionLibrary : UBlueprintFunctionLibrary {

	void StopUsingExternalEvent(struct UBTNode* NodeOwner); // Function AIModule.BTFunctionLibrary.StopUsingExternalEvent
	void StartUsingExternalEvent(struct UBTNode* NodeOwner, struct AActor* owningActor); // Function AIModule.BTFunctionLibrary.StartUsingExternalEvent
	void SetBlackboardValueAsVector(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key, struct FVector Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsVector
	void SetBlackboardValueAsString(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key, struct FString Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsString
	void SetBlackboardValueAsRotator(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key, struct FRotator Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsRotator
	void SetBlackboardValueAsObject(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key, struct UObject* Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsObject
	void SetBlackboardValueAsName(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key, struct FName Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsName
	void SetBlackboardValueAsInt(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key, int32_t Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsInt
	void SetBlackboardValueAsFloat(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key, float Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat
	void SetBlackboardValueAsEnum(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key, char Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum
	void SetBlackboardValueAsClass(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key, struct UObject* Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsClass
	void SetBlackboardValueAsBool(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key, bool Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsBool
	struct UBlackboardComponent* GetOwnersBlackboard(struct UBTNode* NodeOwner); // Function AIModule.BTFunctionLibrary.GetOwnersBlackboard
	struct UBehaviorTreeComponent* GetOwnerComponent(struct UBTNode* NodeOwner); // Function AIModule.BTFunctionLibrary.GetOwnerComponent
	struct FVector GetBlackboardValueAsVector(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsVector
	struct FString GetBlackboardValueAsString(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsString
	struct FRotator GetBlackboardValueAsRotator(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsRotator
	struct UObject* GetBlackboardValueAsObject(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsObject
	struct FName GetBlackboardValueAsName(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsName
	int32_t GetBlackboardValueAsInt(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsInt
	float GetBlackboardValueAsFloat(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat
	char GetBlackboardValueAsEnum(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum
	struct UObject* GetBlackboardValueAsClass(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsClass
	bool GetBlackboardValueAsBool(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsBool
	struct AActor* GetBlackboardValueAsActor(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsActor
	void ClearBlackboardValueAsVector(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key); // Function AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector
	void ClearBlackboardValue(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key); // Function AIModule.BTFunctionLibrary.ClearBlackboardValue
};

// Class AIModule.BTService_BlackboardBase
// Size: 0x98 (Inherited: 0x70)
struct UBTService_BlackboardBase : UBTService {
	struct FBlackboardKeySelector BlackboardKey; // 0x70(0x28)
};

// Class AIModule.BTService_BlueprintBase
// Size: 0x98 (Inherited: 0x70)
struct UBTService_BlueprintBase : UBTService {
	struct AAIController* AIOwner; // 0x70(0x08)
	struct AActor* ActorOwner; // 0x78(0x08)
	char UnknownData_80[0x10]; // 0x80(0x10)
	char bShowPropertyDetails : 1; // 0x90(0x01)
	char bShowEventDetails : 1; // 0x90(0x01)
	char UnknownData_90_2 : 6; // 0x90(0x01)
	char UnknownData_91[0x7]; // 0x91(0x07)

	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function AIModule.BTService_BlueprintBase.ReceiveTickAI
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function AIModule.BTService_BlueprintBase.ReceiveTick
	void ReceiveSearchStartAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI
	void ReceiveSearchStart(struct AActor* OwnerActor); // Function AIModule.BTService_BlueprintBase.ReceiveSearchStart
	void ReceiveDeactivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI
	void ReceiveDeactivation(struct AActor* OwnerActor); // Function AIModule.BTService_BlueprintBase.ReceiveDeactivation
	void ReceiveActivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTService_BlueprintBase.ReceiveActivationAI
	void ReceiveActivation(struct AActor* OwnerActor); // Function AIModule.BTService_BlueprintBase.ReceiveActivation
	bool IsServiceActive(); // Function AIModule.BTService_BlueprintBase.IsServiceActive
};

// Class AIModule.BTService_DefaultFocus
// Size: 0xa0 (Inherited: 0x98)
struct UBTService_DefaultFocus : UBTService_BlackboardBase {
	char FocusPriority; // 0x98(0x01)
	char UnknownData_99[0x7]; // 0x99(0x07)
};

// Class AIModule.BTService_RunEQS
// Size: 0xf0 (Inherited: 0x98)
struct UBTService_RunEQS : UBTService_BlackboardBase {
	struct FEQSParametrizedQueryExecutionRequest EQSRequest; // 0x98(0x48)
	char UnknownData_E0[0x10]; // 0xe0(0x10)
};

// Class AIModule.BTTask_BlueprintBase
// Size: 0xa8 (Inherited: 0x70)
struct UBTTask_BlueprintBase : UBTTaskNode {
	struct AAIController* AIOwner; // 0x70(0x08)
	struct AActor* ActorOwner; // 0x78(0x08)
	struct FIntervalCountdown TickInterval; // 0x80(0x08)
	char UnknownData_88[0x18]; // 0x88(0x18)
	char bShowPropertyDetails : 1; // 0xa0(0x01)
	char UnknownData_A0_1 : 7; // 0xa0(0x01)
	char UnknownData_A1[0x7]; // 0xa1(0x07)

	void SetFinishOnMessageWithId(struct FName MessageName, int32_t RequestID); // Function AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId
	void SetFinishOnMessage(struct FName MessageName); // Function AIModule.BTTask_BlueprintBase.SetFinishOnMessage
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function AIModule.BTTask_BlueprintBase.ReceiveTickAI
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function AIModule.BTTask_BlueprintBase.ReceiveTick
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI
	void ReceiveExecute(struct AActor* OwnerActor); // Function AIModule.BTTask_BlueprintBase.ReceiveExecute
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI
	void ReceiveAbort(struct AActor* OwnerActor); // Function AIModule.BTTask_BlueprintBase.ReceiveAbort
	bool IsTaskExecuting(); // Function AIModule.BTTask_BlueprintBase.IsTaskExecuting
	bool IsTaskAborting(); // Function AIModule.BTTask_BlueprintBase.IsTaskAborting
	void FinishExecute(bool bSuccess); // Function AIModule.BTTask_BlueprintBase.FinishExecute
	void FinishAbort(); // Function AIModule.BTTask_BlueprintBase.FinishAbort
};

// Class AIModule.BTTask_FinishWithResult
// Size: 0x78 (Inherited: 0x70)
struct UBTTask_FinishWithResult : UBTTaskNode {
	char Result; // 0x70(0x01)
	char UnknownData_71[0x7]; // 0x71(0x07)
};

// Class AIModule.BTTask_GameplayTaskBase
// Size: 0x78 (Inherited: 0x70)
struct UBTTask_GameplayTaskBase : UBTTaskNode {
	char bWaitForGameplayTask : 1; // 0x70(0x01)
	char UnknownData_70_1 : 7; // 0x70(0x01)
	char UnknownData_71[0x7]; // 0x71(0x07)
};

// Class AIModule.BTTask_MakeNoise
// Size: 0x78 (Inherited: 0x70)
struct UBTTask_MakeNoise : UBTTaskNode {
	float Loudnes; // 0x70(0x04)
	char UnknownData_74[0x4]; // 0x74(0x04)
};

// Class AIModule.BTTask_MoveTo
// Size: 0xb0 (Inherited: 0x98)
struct UBTTask_MoveTo : UBTTask_BlackboardBase {
	float AcceptableRadius; // 0x98(0x04)
	char UnknownData_9C[0x4]; // 0x9c(0x04)
	struct UNavigationQueryFilter* FilterClass; // 0xa0(0x08)
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
	char UnknownData_AD_1 : 7; // 0xad(0x01)
	char UnknownData_AE[0x2]; // 0xae(0x02)
};

// Class AIModule.BTTask_MoveDirectlyToward
// Size: 0xb8 (Inherited: 0xb0)
struct UBTTask_MoveDirectlyToward : UBTTask_MoveTo {
	char bDisablePathUpdateOnGoalLocationChange : 1; // 0xb0(0x01)
	char bProjectVectorGoalToNavigation : 1; // 0xb0(0x01)
	char bUpdatedDeprecatedProperties : 1; // 0xb0(0x01)
	char UnknownData_B0_3 : 5; // 0xb0(0x01)
	char UnknownData_B1[0x7]; // 0xb1(0x07)
};

// Class AIModule.BTTask_PawnActionBase
// Size: 0x70 (Inherited: 0x70)
struct UBTTask_PawnActionBase : UBTTaskNode {
};

// Class AIModule.BTTask_PlayAnimation
// Size: 0xb0 (Inherited: 0x70)
struct UBTTask_PlayAnimation : UBTTaskNode {
	struct UAnimationAsset* AnimationToPlay; // 0x70(0x08)
	char bLooping : 1; // 0x78(0x01)
	char bNonBlocking : 1; // 0x78(0x01)
	char UnknownData_78_2 : 6; // 0x78(0x01)
	char UnknownData_79[0x7]; // 0x79(0x07)
	struct UBehaviorTreeComponent* MyOwnerComp; // 0x80(0x08)
	struct USkeletalMeshComponent* CachedSkelMesh; // 0x88(0x08)
	char UnknownData_90[0x20]; // 0x90(0x20)
};

// Class AIModule.BTTask_PlaySound
// Size: 0x78 (Inherited: 0x70)
struct UBTTask_PlaySound : UBTTaskNode {
	struct USoundCue* SoundToPlay; // 0x70(0x08)
};

// Class AIModule.BTTask_PushPawnAction
// Size: 0x78 (Inherited: 0x70)
struct UBTTask_PushPawnAction : UBTTask_PawnActionBase {
	struct UPawnAction* Action; // 0x70(0x08)
};

// Class AIModule.BTTask_RotateToFaceBBEntry
// Size: 0xa0 (Inherited: 0x98)
struct UBTTask_RotateToFaceBBEntry : UBTTask_BlackboardBase {
	float Precision; // 0x98(0x04)
	char UnknownData_9C[0x4]; // 0x9c(0x04)
};

// Class AIModule.BTTask_RunBehavior
// Size: 0x78 (Inherited: 0x70)
struct UBTTask_RunBehavior : UBTTaskNode {
	struct UBehaviorTree* BehaviorAsset; // 0x70(0x08)
};

// Class AIModule.BTTask_RunBehaviorDynamic
// Size: 0x88 (Inherited: 0x70)
struct UBTTask_RunBehaviorDynamic : UBTTaskNode {
	struct FGameplayTag InjectionTag; // 0x70(0x08)
	struct UBehaviorTree* DefaultBehaviorAsset; // 0x78(0x08)
	struct UBehaviorTree* BehaviorAsset; // 0x80(0x08)
};

// Class AIModule.BTTask_RunEQSQuery
// Size: 0x150 (Inherited: 0x98)
struct UBTTask_RunEQSQuery : UBTTask_BlackboardBase {
	struct UEnvQuery* QueryTemplate; // 0x98(0x08)
	struct TArray<struct FEnvNamedValue> QueryParams; // 0xa0(0x10)
	struct TArray<struct FAIDynamicParam> QueryConfig; // 0xb0(0x10)
	char RunMode; // 0xc0(0x01)
	char UnknownData_C1[0x7]; // 0xc1(0x07)
	struct FBlackboardKeySelector EQSQueryBlackboardKey; // 0xc8(0x28)
	bool bUseBBKey; // 0xf0(0x01)
	char UnknownData_F1[0x7]; // 0xf1(0x07)
	struct FEQSParametrizedQueryExecutionRequest EQSRequest; // 0xf8(0x48)
	char UnknownData_140[0x10]; // 0x140(0x10)
};

// Class AIModule.BTTask_SetTagCooldown
// Size: 0x80 (Inherited: 0x70)
struct UBTTask_SetTagCooldown : UBTTaskNode {
	struct FGameplayTag CooldownTag; // 0x70(0x08)
	bool bAddToExistingDuration; // 0x78(0x01)
	char UnknownData_79[0x3]; // 0x79(0x03)
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
	struct FBlackboardKeySelector BlackboardKey; // 0x78(0x28)
};

// Class AIModule.CrowdAgentInterface
// Size: 0x28 (Inherited: 0x28)
struct UCrowdAgentInterface : UInterface {
};

// Class AIModule.PathFollowingComponent
// Size: 0x258 (Inherited: 0xb0)
struct UPathFollowingComponent : UActorComponent {
	char UnknownData_B0[0x38]; // 0xb0(0x38)
	struct UNavMovementComponent* MovementComp; // 0xe8(0x08)
	char UnknownData_F0[0x8]; // 0xf0(0x08)
	struct ANavigationData* MyNavData; // 0xf8(0x08)
	char UnknownData_100[0x158]; // 0x100(0x158)

	void OnNavDataRegistered(struct ANavigationData* NavData); // Function AIModule.PathFollowingComponent.OnNavDataRegistered
	void OnActorBump(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult Hit); // Function AIModule.PathFollowingComponent.OnActorBump
	struct FVector GetPathDestination(); // Function AIModule.PathFollowingComponent.GetPathDestination
	char GetPathActionType(); // Function AIModule.PathFollowingComponent.GetPathActionType
};

// Class AIModule.CrowdFollowingComponent
// Size: 0x298 (Inherited: 0x258)
struct UCrowdFollowingComponent : UPathFollowingComponent {
	char UnknownData_258[0x8]; // 0x258(0x08)
	struct UCharacterMovementComponent* CharacterMovement; // 0x260(0x08)
	struct FVector CrowdAgentMoveDirection; // 0x268(0x0c)
	char UnknownData_274[0x24]; // 0x274(0x24)

	void SuspendCrowdSteering(bool bSuspend); // Function AIModule.CrowdFollowingComponent.SuspendCrowdSteering
};

// Class AIModule.CrowdManager
// Size: 0xf0 (Inherited: 0x28)
struct UCrowdManager : UCrowdManagerBase {
	struct ANavigationData* MyNavData; // 0x28(0x08)
	struct TArray<struct FCrowdAvoidanceConfig> AvoidanceConfig; // 0x30(0x10)
	struct TArray<struct FCrowdAvoidanceSamplingPattern> SamplingPatterns; // 0x40(0x10)
	int32_t MaxAgents; // 0x50(0x04)
	float MaxAgentRadius; // 0x54(0x04)
	int32_t MaxAvoidedAgents; // 0x58(0x04)
	int32_t MaxAvoidedWalls; // 0x5c(0x04)
	float NavmeshCheckInterval; // 0x60(0x04)
	float PathOptimizationInterval; // 0x64(0x04)
	float SeparationDirClamp; // 0x68(0x04)
	float PathOffsetRadiusMultiplier; // 0x6c(0x04)
	char UnknownData_70_0 : 4; // 0x70(0x01)
	char bResolveCollisions : 1; // 0x70(0x01)
	char UnknownData_70_5 : 3; // 0x70(0x01)
	char UnknownData_71[0x7f]; // 0x71(0x7f)
};

// Class AIModule.DetourCrowdAIController
// Size: 0x328 (Inherited: 0x328)
struct ADetourCrowdAIController : AAIController {
};

// Class AIModule.EnvQuery
// Size: 0x48 (Inherited: 0x30)
struct UEnvQuery : UDataAsset {
	struct FName QueryName; // 0x30(0x08)
	struct TArray<struct UEnvQueryOption*> options; // 0x38(0x10)
};

// Class AIModule.EnvQueryContext
// Size: 0x28 (Inherited: 0x28)
struct UEnvQueryContext : UObject {
};

// Class AIModule.EnvQueryContext_BlueprintBase
// Size: 0x30 (Inherited: 0x28)
struct UEnvQueryContext_BlueprintBase : UEnvQueryContext {
	char UnknownData_28[0x8]; // 0x28(0x08)

	void ProvideSingleLocation(struct UObject* QuerierObject, struct AActor* QuerierActor, struct FVector ResultingLocation); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation
	void ProvideSingleActor(struct UObject* QuerierObject, struct AActor* QuerierActor, struct AActor* ResultingActor); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor
	void ProvideLocationsSet(struct UObject* QuerierObject, struct AActor* QuerierActor, struct TArray<struct FVector> ResultingLocationSet); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet
	void ProvideActorsSet(struct UObject* QuerierObject, struct AActor* QuerierActor, struct TArray<struct AActor*> ResultingActorsSet); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet
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
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// Class AIModule.EnvQueryGenerator
// Size: 0x50 (Inherited: 0x30)
struct UEnvQueryGenerator : UEnvQueryNode {
	struct FString OptionName; // 0x30(0x10)
	struct UEnvQueryItemType* ItemType; // 0x40(0x08)
	char bAutoSortTests : 1; // 0x48(0x01)
	char UnknownData_48_1 : 7; // 0x48(0x01)
	char UnknownData_49[0x7]; // 0x49(0x07)
};

// Class AIModule.EnvQueryGenerator_ActorsOfClass
// Size: 0xd0 (Inherited: 0x50)
struct UEnvQueryGenerator_ActorsOfClass : UEnvQueryGenerator {
	struct AActor* SearchedActorClass; // 0x50(0x08)
	struct FAIDataProviderBoolValue GenerateOnlyActorsInRadius; // 0x58(0x38)
	struct FAIDataProviderFloatValue SearchRadius; // 0x90(0x38)
	struct UEnvQueryContext* SearchCenter; // 0xc8(0x08)
};

// Class AIModule.EnvQueryGenerator_BlueprintBase
// Size: 0x80 (Inherited: 0x50)
struct UEnvQueryGenerator_BlueprintBase : UEnvQueryGenerator {
	struct FText GeneratorsActionDescription; // 0x50(0x18)
	struct UEnvQueryContext* Context; // 0x68(0x08)
	struct UEnvQueryItemType* GeneratedItemType; // 0x70(0x08)
	char UnknownData_78[0x8]; // 0x78(0x08)

	struct UObject* GetQuerier(); // Function AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier
	void DoItemGeneration(struct TArray<struct FVector> ContextLocations); // Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration
	void AddGeneratedVector(struct FVector GeneratedVector); // Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector
	void AddGeneratedActor(struct AActor* GeneratedActor); // Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor
};

// Class AIModule.EnvQueryGenerator_Composite
// Size: 0x70 (Inherited: 0x50)
struct UEnvQueryGenerator_Composite : UEnvQueryGenerator {
	struct TArray<struct UEnvQueryGenerator*> generators; // 0x50(0x10)
	char bAllowDifferentItemTypes : 1; // 0x60(0x01)
	char bHasMatchingItemType : 1; // 0x60(0x01)
	char UnknownData_60_2 : 6; // 0x60(0x01)
	char UnknownData_61[0x7]; // 0x61(0x07)
	struct UEnvQueryItemType* ForcedItemType; // 0x68(0x08)
};

// Class AIModule.EnvQueryGenerator_ProjectedPoints
// Size: 0x80 (Inherited: 0x50)
struct UEnvQueryGenerator_ProjectedPoints : UEnvQueryGenerator {
	struct FEnvTraceData ProjectionData; // 0x50(0x30)
};

// Class AIModule.EnvQueryGenerator_Cone
// Size: 0x170 (Inherited: 0x80)
struct UEnvQueryGenerator_Cone : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue AlignedPointsDistance; // 0x80(0x38)
	struct FAIDataProviderFloatValue ConeDegrees; // 0xb8(0x38)
	struct FAIDataProviderFloatValue AngleStep; // 0xf0(0x38)
	struct FAIDataProviderFloatValue Range; // 0x128(0x38)
	struct UEnvQueryContext* CenterActor; // 0x160(0x08)
	char bIncludeContextLocation : 1; // 0x168(0x01)
	char UnknownData_168_1 : 7; // 0x168(0x01)
	char UnknownData_169[0x7]; // 0x169(0x07)
};

// Class AIModule.EnvQueryGenerator_CurrentLocation
// Size: 0x58 (Inherited: 0x50)
struct UEnvQueryGenerator_CurrentLocation : UEnvQueryGenerator {
	struct UEnvQueryContext* QueryContext; // 0x50(0x08)
};

// Class AIModule.EnvQueryGenerator_Donut
// Size: 0x1d0 (Inherited: 0x80)
struct UEnvQueryGenerator_Donut : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue InnerRadius; // 0x80(0x38)
	struct FAIDataProviderFloatValue OuterRadius; // 0xb8(0x38)
	struct FAIDataProviderIntValue NumberOfRings; // 0xf0(0x38)
	struct FAIDataProviderIntValue PointsPerRing; // 0x128(0x38)
	struct FEnvDirection ArcDirection; // 0x160(0x20)
	struct FAIDataProviderFloatValue ArcAngle; // 0x180(0x38)
	bool bUseSpiralPattern; // 0x1b8(0x01)
	char UnknownData_1B9[0x7]; // 0x1b9(0x07)
	struct UEnvQueryContext* Center; // 0x1c0(0x08)
	char bDefineArc : 1; // 0x1c8(0x01)
	char UnknownData_1C8_1 : 7; // 0x1c8(0x01)
	char UnknownData_1C9[0x7]; // 0x1c9(0x07)
};

// Class AIModule.EnvQueryGenerator_OnCircle
// Size: 0x210 (Inherited: 0x80)
struct UEnvQueryGenerator_OnCircle : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue CircleRadius; // 0x80(0x38)
	struct FAIDataProviderFloatValue SpaceBetween; // 0xb8(0x38)
	struct FAIDataProviderIntValue NumberOfPoints; // 0xf0(0x38)
	enum class EPointOnCircleSpacingMethod PointOnCircleSpacingMethod; // 0x128(0x01)
	char UnknownData_129[0x7]; // 0x129(0x07)
	struct FEnvDirection ArcDirection; // 0x130(0x20)
	struct FAIDataProviderFloatValue ArcAngle; // 0x150(0x38)
	float AngleRadians; // 0x188(0x04)
	char UnknownData_18C[0x4]; // 0x18c(0x04)
	struct UEnvQueryContext* CircleCenter; // 0x190(0x08)
	bool bIgnoreAnyContextActorsWhenGeneratingCircle; // 0x198(0x01)
	char UnknownData_199[0x7]; // 0x199(0x07)
	struct FAIDataProviderFloatValue CircleCenterZOffset; // 0x1a0(0x38)
	struct FEnvTraceData TraceData; // 0x1d8(0x30)
	char bDefineArc : 1; // 0x208(0x01)
	char UnknownData_208_1 : 7; // 0x208(0x01)
	char UnknownData_209[0x7]; // 0x209(0x07)
};

// Class AIModule.EnvQueryGenerator_SimpleGrid
// Size: 0xf8 (Inherited: 0x80)
struct UEnvQueryGenerator_SimpleGrid : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue GridSize; // 0x80(0x38)
	struct FAIDataProviderFloatValue SpaceBetween; // 0xb8(0x38)
	struct UEnvQueryContext* GenerateAround; // 0xf0(0x08)
};

// Class AIModule.EnvQueryGenerator_PathingGrid
// Size: 0x170 (Inherited: 0xf8)
struct UEnvQueryGenerator_PathingGrid : UEnvQueryGenerator_SimpleGrid {
	struct FAIDataProviderBoolValue PathToItem; // 0xf8(0x38)
	struct UNavigationQueryFilter* NavigationFilter; // 0x130(0x08)
	struct FAIDataProviderFloatValue ScanRangeMultiplier; // 0x138(0x38)
};

// Class AIModule.EnvQueryInstanceBlueprintWrapper
// Size: 0x78 (Inherited: 0x28)
struct UEnvQueryInstanceBlueprintWrapper : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	int32_t QueryID; // 0x30(0x04)
	char UnknownData_34[0x24]; // 0x34(0x24)
	struct UEnvQueryItemType* ItemType; // 0x58(0x08)
	int32_t OptionIndex; // 0x60(0x04)
	char UnknownData_64[0x4]; // 0x64(0x04)
	struct FMulticastInlineDelegate OnQueryFinishedEvent; // 0x68(0x10)

	void SetNamedParam(struct FName ParamName, float Value); // Function AIModule.EnvQueryInstanceBlueprintWrapper.SetNamedParam
	struct TArray<struct FVector> GetResultsAsLocations(); // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations
	struct TArray<struct AActor*> GetResultsAsActors(); // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors
	bool GetQueryResultsAsLocations(struct TArray<struct FVector> ResultLocations); // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsLocations
	bool GetQueryResultsAsActors(struct TArray<struct AActor*> ResultActors); // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsActors
	float GetItemScore(int32_t ItemIndex); // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore
	void EQSQueryDoneSignature__DelegateSignature(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, char QueryStatus); // DelegateFunction AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature
};

// Class AIModule.EnvQueryItemType
// Size: 0x30 (Inherited: 0x28)
struct UEnvQueryItemType : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
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
	char UnknownData_38[0x70]; // 0x38(0x70)
	struct TArray<struct FEnvQueryInstanceCache> InstanceCache; // 0xa8(0x10)
	struct TArray<struct UEnvQueryContext*> LocalContexts; // 0xb8(0x10)
	struct TArray<struct UEnvQueryInstanceBlueprintWrapper*> GCShieldedWrappers; // 0xc8(0x10)
	char UnknownData_D8[0x54]; // 0xd8(0x54)
	float MaxAllowedTestingTime; // 0x12c(0x04)
	bool bTestQueriesUsingBreadth; // 0x130(0x01)
	char UnknownData_131[0x3]; // 0x131(0x03)
	int32_t QueryCountWarningThreshold; // 0x134(0x04)
	double QueryCountWarningInterval; // 0x138(0x08)

	struct UEnvQueryInstanceBlueprintWrapper* RunEQSQuery(struct UObject* WorldContextObject, struct UEnvQuery* QueryTemplate, struct UObject* Querier, char RunMode, struct UEnvQueryInstanceBlueprintWrapper* WrapperClass); // Function AIModule.EnvQueryManager.RunEQSQuery
};

// Class AIModule.EnvQueryOption
// Size: 0x40 (Inherited: 0x28)
struct UEnvQueryOption : UObject {
	struct UEnvQueryGenerator* Generator; // 0x28(0x08)
	struct TArray<struct UEnvQueryTest*> Tests; // 0x30(0x10)
};

// Class AIModule.EnvQueryTest
// Size: 0x1f8 (Inherited: 0x30)
struct UEnvQueryTest : UEnvQueryNode {
	int32_t TestOrder; // 0x30(0x04)
	char TestPurpose; // 0x34(0x01)
	char UnknownData_35[0x3]; // 0x35(0x03)
	struct FString TestComment; // 0x38(0x10)
	char MultipleContextFilterOp; // 0x48(0x01)
	char MultipleContextScoreOp; // 0x49(0x01)
	char FilterType; // 0x4a(0x01)
	char UnknownData_4B[0x5]; // 0x4b(0x05)
	struct FAIDataProviderBoolValue boolValue; // 0x50(0x38)
	struct FAIDataProviderFloatValue FloatValueMin; // 0x88(0x38)
	struct FAIDataProviderFloatValue FloatValueMax; // 0xc0(0x38)
	char UnknownData_F8[0x1]; // 0xf8(0x01)
	char ScoringEquation; // 0xf9(0x01)
	char ClampMinType; // 0xfa(0x01)
	char ClampMaxType; // 0xfb(0x01)
	enum class EEQSNormalizationType NormalizationType; // 0xfc(0x01)
	char UnknownData_FD[0x3]; // 0xfd(0x03)
	struct FAIDataProviderFloatValue ScoreClampMin; // 0x100(0x38)
	struct FAIDataProviderFloatValue ScoreClampMax; // 0x138(0x38)
	struct FAIDataProviderFloatValue ScoringFactor; // 0x170(0x38)
	struct FAIDataProviderFloatValue ReferenceValue; // 0x1a8(0x38)
	bool bDefineReferenceValue; // 0x1e0(0x01)
	char UnknownData_1E1[0xf]; // 0x1e1(0x0f)
	char bWorkOnFloatValues : 1; // 0x1f0(0x01)
	char UnknownData_1F0_1 : 7; // 0x1f0(0x01)
	char UnknownData_1F1[0x7]; // 0x1f1(0x07)
};

// Class AIModule.EnvQueryTest_Distance
// Size: 0x208 (Inherited: 0x1f8)
struct UEnvQueryTest_Distance : UEnvQueryTest {
	char TestMode; // 0x1f8(0x01)
	char UnknownData_1F9[0x7]; // 0x1f9(0x07)
	struct UEnvQueryContext* DistanceTo; // 0x200(0x08)
};

// Class AIModule.EnvQueryTest_Dot
// Size: 0x240 (Inherited: 0x1f8)
struct UEnvQueryTest_Dot : UEnvQueryTest {
	struct FEnvDirection LineA; // 0x1f8(0x20)
	struct FEnvDirection LineB; // 0x218(0x20)
	enum class EEnvTestDot TestMode; // 0x238(0x01)
	bool bAbsoluteValue; // 0x239(0x01)
	char UnknownData_23A[0x6]; // 0x23a(0x06)
};

// Class AIModule.EnvQueryTest_GameplayTags
// Size: 0x268 (Inherited: 0x1f8)
struct UEnvQueryTest_GameplayTags : UEnvQueryTest {
	struct FGameplayTagQuery TagQueryToMatch; // 0x1f8(0x48)
	bool bUpdatedToUseQuery; // 0x240(0x01)
	enum class EGameplayContainerMatchType TagsToMatch; // 0x241(0x01)
	char UnknownData_242[0x6]; // 0x242(0x06)
	struct FGameplayTagContainer GameplayTags; // 0x248(0x20)
};

// Class AIModule.EnvQueryTest_Overlap
// Size: 0x218 (Inherited: 0x1f8)
struct UEnvQueryTest_Overlap : UEnvQueryTest {
	struct FEnvOverlapData OverlapData; // 0x1f8(0x20)
};

// Class AIModule.EnvQueryTest_Pathfinding
// Size: 0x280 (Inherited: 0x1f8)
struct UEnvQueryTest_Pathfinding : UEnvQueryTest {
	char TestMode; // 0x1f8(0x01)
	char UnknownData_1F9[0x7]; // 0x1f9(0x07)
	struct UEnvQueryContext* Context; // 0x200(0x08)
	struct FAIDataProviderBoolValue PathFromContext; // 0x208(0x38)
	struct FAIDataProviderBoolValue SkipUnreachable; // 0x240(0x38)
	struct UNavigationQueryFilter* FilterClass; // 0x278(0x08)
};

// Class AIModule.EnvQueryTest_PathfindingBatch
// Size: 0x2b8 (Inherited: 0x280)
struct UEnvQueryTest_PathfindingBatch : UEnvQueryTest_Pathfinding {
	struct FAIDataProviderFloatValue ScanRangeMultiplier; // 0x280(0x38)
};

// Class AIModule.EnvQueryTest_Project
// Size: 0x228 (Inherited: 0x1f8)
struct UEnvQueryTest_Project : UEnvQueryTest {
	struct FEnvTraceData ProjectionData; // 0x1f8(0x30)
};

// Class AIModule.EnvQueryTest_Random
// Size: 0x1f8 (Inherited: 0x1f8)
struct UEnvQueryTest_Random : UEnvQueryTest {
};

// Class AIModule.EnvQueryTest_Trace
// Size: 0x2d8 (Inherited: 0x1f8)
struct UEnvQueryTest_Trace : UEnvQueryTest {
	struct FEnvTraceData TraceData; // 0x1f8(0x30)
	struct FAIDataProviderBoolValue TraceFromContext; // 0x228(0x38)
	struct FAIDataProviderFloatValue ItemHeightOffset; // 0x260(0x38)
	struct FAIDataProviderFloatValue ContextHeightOffset; // 0x298(0x38)
	struct UEnvQueryContext* Context; // 0x2d0(0x08)
};

// Class AIModule.EnvQueryTest_Volume
// Size: 0x210 (Inherited: 0x1f8)
struct UEnvQueryTest_Volume : UEnvQueryTest {
	struct UEnvQueryContext* VolumeContext; // 0x1f8(0x08)
	struct AVolume* VolumeClass; // 0x200(0x08)
	char bDoComplexVolumeTest : 1; // 0x208(0x01)
	char UnknownData_208_1 : 7; // 0x208(0x01)
	char UnknownData_209[0x7]; // 0x209(0x07)
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
	char UnknownData_3F0[0x40]; // 0x3f0(0x40)
};

// Class AIModule.EQSTestingPawn
// Size: 0x550 (Inherited: 0x4c0)
struct AEQSTestingPawn : ACharacter {
	struct UEnvQuery* QueryTemplate; // 0x4c0(0x08)
	struct TArray<struct FEnvNamedValue> QueryParams; // 0x4c8(0x10)
	struct TArray<struct FAIDynamicParam> QueryConfig; // 0x4d8(0x10)
	float TimeLimitPerStep; // 0x4e8(0x04)
	int32_t StepToDebugDraw; // 0x4ec(0x04)
	enum class EEnvQueryHightlightMode HighlightMode; // 0x4f0(0x01)
	char UnknownData_4F1[0x3]; // 0x4f1(0x03)
	char bDrawLabels : 1; // 0x4f4(0x01)
	char bDrawFailedItems : 1; // 0x4f4(0x01)
	char bReRunQueryOnlyOnFinishedMove : 1; // 0x4f4(0x01)
	char bShouldBeVisibleInGame : 1; // 0x4f4(0x01)
	char bTickDuringGame : 1; // 0x4f4(0x01)
	char UnknownData_4F4_5 : 3; // 0x4f4(0x01)
	char UnknownData_4F5[0x3]; // 0x4f5(0x03)
	char QueryingMode; // 0x4f8(0x01)
	char UnknownData_4F9[0x7]; // 0x4f9(0x07)
	struct FNavAgentProperties NavAgentProperties; // 0x500(0x30)
	char UnknownData_530[0x20]; // 0x530(0x20)
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
	struct UNavLocalGridManager* GridManager; // 0x258(0x08)
	char UnknownData_260[0x28]; // 0x260(0x28)
};

// Class AIModule.NavFilter_AIControllerDefault
// Size: 0x48 (Inherited: 0x48)
struct UNavFilter_AIControllerDefault : UNavigationQueryFilter {
};

// Class AIModule.NavLinkProxy
// Size: 0x270 (Inherited: 0x220)
struct ANavLinkProxy : AActor {
	char UnknownData_220[0x10]; // 0x220(0x10)
	struct TArray<struct FNavigationLink> PointLinks; // 0x230(0x10)
	struct TArray<struct FNavigationSegmentLink> SegmentLinks; // 0x240(0x10)
	struct UNavLinkCustomComponent* SmartLinkComp; // 0x250(0x08)
	bool bSmartLinkIsRelevant; // 0x258(0x01)
	char UnknownData_259[0x7]; // 0x259(0x07)
	struct FMulticastInlineDelegate OnSmartLinkReached; // 0x260(0x10)

	void SetSmartLinkEnabled(bool bEnabled); // Function AIModule.NavLinkProxy.SetSmartLinkEnabled
	void ResumePathFollowing(struct AActor* Agent); // Function AIModule.NavLinkProxy.ResumePathFollowing
	void ReceiveSmartLinkReached(struct AActor* Agent, struct FVector Destination); // Function AIModule.NavLinkProxy.ReceiveSmartLinkReached
	bool IsSmartLinkEnabled(); // Function AIModule.NavLinkProxy.IsSmartLinkEnabled
	bool HasMovingAgents(); // Function AIModule.NavLinkProxy.HasMovingAgents
};

// Class AIModule.NavLocalGridManager
// Size: 0x58 (Inherited: 0x28)
struct UNavLocalGridManager : UObject {
	char UnknownData_28[0x30]; // 0x28(0x30)

	bool SetLocalNavigationGridDensity(struct UObject* WorldContextObject, float CellSize); // Function AIModule.NavLocalGridManager.SetLocalNavigationGridDensity
	void RemoveLocalNavigationGrid(struct UObject* WorldContextObject, int32_t GridId, bool bRebuildGrids); // Function AIModule.NavLocalGridManager.RemoveLocalNavigationGrid
	bool FindLocalNavigationGridPath(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, struct TArray<struct FVector> PathPoints); // Function AIModule.NavLocalGridManager.FindLocalNavigationGridPath
	int32_t AddLocalNavigationGridForPoints(struct UObject* WorldContextObject, struct TArray<struct FVector> Locations, int32_t Radius2D, float Height, bool bRebuildGrids); // Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoints
	int32_t AddLocalNavigationGridForPoint(struct UObject* WorldContextObject, struct FVector Location, int32_t Radius2D, float Height, bool bRebuildGrids); // Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoint
	int32_t AddLocalNavigationGridForCapsule(struct UObject* WorldContextObject, struct FVector Location, float CapsuleRadius, float CapsuleHalfHeight, int32_t Radius2D, float Height, bool bRebuildGrids); // Function AIModule.NavLocalGridManager.AddLocalNavigationGridForCapsule
	int32_t AddLocalNavigationGridForBox(struct UObject* WorldContextObject, struct FVector Location, struct FVector Extent, struct FRotator Rotation, int32_t Radius2D, float Height, bool bRebuildGrids); // Function AIModule.NavLocalGridManager.AddLocalNavigationGridForBox
};

// Class AIModule.PathFollowingManager
// Size: 0x28 (Inherited: 0x28)
struct UPathFollowingManager : UObject {
};

// Class AIModule.PawnAction
// Size: 0x98 (Inherited: 0x28)
struct UPawnAction : UObject {
	struct UPawnAction* ChildAction; // 0x28(0x08)
	struct UPawnAction* ParentAction; // 0x30(0x08)
	struct UPawnActionsComponent* OwnerComponent; // 0x38(0x08)
	struct UObject* Instigator; // 0x40(0x08)
	struct UBrainComponent* BrainComp; // 0x48(0x08)
	char UnknownData_50[0x30]; // 0x50(0x30)
	char bAllowNewSameClassInstance : 1; // 0x80(0x01)
	char bReplaceActiveSameClassInstance : 1; // 0x80(0x01)
	char bShouldPauseMovement : 1; // 0x80(0x01)
	char bAlwaysNotifyOnFinished : 1; // 0x80(0x01)
	char UnknownData_80_4 : 4; // 0x80(0x01)
	char UnknownData_81[0x17]; // 0x81(0x17)

	char GetActionPriority(); // Function AIModule.PawnAction.GetActionPriority
	void Finish(char WithResult); // Function AIModule.PawnAction.Finish
	struct UPawnAction* CreateActionInstance(struct UObject* WorldContextObject, struct UPawnAction* ActionClass); // Function AIModule.PawnAction.CreateActionInstance
};

// Class AIModule.PawnAction_BlueprintBase
// Size: 0x98 (Inherited: 0x98)
struct UPawnAction_BlueprintBase : UPawnAction {

	void ActionTick(struct APawn* ControlledPawn, float DeltaSeconds); // Function AIModule.PawnAction_BlueprintBase.ActionTick
	void ActionStart(struct APawn* ControlledPawn); // Function AIModule.PawnAction_BlueprintBase.ActionStart
	void ActionResume(struct APawn* ControlledPawn); // Function AIModule.PawnAction_BlueprintBase.ActionResume
	void ActionPause(struct APawn* ControlledPawn); // Function AIModule.PawnAction_BlueprintBase.ActionPause
	void ActionFinished(struct APawn* ControlledPawn, char WithResult); // Function AIModule.PawnAction_BlueprintBase.ActionFinished
};

// Class AIModule.PawnAction_Move
// Size: 0xe8 (Inherited: 0x98)
struct UPawnAction_Move : UPawnAction {
	struct AActor* GoalActor; // 0x98(0x08)
	struct FVector GoalLocation; // 0xa0(0x0c)
	float AcceptableRadius; // 0xac(0x04)
	struct UNavigationQueryFilter* FilterClass; // 0xb0(0x08)
	char bAllowStrafe : 1; // 0xb8(0x01)
	char bFinishOnOverlap : 1; // 0xb8(0x01)
	char bUsePathfinding : 1; // 0xb8(0x01)
	char bAllowPartialPath : 1; // 0xb8(0x01)
	char bProjectGoalToNavigation : 1; // 0xb8(0x01)
	char bUpdatePathToGoal : 1; // 0xb8(0x01)
	char bAbortChildActionOnPathChange : 1; // 0xb8(0x01)
	char UnknownData_B9[0x2f]; // 0xb9(0x2f)
};

// Class AIModule.PawnAction_Repeat
// Size: 0xb8 (Inherited: 0x98)
struct UPawnAction_Repeat : UPawnAction {
	struct UPawnAction* ActionToRepeat; // 0x98(0x08)
	struct UPawnAction* RecentActionCopy; // 0xa0(0x08)
	char ChildFailureHandlingMode; // 0xa8(0x01)
	char UnknownData_A9[0xf]; // 0xa9(0x0f)
};

// Class AIModule.PawnAction_Sequence
// Size: 0xc0 (Inherited: 0x98)
struct UPawnAction_Sequence : UPawnAction {
	struct TArray<struct UPawnAction*> ActionSequence; // 0x98(0x10)
	char ChildFailureHandlingMode; // 0xa8(0x01)
	char UnknownData_A9[0x7]; // 0xa9(0x07)
	struct UPawnAction* RecentActionCopy; // 0xb0(0x08)
	char UnknownData_B8[0x8]; // 0xb8(0x08)
};

// Class AIModule.PawnAction_Wait
// Size: 0xa8 (Inherited: 0x98)
struct UPawnAction_Wait : UPawnAction {
	float TimeToWait; // 0x98(0x04)
	char UnknownData_9C[0xc]; // 0x9c(0x0c)
};

// Class AIModule.PawnActionsComponent
// Size: 0xe8 (Inherited: 0xb0)
struct UPawnActionsComponent : UActorComponent {
	struct APawn* ControlledPawn; // 0xb0(0x08)
	struct TArray<struct FPawnActionStack> ActionStacks; // 0xb8(0x10)
	struct TArray<struct FPawnActionEvent> ActionEvents; // 0xc8(0x10)
	struct UPawnAction* CurrentAction; // 0xd8(0x08)
	char UnknownData_E0[0x8]; // 0xe0(0x08)

	bool K2_PushAction(struct UPawnAction* NewAction, char Priority, struct UObject* Instigator); // Function AIModule.PawnActionsComponent.K2_PushAction
	bool K2_PerformAction(struct APawn* Pawn, struct UPawnAction* Action, char Priority); // Function AIModule.PawnActionsComponent.K2_PerformAction
	char K2_ForceAbortAction(struct UPawnAction* ActionToAbort); // Function AIModule.PawnActionsComponent.K2_ForceAbortAction
	char K2_AbortAction(struct UPawnAction* ActionToAbort); // Function AIModule.PawnActionsComponent.K2_AbortAction
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
	char UnknownData_C4_4 : 4; // 0xc4(0x01)
	char UnknownData_C5[0xb]; // 0xc5(0x0b)
	struct FMulticastInlineDelegate OnSeePawn; // 0xd0(0x10)
	struct FMulticastInlineDelegate OnHearNoise; // 0xe0(0x10)
	float PeripheralVisionAngle; // 0xf0(0x04)
	float PeripheralVisionCosine; // 0xf4(0x04)

	void SetSensingUpdatesEnabled(bool bEnabled); // Function AIModule.PawnSensingComponent.SetSensingUpdatesEnabled
	void SetSensingInterval(float NewSensingInterval); // Function AIModule.PawnSensingComponent.SetSensingInterval
	void SetPeripheralVisionAngle(float NewPeripheralVisionAngle); // Function AIModule.PawnSensingComponent.SetPeripheralVisionAngle
	void SeePawnDelegate__DelegateSignature(struct APawn* Pawn); // DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature
	void HearNoiseDelegate__DelegateSignature(struct APawn* Instigator, struct FVector Location, float Volume); // DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature
	float GetPeripheralVisionCosine(); // Function AIModule.PawnSensingComponent.GetPeripheralVisionCosine
	float GetPeripheralVisionAngle(); // Function AIModule.PawnSensingComponent.GetPeripheralVisionAngle
};

// Class AIModule.VisualLoggerExtension
// Size: 0x28 (Inherited: 0x28)
struct UVisualLoggerExtension : UObject {
};

