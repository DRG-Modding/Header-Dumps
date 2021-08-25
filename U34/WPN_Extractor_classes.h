// BlueprintGeneratedClass WPN_Extractor.WPN_Extractor_C
// Size: 0x560 (Inherited: 0x528)
struct AWPN_Extractor_C : AExtractorItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x528(0x08)
	struct UOutlineComponent* outline; // 0x530(0x08)
	struct UStaticMeshComponent* TerrainScannerMesh; // 0x538(0x08)
	struct UCapsuleComponent* UsableCapsule; // 0x540(0x08)
	struct UInstantUsable* PickupUsable; // 0x548(0x08)
	bool Attaching; // 0x550(0x01)
	char UnknownData_551[0x3]; // 0x551(0x03)
	struct FVector ThrowVelocity; // 0x554(0x0c)

	void UserConstructionScript(); // Function WPN_Extractor.WPN_Extractor_C.UserConstructionScript
	void ReceiveBeginPlay(); // Function WPN_Extractor.WPN_Extractor_C.ReceiveBeginPlay
	void BndEvt__PickupUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function WPN_Extractor.WPN_Extractor_C.BndEvt__PickupUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
	void BndEvt__PickupUsable_K2Node_ComponentBoundEvent_1_UsableChangedSignature__DelegateSignature(bool canUse); // Function WPN_Extractor.WPN_Extractor_C.BndEvt__PickupUsable_K2Node_ComponentBoundEvent_1_UsableChangedSignature__DelegateSignature
	void OnThrown(struct FVector Direction); // Function WPN_Extractor.WPN_Extractor_C.OnThrown
	void RecieveEquipped(); // Function WPN_Extractor.WPN_Extractor_C.RecieveEquipped
	void RecieveUnequipped(); // Function WPN_Extractor.WPN_Extractor_C.RecieveUnequipped
	void Drop(struct FVector Impulse, struct FVector Location); // Function WPN_Extractor.WPN_Extractor_C.Drop
	void Cheat_Fill(); // Function WPN_Extractor.WPN_Extractor_C.Cheat_Fill
	void ExecuteUbergraph_WPN_Extractor(int32_t EntryPoint); // Function WPN_Extractor.WPN_Extractor_C.ExecuteUbergraph_WPN_Extractor
};

