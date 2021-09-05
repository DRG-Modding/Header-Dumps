// BlueprintGeneratedClass BP_PoisonGasFungus_PoisonGasCloud.BP_PoisonGasFungus_PoisonGasCloud_C
// Size: 0x274 (Inherited: 0x264)
struct ABP_PoisonGasFungus_PoisonGasCloud_C : ABP_Damage_Cloud_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	float InitialDamageDelay; // 0x270(0x04)

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_PoisonGasFungus_PoisonGasCloud(int32_t EntryPoint);
};

