// BlueprintGeneratedClass Donkey_BreadCrumb.Donkey_BreadCrumb_C
// Size: 0x294 (Inherited: 0x220)
struct ADonkey_BreadCrumb_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStaticMeshComponent* SM_Donkey_DestinationMarker; // 0x228(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x230(0x08)
	struct UStaticMeshComponent* Shape_Cone3; // 0x238(0x08)
	struct UStaticMeshComponent* Shape_Cone; // 0x240(0x08)
	struct UStaticMeshComponent* Sphere; // 0x248(0x08)
	struct UStaticMeshComponent* TerrainScannerMesh; // 0x250(0x08)
	struct UPointLightComponent* PointLight; // 0x258(0x08)
	struct UStaticMeshComponent* SM_Light02; // 0x260(0x08)
	struct UPointLightComponent* PointLight_NoShadow; // 0x268(0x08)
	struct UStaticMeshComponent* mesh_front; // 0x270(0x08)
	struct UStaticMeshComponent* mesh_light; // 0x278(0x08)
	struct USceneComponent* Scene; // 0x280(0x08)
	struct FRotator NextPointLookat; // 0x288(0x0c)

	void OnRep_NextPointLookat(); // Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.OnRep_NextPointLookat
	void SetNextArrowPoint(struct FVector NextPoint); // Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.SetNextArrowPoint
	struct FVector GetArrowPoint(); // Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.GetArrowPoint
	void ReceiveBeginPlay(); // Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.ReceiveBeginPlay
	void Blink(); // Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.Blink
	void Blink_Photosensitive(); // Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.Blink_Photosensitive
	void ExecuteUbergraph_Donkey_BreadCrumb(int32_t EntryPoint); // Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.ExecuteUbergraph_Donkey_BreadCrumb
};

