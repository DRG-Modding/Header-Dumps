// BlueprintGeneratedClass BP_SentryItem_PlaceMarker.BP_SentryItem_PlaceMarker_C
// Size: 0x290 (Inherited: 0x228)
struct ABP_SentryItem_PlaceMarker_C : AItemMarker {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x230(0x08)
	struct USceneComponent* Scene; // 0x238(0x08)
	struct UStaticMeshComponent* RightLine; // 0x240(0x08)
	struct UStaticMeshComponent* LeftLine; // 0x248(0x08)
	struct USceneComponent* AimScene; // 0x250(0x08)
	struct UArrowComponent* Arrow; // 0x258(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x260(0x08)
	struct UMaterialInstanceDynamic* Material; // 0x268(0x08)
	struct FName ColorName; // 0x270(0x08)
	struct FLinearColor ValidColor; // 0x278(0x10)
	struct ARecallableSentryGunItem* Item; // 0x288(0x08)

	void SetAngleRestriction(float AngleRestriction); // Function BP_SentryItem_PlaceMarker.BP_SentryItem_PlaceMarker_C.SetAngleRestriction
	void SetMaterials(struct UMeshComponent* Mesh, struct UMaterialInterface* ParentMaterial, struct UMaterialInstanceDynamic* DynamicMaterial); // Function BP_SentryItem_PlaceMarker.BP_SentryItem_PlaceMarker_C.SetMaterials
	void UserConstructionScript(); // Function BP_SentryItem_PlaceMarker.BP_SentryItem_PlaceMarker_C.UserConstructionScript
	void ReceiveBeginPlay(); // Function BP_SentryItem_PlaceMarker.BP_SentryItem_PlaceMarker_C.ReceiveBeginPlay
	void OnMarkerValidChanged(bool Valid); // Function BP_SentryItem_PlaceMarker.BP_SentryItem_PlaceMarker_C.OnMarkerValidChanged
	void ExecuteUbergraph_BP_SentryItem_PlaceMarker(int32_t EntryPoint); // Function BP_SentryItem_PlaceMarker.BP_SentryItem_PlaceMarker_C.ExecuteUbergraph_BP_SentryItem_PlaceMarker
};

