// BlueprintGeneratedClass BP_HandheldTablet_Off.BP_HandheldTablet_Off_C
// Size: 0x238 (Inherited: 0x220)
struct ABP_HandheldTablet_Off_C : AActor {
	struct UFirstPersonStaticMeshComponent* FirstPersonStaticMesh; // 0x220(0x08)
	struct USceneComponent* DefaultRoot; // 0x228(0x08)
	struct UMaterialInstanceDynamic* MonitorMaterial; // 0x230(0x08)

	bool Attached(struct AActor* Parent); // Function BP_HandheldTablet_Off.BP_HandheldTablet_Off_C.Attached
	bool Released(); // Function BP_HandheldTablet_Off.BP_HandheldTablet_Off_C.Released
	void SetBackgroundColor(struct FLinearColor Value); // Function BP_HandheldTablet_Off.BP_HandheldTablet_Off_C.SetBackgroundColor
	void UserConstructionScript(); // Function BP_HandheldTablet_Off.BP_HandheldTablet_Off_C.UserConstructionScript
};

