// BlueprintGeneratedClass WPN_DetPack_Detonator.WPN_DetPack_Detonator_C
// Size: 0x450 (Inherited: 0x440)
struct AWPN_DetPack_Detonator_C : ADetPackItem {
	FPointerToUberGraphFrame UberGraphFrame; // 0x440(0x08)
	UMaterialInstanceDynamic* StatusMaterial; // 0x448(0x08)

	void GetGearStatEntry(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void UserConstructionScript();
	void RecieveStartUsing();
	void RecieveEquipped();
	void ReceiveResupply(float percentage);
	void Receive_OnRep_IsDetonatorOut();
	void ExecuteUbergraph_WPN_DetPack_Detonator(int32_t EntryPoint);
};

