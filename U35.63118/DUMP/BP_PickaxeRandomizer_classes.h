// BlueprintGeneratedClass BP_PickaxeRandomizer.BP_PickaxeRandomizer_C
// Size: 0x308 (Inherited: 0x220)
struct ABP_PickaxeRandomizer_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UStaticMeshComponent* Mesh_BladeFront; // 0x228(0x08)
	UStaticMeshComponent* Mesh_Shaft; // 0x230(0x08)
	UStaticMeshComponent* Mesh_Pommel; // 0x238(0x08)
	UStaticMeshComponent* Mesh_Head; // 0x240(0x08)
	UStaticMeshComponent* Mesh_Handle; // 0x248(0x08)
	UStaticMeshComponent* Mesh_BladeBack; // 0x250(0x08)
	USceneComponent* Scene; // 0x258(0x08)
	TArray<TSoftObjectPtr<UStaticMesh>> MeshesToLoad; // 0x260(0x10)
	TArray<TSoftObjectPtr<UStaticMesh>> BladesFront; // 0x270(0x10)
	TArray<TSoftObjectPtr<UStaticMesh>> BladesBack; // 0x280(0x10)
	TArray<TSoftObjectPtr<UStaticMesh>> Heads; // 0x290(0x10)
	TArray<TSoftObjectPtr<UStaticMesh>> Shafts; // 0x2a0(0x10)
	TArray<TSoftObjectPtr<UStaticMesh>> Handles; // 0x2b0(0x10)
	TArray<TSoftObjectPtr<UStaticMesh>> Pommels; // 0x2c0(0x10)
	TArray<TSoftObjectPtr<UMaterialInstance>> Materials; // 0x2d0(0x10)
	TSoftObjectPtr<UMaterialInstance> ChosenMaterial; // 0x2e0(0x28)

	void SetStaticMesh(UStaticMeshComponent* MeshComponent, int32_t Index);
	void SelectRandomMesh(TArray<TSoftObjectPtr<UStaticMesh>> Array);
	void ReceiveBeginPlay();
	void Loaded();
	void LoadedMaterial();
	void ExecuteUbergraph_BP_PickaxeRandomizer(int32_t EntryPoint);
};

