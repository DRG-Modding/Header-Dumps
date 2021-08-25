// BlueprintGeneratedClass BP_BarGlass_Standard.BP_BarGlass_Standard_C
// Size: 0x278 (Inherited: 0x254)
struct ABP_BarGlass_Standard_C : ABP_BarGlass_C {
	char UnknownData_254[0x4]; // 0x254(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x258(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x260(0x08)
	struct UAudioComponent* SparkleDrink; // 0x268(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x270(0x08)

	void Fill(); // Function BP_BarGlass_Standard.BP_BarGlass_Standard_C.Fill
	void BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_1_ActorComponentActivatedSignature__DelegateSignature(struct UActorComponent* Component, bool bReset); // Function BP_BarGlass_Standard.BP_BarGlass_Standard_C.BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_1_ActorComponentActivatedSignature__DelegateSignature
	void ExecuteUbergraph_BP_BarGlass_Standard(int32_t EntryPoint); // Function BP_BarGlass_Standard.BP_BarGlass_Standard_C.ExecuteUbergraph_BP_BarGlass_Standard
};

