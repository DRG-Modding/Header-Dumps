// BlueprintGeneratedClass OBJ_1st_Refinery.OBJ_1st_Refinery_C
// Size: 0x210 (Inherited: 0x208)
struct UOBJ_1st_Refinery_C : URefineryObjective {
	FPointerToUberGraphFrame UberGraphFrame; // 0x208(0x08)

	int32_t GetObjectiveAmount(float missionLength);
	FText GetObjectiveDescription(float missionLength);
	FText GetInMissionText();
	UTexture2D* GetObjectiveIcon();
	void ReceiveRefinerySpawned(AFSDRefinery* InRefinery);
	void OnRefineryStateChangedBP(enum class ERefineryState InRefineryState);
	void ExecuteUbergraph_OBJ_1st_Refinery(int32_t EntryPoint);
};

