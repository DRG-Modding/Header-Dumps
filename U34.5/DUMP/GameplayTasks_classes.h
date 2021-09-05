// Class GameplayTasks.GameplayTask
// Size: 0x68 (Inherited: 0x28)
struct UGameplayTask : UObject {
	FName InstanceName; // 0x30(0x08)
	enum class ETaskResourceOverlapPolicy ResourceOverlapPolicy; // 0x3a(0x01)
	UGameplayTask* ChildTask; // 0x60(0x08)

	void ReadyForActivation();
	void GenericGameplayTaskDelegate__DelegateSignature();
	void EndTask();
};

// Class GameplayTasks.GameplayTask_ClaimResource
// Size: 0x68 (Inherited: 0x68)
struct UGameplayTask_ClaimResource : UGameplayTask {

	UGameplayTask_ClaimResource* ClaimResources(TScriptInterface<IGameplayTaskOwnerInterface> InTaskOwner, TArray<UGameplayTaskResource*> ResourceClasses, char Priority, FName TaskInstanceName);
	UGameplayTask_ClaimResource* ClaimResource(TScriptInterface<IGameplayTaskOwnerInterface> InTaskOwner, UGameplayTaskResource* ResourceClass, char Priority, FName TaskInstanceName);
};

// Class GameplayTasks.GameplayTask_SpawnActor
// Size: 0xa8 (Inherited: 0x68)
struct UGameplayTask_SpawnActor : UGameplayTask {
	FMulticastInlineDelegate success; // 0x68(0x10)
	FMulticastInlineDelegate DidNotSpawn; // 0x78(0x10)
	AActor* ClassToSpawn; // 0xa0(0x08)

	UGameplayTask_SpawnActor* SpawnActor(TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, FVector SpawnLocation, FRotator SpawnRotation, AActor* Class, bool bSpawnOnlyOnAuthority);
	void FinishSpawningActor(UObject* WorldContextObject, AActor* SpawnedActor);
	bool BeginSpawningActor(UObject* WorldContextObject, AActor* SpawnedActor);
};

// Class GameplayTasks.GameplayTask_TimeLimitedExecution
// Size: 0x98 (Inherited: 0x68)
struct UGameplayTask_TimeLimitedExecution : UGameplayTask {
	FMulticastInlineDelegate OnFinished; // 0x68(0x10)
	FMulticastInlineDelegate OnTimeExpired; // 0x78(0x10)
};

// Class GameplayTasks.GameplayTask_WaitDelay
// Size: 0x80 (Inherited: 0x68)
struct UGameplayTask_WaitDelay : UGameplayTask {
	FMulticastInlineDelegate OnFinish; // 0x68(0x10)

	UGameplayTask_WaitDelay* TaskWaitDelay(TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, float Time, char Priority);
	void TaskDelayDelegate__DelegateSignature();
};

// Class GameplayTasks.GameplayTaskOwnerInterface
// Size: 0x28 (Inherited: 0x28)
struct UGameplayTaskOwnerInterface : UInterface {
};

// Class GameplayTasks.GameplayTaskResource
// Size: 0x38 (Inherited: 0x28)
struct UGameplayTaskResource : UObject {
	int32_t ManualResourceID; // 0x28(0x04)
	int8_t AutoResourceID; // 0x2c(0x01)
	char bManuallySetID : 1; // 0x30(0x01)
};

// Class GameplayTasks.GameplayTasksComponent
// Size: 0x120 (Inherited: 0xb0)
struct UGameplayTasksComponent : UActorComponent {
	char pad_B0_0 : 1; // 0xb0(0x01)
	char bIsNetDirty : 1; // 0xbc(0x01)
	TArray<UGameplayTask*> SimulatedTasks; // 0xc0(0x10)
	TArray<UGameplayTask*> TaskPriorityQueue; // 0xd0(0x10)
	TArray<UGameplayTask*> TickingTasks; // 0xf0(0x10)
	TArray<UGameplayTask*> KnownTasks; // 0x100(0x10)
	FMulticastInlineDelegate OnClaimedResourcesChange; // 0x110(0x10)

	void OnRep_SimulatedTasks();
	enum class EGameplayTaskRunResult K2_RunGameplayTask(TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, UGameplayTask* Task, char Priority, TArray<UGameplayTaskResource*> AdditionalRequiredResources, TArray<UGameplayTaskResource*> AdditionalClaimedResources);
};

