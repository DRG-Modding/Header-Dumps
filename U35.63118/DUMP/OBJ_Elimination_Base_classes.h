// BlueprintGeneratedClass OBJ_Elimination_Base.OBJ_Elimination_Base_C
// Size: 0x250 (Inherited: 0x218)
struct UOBJ_Elimination_Base_C : UEliminationObjective {
	FPointerToUberGraphFrame UberGraphFrame; // 0x218(0x08)
	FText Title; // 0x220(0x18)
	FText Description; // 0x238(0x18)

	UTexture2D* GetInMissionCounterIcon();
	FText GetInMissionCounterText();
	UTexture2D* GetObjectiveIcon();
	int32_t GetObjectiveAmount(float missionLength);
	FText GetInMissionText();
	FText GetObjectiveDescription(float missionLength);
	void ReceiveTargetKilled();
	void ReceiveTargetSpawned();
	void ExecuteUbergraph_OBJ_Elimination_Base(int32_t EntryPoint);
};

