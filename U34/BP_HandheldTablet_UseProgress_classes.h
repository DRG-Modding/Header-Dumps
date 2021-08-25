// BlueprintGeneratedClass BP_HandheldTablet_UseProgress.BP_HandheldTablet_UseProgress_C
// Size: 0x240 (Inherited: 0x220)
struct ABP_HandheldTablet_UseProgress_C : AActor {
	struct UFirstPersonWidgetComponent* FirstPersonWidget; // 0x220(0x08)
	struct UFirstPersonStaticMeshComponent* FirstPersonStaticMesh; // 0x228(0x08)
	struct USceneComponent* DefaultRoot; // 0x230(0x08)
	struct UMaterialInstanceDynamic* MonitorMaterial; // 0x238(0x08)

	bool Attached(struct AActor* Parent); // Function BP_HandheldTablet_UseProgress.BP_HandheldTablet_UseProgress_C.Attached
	bool Released(); // Function BP_HandheldTablet_UseProgress.BP_HandheldTablet_UseProgress_C.Released
	void SetBackgroundColor(struct FLinearColor Value); // Function BP_HandheldTablet_UseProgress.BP_HandheldTablet_UseProgress_C.SetBackgroundColor
	void UserConstructionScript(); // Function BP_HandheldTablet_UseProgress.BP_HandheldTablet_UseProgress_C.UserConstructionScript
};

