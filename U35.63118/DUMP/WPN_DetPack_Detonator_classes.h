// BlueprintGeneratedClass WPN_DetPack_Detonator.WPN_DetPack_Detonator_C
// Size: 0x470 (Inherited: 0x460)
struct AWPN_DetPack_Detonator_C : ADetPackItem {
	FPointerToUberGraphFrame UberGraphFrame; // 0x460(0x08)
	UMaterialInstanceDynamic* StatusMaterial; // 0x468(0x08)

	void GetGearStatEntry(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void UserConstructionScript();
	void RecieveStartUsing();
	void RecieveEquipped();
	void ReceiveResupply(float percentage);
	void Receive_OnRep_IsDetonatorOut();
	void ExecuteUbergraph_WPN_DetPack_Detonator(int32_t EntryPoint);
};

