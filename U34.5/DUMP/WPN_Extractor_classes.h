// BlueprintGeneratedClass WPN_Extractor.WPN_Extractor_C
// Size: 0x560 (Inherited: 0x528)
struct AWPN_Extractor_C : AExtractorItem {
	FPointerToUberGraphFrame UberGraphFrame; // 0x528(0x08)
	UOutlineComponent* outline; // 0x530(0x08)
	UStaticMeshComponent* TerrainScannerMesh; // 0x538(0x08)
	UCapsuleComponent* UsableCapsule; // 0x540(0x08)
	UInstantUsable* PickupUsable; // 0x548(0x08)
	bool Attaching; // 0x550(0x01)
	FVector ThrowVelocity; // 0x554(0x0c)

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__PickupUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	void BndEvt__PickupUsable_K2Node_ComponentBoundEvent_1_UsableChangedSignature__DelegateSignature(bool canUse);
	void OnThrown(FVector Direction);
	void RecieveEquipped();
	void RecieveUnequipped();
	void Drop(FVector Impulse, FVector Location);
	void Cheat_Fill();
	void ExecuteUbergraph_WPN_Extractor(int32_t EntryPoint);
};

