// BlueprintGeneratedClass OBJ_1st_Escort.OBJ_1st_Escort_C
// Size: 0x360 (Inherited: 0x310)
struct UOBJ_1st_Escort_C : UEscortObjective {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)
	SoftClassProperty GarageBeacon; // 0x318(0x28)
	bool MuleClass; // 0x340(0x01)
	char UnknownData_341[0x7]; // 0x341(0x07)
	struct FSoftObjectPath EscortMuleClass; // 0x348(0x18)

	int32_t GetObjectiveAmount(float missionLength); // Function OBJ_1st_Escort.OBJ_1st_Escort_C.GetObjectiveAmount
	struct FText GetObjectiveDescription(float missionLength); // Function OBJ_1st_Escort.OBJ_1st_Escort_C.GetObjectiveDescription
	struct UOptionalObjectiveWidget* GetOptionalMissionWidget(); // Function OBJ_1st_Escort.OBJ_1st_Escort_C.GetOptionalMissionWidget
	struct FText GetInMissionText(); // Function OBJ_1st_Escort.OBJ_1st_Escort_C.GetInMissionText
	struct UTexture2D* GetObjectiveIcon(); // Function OBJ_1st_Escort.OBJ_1st_Escort_C.GetObjectiveIcon
	struct FObjectiveMissionIcon GetMissionIcon(); // Function OBJ_1st_Escort.OBJ_1st_Escort_C.GetMissionIcon
	void ReceiveBeginPlay(); // Function OBJ_1st_Escort.OBJ_1st_Escort_C.ReceiveBeginPlay
	void OnEscortMuleSpawnedEvent(); // Function OBJ_1st_Escort.OBJ_1st_Escort_C.OnEscortMuleSpawnedEvent
	void OnMuleDied(struct UHealthComponentBase* HealthComponent); // Function OBJ_1st_Escort.OBJ_1st_Escort_C.OnMuleDied
	void SpawnGarage(); // Function OBJ_1st_Escort.OBJ_1st_Escort_C.SpawnGarage
	void OnAllDwarvesDown(); // Function OBJ_1st_Escort.OBJ_1st_Escort_C.OnAllDwarvesDown
	void ExecuteUbergraph_OBJ_1st_Escort(int32_t EntryPoint); // Function OBJ_1st_Escort.OBJ_1st_Escort_C.ExecuteUbergraph_OBJ_1st_Escort
};

