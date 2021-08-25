// BlueprintGeneratedClass BP_SupplyPod_Marker.BP_SupplyPod_Marker_C
// Size: 0x270 (Inherited: 0x228)
struct ABP_SupplyPod_Marker_C : AItemMarker {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x230(0x08)
	struct UStaticMeshComponent* SupplyPod_SingleMesh; // 0x238(0x08)
	struct UWidgetComponent* Widget; // 0x240(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	struct UMaterialInstanceDynamic* Material; // 0x250(0x08)
	struct FLinearColor StartColor; // 0x258(0x10)
	struct FName ColorName; // 0x268(0x08)

	void SetMaterials(struct UMaterial* ParentMaterial, struct UMeshComponent* Mesh, struct UMaterialInstanceDynamic* DynamicMaterial); // Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.SetMaterials
	void UserConstructionScript(); // Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.UserConstructionScript
	void ReceiveBeginPlay(); // Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.ReceiveBeginPlay
	void OnMarkerValidChanged(bool Valid); // Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.OnMarkerValidChanged
	void OnMarkerVisibilityChanged(bool Visible); // Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.OnMarkerVisibilityChanged
	void ExecuteUbergraph_BP_SupplyPod_Marker(int32_t EntryPoint); // Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.ExecuteUbergraph_BP_SupplyPod_Marker
};

