// BlueprintGeneratedClass OBJ_DD_AlienEggs.OBJ_DD_AlienEggs_C
// Size: 0x1b0 (Inherited: 0x1a8)
struct UOBJ_DD_AlienEggs_C : UOBJ_Gather_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1a8(0x08)

	FObjectiveMissionIcon GetMissionIcon();
	void GetNumberOfSpeicalEggs(TArray<AActor*> TargetArray, int32_t count);
	void TurnOnSpecialEggs();
	void Receive_StartTracking();
	void ExecuteUbergraph_OBJ_DD_AlienEggs(int32_t EntryPoint);
};

