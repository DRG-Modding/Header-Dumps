#ifndef UE4SS_SDK_BP_HandheldTablet_Off_HPP
#define UE4SS_SDK_BP_HandheldTablet_Off_HPP

class ABP_HandheldTablet_Off_C : public AActor
{
    class UFirstPersonStaticMeshComponent* FirstPersonStaticMesh;
    class USceneComponent* DefaultRoot;
    class UMaterialInstanceDynamic* MonitorMaterial;

    bool Attached(class AActor* Parent);
    bool Released();
    void SetBackgroundColor(FLinearColor Value, bool CallFunc_IsValid_ReturnValue);
    void UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
};

#endif
