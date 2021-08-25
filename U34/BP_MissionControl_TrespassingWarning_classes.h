// BlueprintGeneratedClass BP_MissionControl_TrespassingWarning.BP_MissionControl_TrespassingWarning_C
// Size: 0x238 (Inherited: 0x220)
struct ABP_MissionControl_TrespassingWarning_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UBoxComponent* TriggerBox; // 0x228(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x230(0x08)

	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function BP_MissionControl_TrespassingWarning.BP_MissionControl_TrespassingWarning_C.ReceiveActorBeginOverlap
	void ExecuteUbergraph_BP_MissionControl_TrespassingWarning(int32_t EntryPoint); // Function BP_MissionControl_TrespassingWarning.BP_MissionControl_TrespassingWarning_C.ExecuteUbergraph_BP_MissionControl_TrespassingWarning
};

