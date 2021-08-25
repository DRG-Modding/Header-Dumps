// BlueprintGeneratedClass BP_ItemMarker_Base.BP_ItemMarker_Base_C
// Size: 0x260 (Inherited: 0x228)
struct ABP_ItemMarker_Base_C : AItemMarker {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	struct UMaterialInstanceDynamic* Material; // 0x240(0x08)
	struct FName ColorName; // 0x248(0x08)
	struct FLinearColor ValidColor; // 0x250(0x10)

	void SetMaterials(struct UMeshComponent* Mesh, struct UMaterialInterface* ParentMaterial, struct UMaterialInstanceDynamic* DynamicMaterial); // Function BP_ItemMarker_Base.BP_ItemMarker_Base_C.SetMaterials
	void UserConstructionScript(); // Function BP_ItemMarker_Base.BP_ItemMarker_Base_C.UserConstructionScript
	void OnMarkerValidChanged(bool Valid); // Function BP_ItemMarker_Base.BP_ItemMarker_Base_C.OnMarkerValidChanged
	void ExecuteUbergraph_BP_ItemMarker_Base(int32_t EntryPoint); // Function BP_ItemMarker_Base.BP_ItemMarker_Base_C.ExecuteUbergraph_BP_ItemMarker_Base
};

