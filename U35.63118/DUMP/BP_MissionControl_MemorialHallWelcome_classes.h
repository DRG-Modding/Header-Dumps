// BlueprintGeneratedClass BP_MissionControl_MemorialHallWelcome.BP_MissionControl_MemorialHallWelcome_C
// Size: 0x238 (Inherited: 0x220)
struct ABP_MissionControl_MemorialHallWelcome_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UBoxComponent* TriggerBox; // 0x228(0x08)
	USceneComponent* DefaultSceneRoot; // 0x230(0x08)

	void ReceiveActorBeginOverlap(AActor* OtherActor);
	void ExecuteUbergraph_BP_MissionControl_MemorialHallWelcome(int32_t EntryPoint);
};

