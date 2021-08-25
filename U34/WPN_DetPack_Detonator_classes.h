// BlueprintGeneratedClass WPN_DetPack_Detonator.WPN_DetPack_Detonator_C
// Size: 0x450 (Inherited: 0x440)
struct AWPN_DetPack_Detonator_C : ADetPackItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x440(0x08)
	struct UMaterialInstanceDynamic* StatusMaterial; // 0x448(0x08)

	void GetGearStatEntry(struct AFSDPlayerState* PlayerState, struct TArray<struct FGearStatEntry> Stats); // Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.GetGearStatEntry
	void UserConstructionScript(); // Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.UserConstructionScript
	void RecieveStartUsing(); // Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.RecieveStartUsing
	void RecieveEquipped(); // Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.RecieveEquipped
	void ReceiveResupply(float percentage); // Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.ReceiveResupply
	void Receive_OnRep_IsDetonatorOut(); // Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.Receive_OnRep_IsDetonatorOut
	void ExecuteUbergraph_WPN_DetPack_Detonator(int32_t EntryPoint); // Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.ExecuteUbergraph_WPN_DetPack_Detonator
};

