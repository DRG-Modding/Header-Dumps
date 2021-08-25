// BlueprintGeneratedClass WPN_Pickaxe.WPN_Pickaxe_C
// Size: 0x6b4 (Inherited: 0x6a0)
struct AWPN_Pickaxe_C : APickaxeItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6a0(0x08)
	struct UCrosshairAggregator* CrosshairAggregator; // 0x6a8(0x08)
	float NextHitTime; // 0x6b0(0x04)

	void GetGearStatEntry(struct AFSDPlayerState* PlayerState, struct TArray<struct FGearStatEntry> Stats); // Function WPN_Pickaxe.WPN_Pickaxe_C.GetGearStatEntry
	void SpecialTargetDamageEffects(struct FVector ImpactPoint, struct FVector ImpactNormal); // Function WPN_Pickaxe.WPN_Pickaxe_C.SpecialTargetDamageEffects
	void ReceiveBeginPlay(); // Function WPN_Pickaxe.WPN_Pickaxe_C.ReceiveBeginPlay
	void ExecuteUbergraph_WPN_Pickaxe(int32_t EntryPoint); // Function WPN_Pickaxe.WPN_Pickaxe_C.ExecuteUbergraph_WPN_Pickaxe
};

