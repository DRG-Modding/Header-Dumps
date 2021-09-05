// BlueprintGeneratedClass OBJ_Elimination_Base.OBJ_Elimination_Base_C
// Size: 0x228 (Inherited: 0x1f0)
struct UOBJ_Elimination_Base_C : UEliminationObjective {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1f0(0x08)
	FText Title; // 0x1f8(0x18)
	FText Description; // 0x210(0x18)

	UTexture2D* GetInMissionCounterIcon();
	FText GetInMissionCounterText();
	FObjectiveMissionIcon GetMissionIcon();
	UTexture2D* GetObjectiveIcon();
	int32_t GetObjectiveAmount(float missionLength);
	FText GetInMissionText();
	FText GetObjectiveDescription(float missionLength);
	void ReceiveTargetKilled();
	void ReceiveTargetSpawned();
	void ExecuteUbergraph_OBJ_Elimination_Base(int32_t EntryPoint);
};

