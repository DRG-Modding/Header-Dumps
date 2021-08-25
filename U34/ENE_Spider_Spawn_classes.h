// BlueprintGeneratedClass ENE_Spider_Spawn.ENE_Spider_Spawn_C
// Size: 0x4bd (Inherited: 0x480)
struct AENE_Spider_Spawn_C : AENE_Spider_Swarmer_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x480(0x08)
	float Spawn_Time_B1CBC18A4B11AF202D22269E86350761; // 0x488(0x04)
	float Spawn_Z_B1CBC18A4B11AF202D22269E86350761; // 0x48c(0x04)
	char Spawn__Direction_B1CBC18A4B11AF202D22269E86350761; // 0x490(0x01)
	char UnknownData_491[0x7]; // 0x491(0x07)
	struct UTimelineComponent* Spawn; // 0x498(0x08)
	struct FVector SpawnLocation; // 0x4a0(0x0c)
	struct FVector TargetLocation; // 0x4ac(0x0c)
	float ZSpawnOffset; // 0x4b8(0x04)
	bool UseSpawnAnimation; // 0x4bc(0x01)

	void OnRep_TargetLocation(); // Function ENE_Spider_Spawn.ENE_Spider_Spawn_C.OnRep_TargetLocation
	void Spawn__FinishedFunc(); // Function ENE_Spider_Spawn.ENE_Spider_Spawn_C.Spawn__FinishedFunc
	void Spawn__UpdateFunc(); // Function ENE_Spider_Spawn.ENE_Spider_Spawn_C.Spawn__UpdateFunc
	void ReceiveBeginPlay(); // Function ENE_Spider_Spawn.ENE_Spider_Spawn_C.ReceiveBeginPlay
	void Spawn Behavior(); // Function ENE_Spider_Spawn.ENE_Spider_Spawn_C.Spawn Behavior
	void Play Spawn(); // Function ENE_Spider_Spawn.ENE_Spider_Spawn_C.Play Spawn
	void ExecuteUbergraph_ENE_Spider_Spawn(int32_t EntryPoint); // Function ENE_Spider_Spawn.ENE_Spider_Spawn_C.ExecuteUbergraph_ENE_Spider_Spawn
};

