// BlueprintGeneratedClass BP_PickaxeRandomizer.BP_PickaxeRandomizer_C
// Size: 0x308 (Inherited: 0x220)
struct ABP_PickaxeRandomizer_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStaticMeshComponent* Mesh_BladeFront; // 0x228(0x08)
	struct UStaticMeshComponent* Mesh_Shaft; // 0x230(0x08)
	struct UStaticMeshComponent* Mesh_Pommel; // 0x238(0x08)
	struct UStaticMeshComponent* Mesh_Head; // 0x240(0x08)
	struct UStaticMeshComponent* Mesh_Handle; // 0x248(0x08)
	struct UStaticMeshComponent* Mesh_BladeBack; // 0x250(0x08)
	struct USceneComponent* Scene; // 0x258(0x08)
	struct TArray<struct TSoftObjectPtr<struct UStaticMesh>> MeshesToLoad; // 0x260(0x10)
	struct TArray<struct TSoftObjectPtr<struct UStaticMesh>> BladesFront; // 0x270(0x10)
	struct TArray<struct TSoftObjectPtr<struct UStaticMesh>> BladesBack; // 0x280(0x10)
	struct TArray<struct TSoftObjectPtr<struct UStaticMesh>> Heads; // 0x290(0x10)
	struct TArray<struct TSoftObjectPtr<struct UStaticMesh>> Shafts; // 0x2a0(0x10)
	struct TArray<struct TSoftObjectPtr<struct UStaticMesh>> Handles; // 0x2b0(0x10)
	struct TArray<struct TSoftObjectPtr<struct UStaticMesh>> Pommels; // 0x2c0(0x10)
	struct TArray<struct TSoftObjectPtr<struct UMaterialInstance>> Materials; // 0x2d0(0x10)
	struct TSoftObjectPtr<struct UMaterialInstance> ChosenMaterial; // 0x2e0(0x28)

	void SetStaticMesh(struct UStaticMeshComponent* MeshComponent, int32_t Index); // Function BP_PickaxeRandomizer.BP_PickaxeRandomizer_C.SetStaticMesh
	void SelectRandomMesh(struct TArray<struct TSoftObjectPtr<struct UStaticMesh>> Array); // Function BP_PickaxeRandomizer.BP_PickaxeRandomizer_C.SelectRandomMesh
	void ReceiveBeginPlay(); // Function BP_PickaxeRandomizer.BP_PickaxeRandomizer_C.ReceiveBeginPlay
	void Loaded(); // Function BP_PickaxeRandomizer.BP_PickaxeRandomizer_C.Loaded
	void LoadedMaterial(); // Function BP_PickaxeRandomizer.BP_PickaxeRandomizer_C.LoadedMaterial
	void ExecuteUbergraph_BP_PickaxeRandomizer(int32_t EntryPoint); // Function BP_PickaxeRandomizer.BP_PickaxeRandomizer_C.ExecuteUbergraph_BP_PickaxeRandomizer
};

