// BlueprintGeneratedClass BP_BarGlass_Standard.BP_BarGlass_Standard_C
// Size: 0x278 (Inherited: 0x254)
struct ABP_BarGlass_Standard_C : ABP_BarGlass_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x258(0x08)
	UParticleSystemComponent* ParticleSystem; // 0x260(0x08)
	UAudioComponent* SparkleDrink; // 0x268(0x08)
	USkeletalMeshComponent* SkeletalMesh; // 0x270(0x08)

	void Fill();
	void BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_1_ActorComponentActivatedSignature__DelegateSignature(UActorComponent* Component, bool bReset);
	void ExecuteUbergraph_BP_BarGlass_Standard(int32_t EntryPoint);
};

