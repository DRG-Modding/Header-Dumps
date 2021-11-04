// BlueprintGeneratedClass EWC_Base.EWC_Base_C
// Size: 0x4c (Inherited: 0x30)
struct UEWC_Base_C : UEnemyWaveController {
	FPointerToUberGraphFrame UberGraphFrame; // 0x30(0x08)
	TArray<USoundCue*> Music; // 0x38(0x10)
	FMusicHandle MusicHandle; // 0x48(0x04)

	void PlayWaveMusac();
	void PlayEndWaveMusic();
	void StopWaveMusac();
	void ExecuteUbergraph_EWC_Base(int32_t EntryPoint);
};

