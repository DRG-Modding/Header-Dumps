// BlueprintGeneratedClass LVL_CharacterSelection.LVL_CharacterSelection_C
// Size: 0x260 (Inherited: 0x228)
struct ALVL_CharacterSelection_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	struct ULevelSequencePlayer* Player; // 0x230(0x08)
	struct ACharacterSelectionSwitcher_C* switcher; // 0x238(0x08)
	struct TArray<struct FCharacterViewInfo> CharViewerList; // 0x240(0x10)
	struct ACharacterSelectionSwitcher_C* CharacterSelectionSwitcher_186_ExecuteUbergraph_LVL_CharacterSelection_RefProperty; // 0x250(0x08)
	struct ACameraActor* CameraActor_1_ExecuteUbergraph_LVL_CharacterSelection_RefProperty; // 0x258(0x08)

	void PlaySpecificSequence(struct ULevelSequence* LevelSequence); // Function LVL_CharacterSelection.LVL_CharacterSelection_C.PlaySpecificSequence
	void StopPlayer(); // Function LVL_CharacterSelection.LVL_CharacterSelection_C.StopPlayer
	void StartPlayer(enum class ECharselectionCameraLocation CamSetting); // Function LVL_CharacterSelection.LVL_CharacterSelection_C.StartPlayer
	void StopPlay(); // Function LVL_CharacterSelection.LVL_CharacterSelection_C.StopPlay
	void StartLevelSeq(struct ULevelSequence* CharacterLevelSequence); // Function LVL_CharacterSelection.LVL_CharacterSelection_C.StartLevelSeq
	void StartPlay(enum class ECharselectionCameraLocation selectionLocation); // Function LVL_CharacterSelection.LVL_CharacterSelection_C.StartPlay
	void ReceiveBeginPlay(); // Function LVL_CharacterSelection.LVL_CharacterSelection_C.ReceiveBeginPlay
	void ExecuteUbergraph_LVL_CharacterSelection(int32_t EntryPoint); // Function LVL_CharacterSelection.LVL_CharacterSelection_C.ExecuteUbergraph_LVL_CharacterSelection
};

