// BlueprintGeneratedClass Donkey_BreadCrumb.Donkey_BreadCrumb_C
// Size: 0x294 (Inherited: 0x220)
struct ADonkey_BreadCrumb_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UStaticMeshComponent* SM_Donkey_DestinationMarker; // 0x228(0x08)
	UStaticMeshComponent* StaticMesh; // 0x230(0x08)
	UStaticMeshComponent* Shape_Cone3; // 0x238(0x08)
	UStaticMeshComponent* Shape_Cone; // 0x240(0x08)
	UStaticMeshComponent* Sphere; // 0x248(0x08)
	UStaticMeshComponent* TerrainScannerMesh; // 0x250(0x08)
	UPointLightComponent* PointLight; // 0x258(0x08)
	UStaticMeshComponent* SM_Light02; // 0x260(0x08)
	UPointLightComponent* PointLight_NoShadow; // 0x268(0x08)
	UStaticMeshComponent* mesh_front; // 0x270(0x08)
	UStaticMeshComponent* mesh_light; // 0x278(0x08)
	USceneComponent* Scene; // 0x280(0x08)
	FRotator NextPointLookat; // 0x288(0x0c)

	void OnRep_NextPointLookat();
	void SetNextArrowPoint(FVector NextPoint);
	FVector GetArrowPoint();
	void ReceiveBeginPlay();
	void Blink();
	void Blink_Photosensitive();
	void ExecuteUbergraph_Donkey_BreadCrumb(int32_t EntryPoint);
};

