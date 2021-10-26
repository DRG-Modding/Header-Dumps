// BlueprintGeneratedClass LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C
// Size: 0x238 (Inherited: 0x228)
struct ALVL_Loading_DeepDive_B_C : ALevelScriptActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	ULevelSequencePlayer* Player; // 0x230(0x08)

	void StopPlayer();
	void StartPlayer(ULevelSequence* LevelSequence);
	void ReceiveBeginPlay();
	void PlayerStart(ULevelSequence* LoaderLevelSequence);
	void PlayerStop();
	void ExecuteUbergraph_LVL_Loading_DeepDive_B(int32_t EntryPoint);
};

