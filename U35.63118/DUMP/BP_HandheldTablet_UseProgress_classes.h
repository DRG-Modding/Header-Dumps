// BlueprintGeneratedClass BP_HandheldTablet_UseProgress.BP_HandheldTablet_UseProgress_C
// Size: 0x240 (Inherited: 0x220)
struct ABP_HandheldTablet_UseProgress_C : AActor {
	UFirstPersonWidgetComponent* FirstPersonWidget; // 0x220(0x08)
	UFirstPersonStaticMeshComponent* FirstPersonStaticMesh; // 0x228(0x08)
	USceneComponent* DefaultRoot; // 0x230(0x08)
	UMaterialInstanceDynamic* MonitorMaterial; // 0x238(0x08)

	bool Attached(AActor* Parent);
	bool Released();
	void SetBackgroundColor(FLinearColor Value);
	void UserConstructionScript();
};
