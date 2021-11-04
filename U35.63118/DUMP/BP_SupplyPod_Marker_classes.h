// BlueprintGeneratedClass BP_SupplyPod_Marker.BP_SupplyPod_Marker_C
// Size: 0x270 (Inherited: 0x228)
struct ABP_SupplyPod_Marker_C : AItemMarker {
	FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	UStaticMeshComponent* StaticMesh; // 0x230(0x08)
	UStaticMeshComponent* SupplyPod_SingleMesh; // 0x238(0x08)
	UWidgetComponent* Widget; // 0x240(0x08)
	USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	UMaterialInstanceDynamic* Material; // 0x250(0x08)
	FLinearColor StartColor; // 0x258(0x10)
	FName ColorName; // 0x268(0x08)

	void SetMaterials(UMaterial* ParentMaterial, UMeshComponent* Mesh, UMaterialInstanceDynamic* DynamicMaterial);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnMarkerValidChanged(bool Valid);
	void OnMarkerVisibilityChanged(bool Visible);
	void ExecuteUbergraph_BP_SupplyPod_Marker(int32_t EntryPoint);
};

