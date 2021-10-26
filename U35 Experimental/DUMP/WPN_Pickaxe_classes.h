// BlueprintGeneratedClass WPN_Pickaxe.WPN_Pickaxe_C
// Size: 0x6d4 (Inherited: 0x6c0)
struct AWPN_Pickaxe_C : APickaxeItem {
	FPointerToUberGraphFrame UberGraphFrame; // 0x6c0(0x08)
	UCrosshairAggregator* CrosshairAggregator; // 0x6c8(0x08)
	float NextHitTime; // 0x6d0(0x04)

	void GetGearStatEntry(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void SpecialTargetDamageEffects(FVector ImpactPoint, FVector ImpactNormal);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_WPN_Pickaxe(int32_t EntryPoint);
};

