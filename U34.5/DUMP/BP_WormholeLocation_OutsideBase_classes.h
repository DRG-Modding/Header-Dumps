// BlueprintGeneratedClass BP_WormholeLocation_OutsideBase.BP_WormholeLocation_OutsideBase_C
// Size: 0x238 (Inherited: 0x230)
struct ABP_WormholeLocation_OutsideBase_C : ABP_WormholeLocation_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)

	void OnPlayerEnterLocation(APlayerCharacter* Character);
	void OnPlayerLeaveLocation(APlayerCharacter* Character);
	void ExecuteUbergraph_BP_WormholeLocation_OutsideBase(int32_t EntryPoint);
};

