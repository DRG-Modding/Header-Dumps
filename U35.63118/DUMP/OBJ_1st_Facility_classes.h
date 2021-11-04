// BlueprintGeneratedClass OBJ_1st_Facility.OBJ_1st_Facility_C
// Size: 0x2f8 (Inherited: 0x2f0)
struct UOBJ_1st_Facility_C : UFacilityObjective {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)

	FText GetObjectiveDescription(float missionLength);
	FText GetInMissionCounterText();
	FText GetInMissionText();
	int32_t GetObjectiveAmount(float missionLength);
	bool IsObjectiveResource(UResourceData* InResource);
	UTexture2D* GetInMissionCounterIcon();
	UTexture2D* GetObjectiveIcon();
	void ReceiveBeginPlay();
	void OnCoreDeposited();
	void Receive_AddEnemies(AProceduralSetup* setup);
	void ExecuteUbergraph_OBJ_1st_Facility(int32_t EntryPoint);
};

