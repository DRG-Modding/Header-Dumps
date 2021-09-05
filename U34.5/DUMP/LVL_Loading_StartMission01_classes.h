// BlueprintGeneratedClass LVL_Loading_StartMission01.LVL_Loading_StartMission01_C
// Size: 0x240 (Inherited: 0x228)
struct ALVL_Loading_StartMission01_C : ALevelScriptActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	ULevelSequencePlayer* Player; // 0x230(0x08)
	AEmitter* P_E3trailer_DropPod_Exhaust_4_ExecuteUbergraph_LVL_Loading_StartMission01_RefProperty; // 0x238(0x08)

	void OnFinshed();
	void StopPlayer();
	void StartPlayer(ULevelSequence* LevelSequence);
	void ReceiveBeginPlay();
	void PlayerStart(ULevelSequence* LoaderLevelSequence);
	void PlayerStop();
	void ExecuteUbergraph_LVL_Loading_StartMission01(int32_t EntryPoint);
};

