// BlueprintGeneratedClass BP_ItemMarker_Base.BP_ItemMarker_Base_C
// Size: 0x260 (Inherited: 0x228)
struct ABP_ItemMarker_Base_C : AItemMarker {
	FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	USkeletalMeshComponent* SkeletalMesh; // 0x230(0x08)
	USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	UMaterialInstanceDynamic* Material; // 0x240(0x08)
	FName ColorName; // 0x248(0x08)
	FLinearColor ValidColor; // 0x250(0x10)

	void SetMaterials(UMeshComponent* Mesh, UMaterialInterface* ParentMaterial, UMaterialInstanceDynamic* DynamicMaterial);
	void UserConstructionScript();
	void OnMarkerValidChanged(bool Valid);
	void ExecuteUbergraph_BP_ItemMarker_Base(int32_t EntryPoint);
};

