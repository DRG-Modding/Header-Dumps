// BlueprintGeneratedClass AIC_Donkey.AIC_Donkey_C
// Size: 0x360 (Inherited: 0x358)
struct AAIC_Donkey_C : AFSDAIController {
	FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)

	void ReceiveBeginPlay();
	void OnOverlapsChanged(int32_t OverlapCount);
	void ExecuteUbergraph_AIC_Donkey(int32_t EntryPoint);
};

