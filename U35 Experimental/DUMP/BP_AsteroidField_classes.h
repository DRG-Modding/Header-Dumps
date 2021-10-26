// BlueprintGeneratedClass BP_AsteroidField.BP_AsteroidField_C
// Size: 0x2d4 (Inherited: 0x220)
struct ABP_AsteroidField_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	URotatingMovementComponent* RotatingMovement; // 0x228(0x08)
	UBillboardComponent* Billboard; // 0x230(0x08)
	UStaticMeshComponent* Mesh_PlanetaryRing; // 0x238(0x08)
	USceneComponent* Scene; // 0x240(0x08)
	TArray<UStaticMesh*> Meshes to spawn; // 0x248(0x10)
	int32_t Number of meshes; // 0x258(0x04)
	float AsteroidScale; // 0x25c(0x04)
	float RadiusInner; // 0x260(0x04)
	float RadiusOuter; // 0x264(0x04)
	TArray<UInstancedStaticMeshComponent*> Instanced meshes; // 0x268(0x10)
	TSoftObjectPtr<UHierarchicalInstancedStaticMeshComponent> NewVar_1; // 0x278(0x28)
	float RingNoiseScale; // 0x2a0(0x04)
	float RingHeight; // 0x2a4(0x04)
	float RingMeshCircumferance; // 0x2a8(0x04)
	bool RingField; // 0x2ac(0x01)
	bool RingField - Show Ring; // 0x2ad(0x01)
	float RingOpacity; // 0x2b0(0x04)
	FRandomStream Random seed; // 0x2b4(0x08)
	float RingEmissiveMultiplier; // 0x2bc(0x04)
	UMaterialInterface* Asteroid Material; // 0x2c0(0x08)
	FRotator Rotation; // 0x2c8(0x0c)

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_AsteroidField(int32_t EntryPoint);
};

