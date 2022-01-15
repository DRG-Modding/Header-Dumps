#ifndef UE4SS_SDK_BP_HandheldTablet_UseProgress_HPP
#define UE4SS_SDK_BP_HandheldTablet_UseProgress_HPP

class ABP_HandheldTablet_UseProgress_C : AActor
{
    UFirstPersonWidgetComponent* FirstPersonWidget;
    UFirstPersonStaticMeshComponent* FirstPersonStaticMesh;
    USceneComponent* DefaultRoot;
    UMaterialInstanceDynamic* MonitorMaterial;

    bool Attached(AActor* Parent);
    bool Released();
    void SetBackgroundColor(FLinearColor Value, bool CallFunc_IsValid_ReturnValue);
    void UserConstructionScript(UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
}

#endif
