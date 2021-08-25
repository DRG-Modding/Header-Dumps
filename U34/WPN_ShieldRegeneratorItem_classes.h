// BlueprintGeneratedClass WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C
// Size: 0x470 (Inherited: 0x458)
struct AWPN_ShieldRegeneratorItem_C : AArmorRegeneratorItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x458(0x08)
	struct UAudioComponent* RechargeAudio; // 0x460(0x08)
	struct UMaterialInterface* RechargedMaterial; // 0x468(0x08)

	void UpdateMaterial(); // Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.UpdateMaterial
	void GetGearStatEntry(struct AFSDPlayerState* PlayerState, struct TArray<struct FGearStatEntry> Stats); // Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.GetGearStatEntry
	void UserConstructionScript(); // Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.UserConstructionScript
	void RecieveStartUsing(); // Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.RecieveStartUsing
	void ReceiveItemThrown(struct AThrowableActor* thrownActor); // Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.ReceiveItemThrown
	void ReceiveGeneratorRecharged(); // Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.ReceiveGeneratorRecharged
	void ReceiveGeneratorRechargeProgress(float Progress); // Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.ReceiveGeneratorRechargeProgress
	void BndEvt__CarryCapacity_K2Node_ComponentBoundEvent_0_AmountChangedSignature__DelegateSignature(int32_t amount); // Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.BndEvt__CarryCapacity_K2Node_ComponentBoundEvent_0_AmountChangedSignature__DelegateSignature
	void BndEvt__ChargeCapacity_K2Node_ComponentBoundEvent_1_AmountChangedSignature__DelegateSignature(int32_t amount); // Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.BndEvt__ChargeCapacity_K2Node_ComponentBoundEvent_1_AmountChangedSignature__DelegateSignature
	void ReceiveGeneratorReturned(); // Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.ReceiveGeneratorReturned
	void ExecuteUbergraph_WPN_ShieldRegeneratorItem(int32_t EntryPoint); // Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.ExecuteUbergraph_WPN_ShieldRegeneratorItem
};

