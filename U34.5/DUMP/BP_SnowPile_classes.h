// BlueprintGeneratedClass BP_SnowPile.BP_SnowPile_C
// Size: 0x248 (Inherited: 0x220)
struct ABP_SnowPile_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UInstantUsable* InstantUsable; // 0x228(0x08)
	USphereComponent* Sphere; // 0x230(0x08)
	UStaticMeshComponent* StaticMesh; // 0x238(0x08)
	USceneComponent* DefaultSceneRoot; // 0x240(0x08)

	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	void ExecuteUbergraph_BP_SnowPile(int32_t EntryPoint);
};

