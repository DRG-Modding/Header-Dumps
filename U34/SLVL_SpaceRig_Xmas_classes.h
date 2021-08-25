// BlueprintGeneratedClass SLVL_SpaceRig_Xmas.SLVL_SpaceRig_Xmas_C
// Size: 0x240 (Inherited: 0x228)
struct ASLVL_SpaceRig_Xmas_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	struct TArray<struct UAudioComponent*> AmbientAudioComponents; // 0x230(0x10)

	void UpdateAmbientMusic(); // Function SLVL_SpaceRig_Xmas.SLVL_SpaceRig_Xmas_C.UpdateAmbientMusic
	void FindAmbientMusicPlayers(); // Function SLVL_SpaceRig_Xmas.SLVL_SpaceRig_Xmas_C.FindAmbientMusicPlayers
	void ReceiveBeginPlay(); // Function SLVL_SpaceRig_Xmas.SLVL_SpaceRig_Xmas_C.ReceiveBeginPlay
	void OnJukeboxStreamerModeChanged_Event_1(bool NewValue); // Function SLVL_SpaceRig_Xmas.SLVL_SpaceRig_Xmas_C.OnJukeboxStreamerModeChanged_Event_1
	void ExecuteUbergraph_SLVL_SpaceRig_Xmas(int32_t EntryPoint); // Function SLVL_SpaceRig_Xmas.SLVL_SpaceRig_Xmas_C.ExecuteUbergraph_SLVL_SpaceRig_Xmas
};

