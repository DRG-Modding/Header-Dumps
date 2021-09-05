// BlueprintGeneratedClass BP_MultiStageEventStarter.BP_MultiStageEventStarter_C
// Size: 0x29c (Inherited: 0x248)
struct ABP_MultiStageEventStarter_C : AEventStarterButton {
	FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	UCapsuleComponent* Capsule; // 0x250(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x258(0x08)
	UOutlineComponent* outline; // 0x260(0x08)
	UStaticMeshComponent* StaticMesh; // 0x268(0x08)
	USkeletalMeshComponent* SkeletalMesh; // 0x270(0x08)
	UParticleSystem* EjectParticles; // 0x278(0x08)
	USoundCue* CrumbleSpire; // 0x280(0x08)
	bool EffectsShown; // 0x288(0x01)
	UMaterialInstanceDynamic* DynamicMaterial; // 0x290(0x08)
	float OriginalEmissive; // 0x298(0x04)

	void ShowUsedEffects();
	void OnRep_EffectsShown();
	void CheckTerrain(bool ShouldCarve);
	void UserConstructionScript();
	void OnOpenedForUse(bool wasOpened);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MultiStageEventStarter(int32_t EntryPoint);
};

