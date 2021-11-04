// BlueprintGeneratedClass LVL_CharacterSelection.LVL_CharacterSelection_C
// Size: 0x260 (Inherited: 0x228)
struct ALVL_CharacterSelection_C : ALevelScriptActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	ULevelSequencePlayer* Player; // 0x230(0x08)
	ACharacterSelectionSwitcher_C* switcher; // 0x238(0x08)
	TArray<FCharacterViewInfo> CharViewerList; // 0x240(0x10)
	ACharacterSelectionSwitcher_C* CharacterSelectionSwitcher_186_ExecuteUbergraph_LVL_CharacterSelection_RefProperty; // 0x250(0x08)
	ACameraActor* CameraActor_1_ExecuteUbergraph_LVL_CharacterSelection_RefProperty; // 0x258(0x08)

	void PlaySpecificSequence(ULevelSequence* LevelSequence);
	void StopPlayer();
	void StartPlayer(enum class ECharselectionCameraLocation CamSetting);
	void StopPlay();
	void StartLevelSeq(ULevelSequence* CharacterLevelSequence);
	void StartPlay(enum class ECharselectionCameraLocation selectionLocation);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void ExecuteUbergraph_LVL_CharacterSelection(int32_t EntryPoint);
};

