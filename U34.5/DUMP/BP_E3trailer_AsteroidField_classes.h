// BlueprintGeneratedClass BP_E3trailer_AsteroidField.BP_E3trailer_AsteroidField_C
// Size: 0x260 (Inherited: 0x220)
struct ABP_E3trailer_AsteroidField_C : AActor {
	USceneComponent* Scene; // 0x220(0x08)
	float Radius; // 0x228(0x04)
	TArray<UStaticMesh*> Meshes to spawn; // 0x230(0x10)
	TArray<UInstancedStaticMeshComponent*> Instanced meshes; // 0x240(0x10)
	int32_t Number of meshes; // 0x250(0x04)
	FRandomStream Random seed; // 0x254(0x08)
	float Scale; // 0x25c(0x04)

	void UserConstructionScript();
};

