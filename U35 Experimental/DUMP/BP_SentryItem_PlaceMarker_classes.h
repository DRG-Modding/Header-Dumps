// BlueprintGeneratedClass BP_SentryItem_PlaceMarker.BP_SentryItem_PlaceMarker_C
// Size: 0x290 (Inherited: 0x228)
struct ABP_SentryItem_PlaceMarker_C : AItemMarker {
	FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	USkeletalMeshComponent* SkeletalMesh; // 0x230(0x08)
	USceneComponent* Scene; // 0x238(0x08)
	UStaticMeshComponent* RightLine; // 0x240(0x08)
	UStaticMeshComponent* LeftLine; // 0x248(0x08)
	USceneComponent* AimScene; // 0x250(0x08)
	UArrowComponent* Arrow; // 0x258(0x08)
	USceneComponent* DefaultSceneRoot; // 0x260(0x08)
	UMaterialInstanceDynamic* Material; // 0x268(0x08)
	FName ColorName; // 0x270(0x08)
	FLinearColor ValidColor; // 0x278(0x10)
	ARecallableSentryGunItem* Item; // 0x288(0x08)

	void SetAngleRestriction(float AngleRestriction);
	void SetMaterials(UMeshComponent* Mesh, UMaterialInterface* ParentMaterial, UMaterialInstanceDynamic* DynamicMaterial);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnMarkerValidChanged(bool Valid);
	void ExecuteUbergraph_BP_SentryItem_PlaceMarker(int32_t EntryPoint);
};

