// BlueprintGeneratedClass BP_HandheldTablet_Off.BP_HandheldTablet_Off_C
// Size: 0x238 (Inherited: 0x220)
struct ABP_HandheldTablet_Off_C : AActor {
	UFirstPersonStaticMeshComponent* FirstPersonStaticMesh; // 0x220(0x08)
	USceneComponent* DefaultRoot; // 0x228(0x08)
	UMaterialInstanceDynamic* MonitorMaterial; // 0x230(0x08)

	bool Attached(AActor* Parent);
	bool Released();
	void SetBackgroundColor(FLinearColor Value);
	void UserConstructionScript();
};

