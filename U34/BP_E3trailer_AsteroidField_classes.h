// BlueprintGeneratedClass BP_E3trailer_AsteroidField.BP_E3trailer_AsteroidField_C
// Size: 0x260 (Inherited: 0x220)
struct ABP_E3trailer_AsteroidField_C : AActor {
	struct USceneComponent* Scene; // 0x220(0x08)
	float Radius; // 0x228(0x04)
	char UnknownData_22C[0x4]; // 0x22c(0x04)
	struct TArray<struct UStaticMesh*> Meshes to spawn; // 0x230(0x10)
	struct TArray<struct UInstancedStaticMeshComponent*> Instanced meshes; // 0x240(0x10)
	int32_t Number of meshes; // 0x250(0x04)
	struct FRandomStream Random seed; // 0x254(0x08)
	float Scale; // 0x25c(0x04)

	void UserConstructionScript(); // Function BP_E3trailer_AsteroidField.BP_E3trailer_AsteroidField_C.UserConstructionScript
};

