// BlueprintGeneratedClass EWC_Base.EWC_Base_C
// Size: 0x4c (Inherited: 0x30)
struct UEWC_Base_C : UEnemyWaveController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x30(0x08)
	struct TArray<struct USoundCue*> Music; // 0x38(0x10)
	struct FMusicHandle MusicHandle; // 0x48(0x04)

	void PlayWaveMusac(); // Function EWC_Base.EWC_Base_C.PlayWaveMusac
	void PlayEndWaveMusic(); // Function EWC_Base.EWC_Base_C.PlayEndWaveMusic
	void StopWaveMusac(); // Function EWC_Base.EWC_Base_C.StopWaveMusac
	void ExecuteUbergraph_EWC_Base(int32_t EntryPoint); // Function EWC_Base.EWC_Base_C.ExecuteUbergraph_EWC_Base
};

