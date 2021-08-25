// BlueprintGeneratedClass BP_SpawnUnit.BP_SpawnUnit_C
// Size: 0x328 (Inherited: 0x220)
struct ABP_SpawnUnit_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UBP_MOD_MakeElite_C* BP_MOD_MakeElite; // 0x228(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	struct AActor* Actor To Spawn; // 0x238(0x08)
	struct FSpawnConfig Spawn Configuration; // 0x240(0x40)
	float Min Start Delay; // 0x280(0x04)
	float Max Start Delay; // 0x284(0x04)
	float Min Lifetime; // 0x288(0x04)
	float Max Lifetime; // 0x28c(0x04)
	struct TArray<struct FVector> Avoid Locations; // 0x290(0x10)
	struct TArray<char> Sphere Check Object Types; // 0x2a0(0x10)
	struct FTransform Spawn Transform; // 0x2b0(0x30)
	int32_t Search Iterations; // 0x2e0(0x04)
	struct FName Spawn Tag; // 0x2e4(0x08)
	char UnknownData_2EC[0x4]; // 0x2ec(0x04)
	struct TArray<struct AActor*> Spawned Actors; // 0x2f0(0x10)
	struct FNameplateConfig Nameplate Config; // 0x300(0x28)

	void Start Spawn(struct AActor* Actor, struct FSpawnConfig Spawn Config, struct FNameplateConfig Nameplate, struct FName Spawn Tag); // Function BP_SpawnUnit.BP_SpawnUnit_C.Start Spawn
	void Event Start Spawn(); // Function BP_SpawnUnit.BP_SpawnUnit_C.Event Start Spawn
	void Event End Spawn(); // Function BP_SpawnUnit.BP_SpawnUnit_C.Event End Spawn
	void ExecuteUbergraph_BP_SpawnUnit(int32_t EntryPoint); // Function BP_SpawnUnit.BP_SpawnUnit_C.ExecuteUbergraph_BP_SpawnUnit
};

