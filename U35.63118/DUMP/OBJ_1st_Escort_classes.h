// BlueprintGeneratedClass OBJ_1st_Escort.OBJ_1st_Escort_C
// Size: 0x388 (Inherited: 0x338)
struct UOBJ_1st_Escort_C : UEscortObjective {
	FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	TSoftClassPtr<UObject> GarageBeacon; // 0x340(0x28)
	bool MuleClass; // 0x368(0x01)
	FSoftObjectPath EscortMuleClass; // 0x370(0x18)

	int32_t GetObjectiveAmount(float missionLength);
	FText GetObjectiveDescription(float missionLength);
	FText GetInMissionText();
	UTexture2D* GetObjectiveIcon();
	void ReceiveBeginPlay();
	void OnEscortMuleSpawnedEvent();
	void OnMuleDied(UHealthComponentBase* HealthComponent);
	void SpawnGarage();
	void OnAllDwarvesDown();
	void ExecuteUbergraph_OBJ_1st_Escort(int32_t EntryPoint);
};

