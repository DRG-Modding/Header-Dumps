// BlueprintGeneratedClass BP_MultiStageEventStarter.BP_MultiStageEventStarter_C
// Size: 0x29c (Inherited: 0x248)
struct ABP_MultiStageEventStarter_C : AEventStarterButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x250(0x08)
	struct UOutlineComponent* outline; // 0x258(0x08)
	struct UCapsuleComponent* Capsule; // 0x260(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x268(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x270(0x08)
	struct UParticleSystem* EjectParticles; // 0x278(0x08)
	struct USoundCue* CrumbleSpire; // 0x280(0x08)
	bool EffectsShown; // 0x288(0x01)
	char UnknownData_289[0x7]; // 0x289(0x07)
	struct UMaterialInstanceDynamic* DynamicMaterial; // 0x290(0x08)
	float OriginalEmissive; // 0x298(0x04)

	void ShowUsedEffects(); // Function BP_MultiStageEventStarter.BP_MultiStageEventStarter_C.ShowUsedEffects
	void OnRep_EffectsShown(); // Function BP_MultiStageEventStarter.BP_MultiStageEventStarter_C.OnRep_EffectsShown
	void CheckTerrain(bool ShouldCarve); // Function BP_MultiStageEventStarter.BP_MultiStageEventStarter_C.CheckTerrain
	void UserConstructionScript(); // Function BP_MultiStageEventStarter.BP_MultiStageEventStarter_C.UserConstructionScript
	void OnOpenedForUse(bool wasOpened); // Function BP_MultiStageEventStarter.BP_MultiStageEventStarter_C.OnOpenedForUse
	void ReceiveBeginPlay(); // Function BP_MultiStageEventStarter.BP_MultiStageEventStarter_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_MultiStageEventStarter(int32_t EntryPoint); // Function BP_MultiStageEventStarter.BP_MultiStageEventStarter_C.ExecuteUbergraph_BP_MultiStageEventStarter
};

