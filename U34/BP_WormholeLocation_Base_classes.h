// BlueprintGeneratedClass BP_WormholeLocation_Base.BP_WormholeLocation_Base_C
// Size: 0x230 (Inherited: 0x220)
struct ABP_WormholeLocation_Base_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)

	void OnPlayerEnterLocation(struct APlayerCharacter* Character); // Function BP_WormholeLocation_Base.BP_WormholeLocation_Base_C.OnPlayerEnterLocation
	void OnPlayerLeaveLocation(struct APlayerCharacter* Character); // Function BP_WormholeLocation_Base.BP_WormholeLocation_Base_C.OnPlayerLeaveLocation
	void ExecuteUbergraph_BP_WormholeLocation_Base(int32_t EntryPoint); // Function BP_WormholeLocation_Base.BP_WormholeLocation_Base_C.ExecuteUbergraph_BP_WormholeLocation_Base
};

