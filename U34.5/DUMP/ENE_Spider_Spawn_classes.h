// BlueprintGeneratedClass ENE_Spider_Spawn.ENE_Spider_Spawn_C
// Size: 0x4bd (Inherited: 0x480)
struct AENE_Spider_Spawn_C : AENE_Spider_Swarmer_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x480(0x08)
	float Spawn_Time_B1CBC18A4B11AF202D22269E86350761; // 0x488(0x04)
	float Spawn_Z_B1CBC18A4B11AF202D22269E86350761; // 0x48c(0x04)
	enum class ETimelineDirection Spawn__Direction_B1CBC18A4B11AF202D22269E86350761; // 0x490(0x01)
	UTimelineComponent* Spawn; // 0x498(0x08)
	FVector SpawnLocation; // 0x4a0(0x0c)
	FVector TargetLocation; // 0x4ac(0x0c)
	float ZSpawnOffset; // 0x4b8(0x04)
	bool UseSpawnAnimation; // 0x4bc(0x01)

	void OnRep_TargetLocation();
	void Spawn__FinishedFunc();
	void Spawn__UpdateFunc();
	void ReceiveBeginPlay();
	void Spawn Behavior();
	void Play Spawn();
	void ExecuteUbergraph_ENE_Spider_Spawn(int32_t EntryPoint);
};

