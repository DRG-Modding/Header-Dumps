// BlueprintGeneratedClass BP_RadarDish01.BP_RadarDish01_C
// Size: 0x264 (Inherited: 0x220)
struct ABP_RadarDish01_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStaticMeshComponent* mesh_light; // 0x228(0x08)
	struct URotatingMovementComponent* RotatingMovement; // 0x230(0x08)
	struct UStaticMeshComponent* Mesh_Base; // 0x238(0x08)
	struct UStaticMeshComponent* Mesh_Dish; // 0x240(0x08)
	struct UStaticMeshComponent* Mesh_Arm; // 0x248(0x08)
	struct UStaticMeshComponent* Mesh_Foot; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	float RotationRate; // 0x260(0x04)

	void SetRotationRate(struct URotatingMovementComponent* self2, float RotationRate); // Function BP_RadarDish01.BP_RadarDish01_C.SetRotationRate
	void ReceiveBeginPlay(); // Function BP_RadarDish01.BP_RadarDish01_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_RadarDish01(int32_t EntryPoint); // Function BP_RadarDish01.BP_RadarDish01_C.ExecuteUbergraph_BP_RadarDish01
};

