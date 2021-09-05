// BlueprintGeneratedClass BP_LocalWaveTrigger.BP_LocalWaveTrigger_C
// Size: 0x230 (Inherited: 0x220)
struct ABP_LocalWaveTrigger_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	USceneComponent* DefaultSceneRoot; // 0x228(0x08)

	void ReceiveBeginPlay();
	void CheckForNearbyPlayers();
	void ExecuteUbergraph_BP_LocalWaveTrigger(int32_t EntryPoint);
};

