// BlueprintGeneratedClass BP_MisComp_FXspawner.BP_MisComp_FXspawner_C
// Size: 0x278 (Inherited: 0x220)
struct ABP_MisComp_FXspawner_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UStaticMeshComponent* Volumetric light; // 0x228(0x08)
	USpotLightComponent* Spotlight_Rim; // 0x230(0x08)
	USpotLightComponent* SpotLight; // 0x238(0x08)
	USkeletalMeshComponent* SkeletalMesh; // 0x240(0x08)
	USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	USpotLightComponent* NewVar_1; // 0x250(0x08)
	bool Survived; // 0x258(0x01)
	UMaterialInstanceDynamic* DynamicMaterial; // 0x260(0x08)
	FLinearColor DefeatColor; // 0x268(0x10)

	void UserConstructionScript();
	void SetSurvived(bool Survived);
	void ExecuteUbergraph_BP_MisComp_FXspawner(int32_t EntryPoint);
};

