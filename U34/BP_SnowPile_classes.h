// BlueprintGeneratedClass BP_SnowPile.BP_SnowPile_C
// Size: 0x248 (Inherited: 0x220)
struct ABP_SnowPile_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UInstantUsable* InstantUsable; // 0x228(0x08)
	struct USphereComponent* Sphere; // 0x230(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)

	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_SnowPile.BP_SnowPile_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
	void ExecuteUbergraph_BP_SnowPile(int32_t EntryPoint); // Function BP_SnowPile.BP_SnowPile_C.ExecuteUbergraph_BP_SnowPile
};

