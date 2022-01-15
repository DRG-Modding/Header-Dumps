#ifndef UE4SS_SDK_BP_MisComp_FXspawner_HPP
#define UE4SS_SDK_BP_MisComp_FXspawner_HPP

class ABP_MisComp_FXspawner_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* Volumetric light;
    USpotLightComponent* Spotlight_Rim;
    USpotLightComponent* SpotLight;
    USkeletalMeshComponent* SkeletalMesh;
    USceneComponent* DefaultSceneRoot;
    USpotLightComponent* NewVar_0;
    bool Survived;
    UMaterialInstanceDynamic* DynamicMaterial;
    FLinearColor DefeatColor;

    void UserConstructionScript(FLinearColor CallFunc_GetLightColor_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue);
    void SetSurvived(bool Survived);
    void ExecuteUbergraph_BP_MisComp_FXspawner(int32 EntryPoint, bool K2Node_CustomEvent_Survived, FLinearColor CallFunc_SelectColor_ReturnValue);
}

#endif
