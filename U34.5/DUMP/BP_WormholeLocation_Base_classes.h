// BlueprintGeneratedClass BP_WormholeLocation_Base.BP_WormholeLocation_Base_C
// Size: 0x230 (Inherited: 0x220)
struct ABP_WormholeLocation_Base_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	USceneComponent* DefaultSceneRoot; // 0x228(0x08)

	void OnPlayerEnterLocation(APlayerCharacter* Character);
	void OnPlayerLeaveLocation(APlayerCharacter* Character);
	void ExecuteUbergraph_BP_WormholeLocation_Base(int32_t EntryPoint);
};

