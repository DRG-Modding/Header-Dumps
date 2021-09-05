// BlueprintGeneratedClass WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C
// Size: 0x470 (Inherited: 0x458)
struct AWPN_ShieldRegeneratorItem_C : AArmorRegeneratorItem {
	FPointerToUberGraphFrame UberGraphFrame; // 0x458(0x08)
	UAudioComponent* RechargeAudio; // 0x460(0x08)
	UMaterialInterface* RechargedMaterial; // 0x468(0x08)

	void UpdateMaterial();
	void GetGearStatEntry(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void UserConstructionScript();
	void RecieveStartUsing();
	void ReceiveItemThrown(AThrowableActor* thrownActor);
	void ReceiveGeneratorRecharged();
	void ReceiveGeneratorRechargeProgress(float Progress);
	void BndEvt__CarryCapacity_K2Node_ComponentBoundEvent_0_AmountChangedSignature__DelegateSignature(int32_t amount);
	void BndEvt__ChargeCapacity_K2Node_ComponentBoundEvent_1_AmountChangedSignature__DelegateSignature(int32_t amount);
	void ReceiveGeneratorReturned();
	void ExecuteUbergraph_WPN_ShieldRegeneratorItem(int32_t EntryPoint);
};

