// BlueprintGeneratedClass BP_Hologram.BP_Hologram_C
// Size: 0x258 (Inherited: 0x220)
struct ABP_Hologram_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USphereComponent* Usable_Collider; // 0x228(0x08)
	struct URotatingMovementComponent* RotatingMovement; // 0x230(0x08)
	struct UTextRenderComponent* TextRender; // 0x238(0x08)
	struct UInstantUsable* InstantUsable; // 0x240(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	float RotationSpeed; // 0x250(0x04)
	int32_t NumberOfMarkers; // 0x254(0x04)

	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_Hologram.BP_Hologram_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
	void ReceiveBeginPlay(); // Function BP_Hologram.BP_Hologram_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_Hologram(int32_t EntryPoint); // Function BP_Hologram.BP_Hologram_C.ExecuteUbergraph_BP_Hologram
};

