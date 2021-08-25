// BlueprintGeneratedClass BP_SpawnManager.BP_SpawnManager_C
// Size: 0x278 (Inherited: 0x220)
struct ABP_SpawnManager_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UBP_MOD_MakeElite_C* BP_MOD_MakeElite; // 0x228(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	struct FName Spawn Tag; // 0x238(0x08)
	struct TArray<struct AActor*> Game Critical Actors; // 0x240(0x10)
	struct TArray<struct AActor*> Cullable Natural Creatures; // 0x250(0x10)
	struct TArray<struct AActor*> Actors Not Safe In Space Rig; // 0x260(0x10)
	struct FTimerHandle Cull Natural Spawns Timer; // 0x270(0x08)

	void Stop Culling Natural Spawns(); // Function BP_SpawnManager.BP_SpawnManager_C.Stop Culling Natural Spawns
	void Start Culling Natural Spawns(); // Function BP_SpawnManager.BP_SpawnManager_C.Start Culling Natural Spawns
	void Get Players By Spawn Options(struct FSpawnOptions Spawn Options, struct TArray<struct APlayerController*> Players); // Function BP_SpawnManager.BP_SpawnManager_C.Get Players By Spawn Options
	void Destroy Natural Creatures(); // Function BP_SpawnManager.BP_SpawnManager_C.Destroy Natural Creatures
	void Is Actor Spawnable(struct AActor* Actor, bool Result); // Function BP_SpawnManager.BP_SpawnManager_C.Is Actor Spawnable
	void Is Actor Safe In Space Rig(struct AActor* Actor, bool Result); // Function BP_SpawnManager.BP_SpawnManager_C.Is Actor Safe In Space Rig
	void Is Actor Mod Spawned(struct AActor* Actor, bool Result); // Function BP_SpawnManager.BP_SpawnManager_C.Is Actor Mod Spawned
	void Destroy Actors By Class(struct AActor* Actor, bool Only Mod Spawned); // Function BP_SpawnManager.BP_SpawnManager_C.Destroy Actors By Class
	void Start Spawn Unit From Options(struct AActor* Actor, struct FSpawnOptions Spawn Options, struct FSpawnConfig Spawn Config, struct FNameplateConfig Nameplate); // Function BP_SpawnManager.BP_SpawnManager_C.Start Spawn Unit From Options
	void Start Spawn Unit On Actor(struct AActor* Actor, struct AActor* Target Actor, struct FSpawnConfig Spawn Config, struct FNameplateConfig Nameplate); // Function BP_SpawnManager.BP_SpawnManager_C.Start Spawn Unit On Actor
	void Start Spawn Unit(struct AActor* Actor, struct FVector Location, struct FSpawnConfig Spawn Config, struct FNameplateConfig Nameplate); // Function BP_SpawnManager.BP_SpawnManager_C.Start Spawn Unit
	void ReceiveBeginPlay(); // Function BP_SpawnManager.BP_SpawnManager_C.ReceiveBeginPlay
	void ReceiveEndPlay(char EndPlayReason); // Function BP_SpawnManager.BP_SpawnManager_C.ReceiveEndPlay
	void Cull Natural Spawns(); // Function BP_SpawnManager.BP_SpawnManager_C.Cull Natural Spawns
	void Event Start Natural Spawn Culling(); // Function BP_SpawnManager.BP_SpawnManager_C.Event Start Natural Spawn Culling
	void ExecuteUbergraph_BP_SpawnManager(int32_t EntryPoint); // Function BP_SpawnManager.BP_SpawnManager_C.ExecuteUbergraph_BP_SpawnManager
};

