// BlueprintGeneratedClass BP_MissionControl_TrespassingWarning.BP_MissionControl_TrespassingWarning_C
// Size: 0x238 (Inherited: 0x220)
struct ABP_MissionControl_TrespassingWarning_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UBoxComponent* TriggerBox; // 0x228(0x08)
	USceneComponent* DefaultSceneRoot; // 0x230(0x08)

	void ReceiveActorBeginOverlap(AActor* OtherActor);
	void ExecuteUbergraph_BP_MissionControl_TrespassingWarning(int32_t EntryPoint);
};

