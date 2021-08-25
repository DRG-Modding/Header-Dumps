// BlueprintGeneratedClass BP_FloorMaker.BP_FloorMaker_C
// Size: 0x240 (Inherited: 0x220)
struct ABP_FloorMaker_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	int32_t Platform Count; // 0x230(0x04)
	float Projectile Interval; // 0x234(0x04)
	struct FTimerHandle Spawn Timer; // 0x238(0x08)

	void Find Closest Player(struct APawn* Closest Player); // Function BP_FloorMaker.BP_FloorMaker_C.Find Closest Player
	void ReceiveBeginPlay(); // Function BP_FloorMaker.BP_FloorMaker_C.ReceiveBeginPlay
	void Spawn Projectile(); // Function BP_FloorMaker.BP_FloorMaker_C.Spawn Projectile
	void ExecuteUbergraph_BP_FloorMaker(int32_t EntryPoint); // Function BP_FloorMaker.BP_FloorMaker_C.ExecuteUbergraph_BP_FloorMaker
};

