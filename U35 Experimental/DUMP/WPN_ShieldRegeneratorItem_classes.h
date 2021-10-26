// BlueprintGeneratedClass WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C
// Size: 0x490 (Inherited: 0x478)
struct AWPN_ShieldRegeneratorItem_C : AShieldGeneratorItem {
	FPointerToUberGraphFrame UberGraphFrame; // 0x478(0x08)
	UAudioComponent* RechargeAudio; // 0x480(0x08)
	UMaterialInterface* RechargedMaterial; // 0x488(0x08)

	void UpdateMaterial();
	void GetGearStatEntry(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void UserConstructionScript();
	void RecieveStartUsing();
	void ReceiveItemThrown(AThrowableActor* thrownActor);
	void ReceiveGeneratorRecharged();
	void ReceiveGeneratorRechargeProgress(float Progress);
	void BndEvt__CarryCapacity_K2Node_ComponentBoundEvent_0_AmountChangedSignature__DelegateSignature(int32_t Amount);
	void BndEvt__ChargeCapacity_K2Node_ComponentBoundEvent_1_AmountChangedSignature__DelegateSignature(int32_t Amount);
	void ReceiveGeneratorReturned();
	void ExecuteUbergraph_WPN_ShieldRegeneratorItem(int32_t EntryPoint);
};

