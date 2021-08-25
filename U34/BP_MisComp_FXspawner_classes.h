// BlueprintGeneratedClass BP_MisComp_FXspawner.BP_MisComp_FXspawner_C
// Size: 0x278 (Inherited: 0x220)
struct ABP_MisComp_FXspawner_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStaticMeshComponent* Volumetric light; // 0x228(0x08)
	struct USpotLightComponent* Spotlight_Rim; // 0x230(0x08)
	struct USpotLightComponent* SpotLight; // 0x238(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x240(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	struct USpotLightComponent* NewVar_1; // 0x250(0x08)
	bool Survived; // 0x258(0x01)
	char UnknownData_259[0x7]; // 0x259(0x07)
	struct UMaterialInstanceDynamic* DynamicMaterial; // 0x260(0x08)
	struct FLinearColor DefeatColor; // 0x268(0x10)

	void UserConstructionScript(); // Function BP_MisComp_FXspawner.BP_MisComp_FXspawner_C.UserConstructionScript
	void SetSurvived(bool Survived); // Function BP_MisComp_FXspawner.BP_MisComp_FXspawner_C.SetSurvived
	void ExecuteUbergraph_BP_MisComp_FXspawner(int32_t EntryPoint); // Function BP_MisComp_FXspawner.BP_MisComp_FXspawner_C.ExecuteUbergraph_BP_MisComp_FXspawner
};

