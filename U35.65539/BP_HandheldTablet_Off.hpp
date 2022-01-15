#ifndef UE4SS_SDK_BP_HandheldTablet_Off_HPP
#define UE4SS_SDK_BP_HandheldTablet_Off_HPP

class ABP_HandheldTablet_Off_C : AActor
{
    UFirstPersonStaticMeshComponent* FirstPersonStaticMesh;
    USceneComponent* DefaultRoot;
    UMaterialInstanceDynamic* MonitorMaterial;

    bool Attached(AActor* Parent);
    bool Released();
    void SetBackgroundColor(FLinearColor Value, bool CallFunc_IsValid_ReturnValue);
    void UserConstructionScript(UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
}

#endif
