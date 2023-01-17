#ifndef UE4SS_SDK_BP_MisComp_FXspawner_HPP
#define UE4SS_SDK_BP_MisComp_FXspawner_HPP

class ABP_MisComp_FXspawner_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Volumetric light;
    class USpotLightComponent* Spotlight_Rim;
    class USpotLightComponent* SpotLight;
    class USkeletalMeshComponent* SkeletalMesh;
    class USceneComponent* DefaultSceneRoot;
    class USpotLightComponent* NewVar_0;
    bool Survived;
    class UMaterialInstanceDynamic* DynamicMaterial;
    FLinearColor DefeatColor;

    void UserConstructionScript();
    void SetSurvived(bool Survived);
    void ExecuteUbergraph_BP_MisComp_FXspawner(int32 EntryPoint);
};

#endif
