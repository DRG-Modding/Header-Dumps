// BlueprintGeneratedClass WPN_Pickaxe.WPN_Pickaxe_C
// Size: 0x6b4 (Inherited: 0x6a0)
struct AWPN_Pickaxe_C : APickaxeItem {
	FPointerToUberGraphFrame UberGraphFrame; // 0x6a0(0x08)
	UCrosshairAggregator* CrosshairAggregator; // 0x6a8(0x08)
	float NextHitTime; // 0x6b0(0x04)

	void GetGearStatEntry(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void SpecialTargetDamageEffects(FVector ImpactPoint, FVector ImpactNormal);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_WPN_Pickaxe(int32_t EntryPoint);
};

