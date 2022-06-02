#ifndef UE4SS_SDK_BP_HandheldTablet_Off_HPP
#define UE4SS_SDK_BP_HandheldTablet_Off_HPP

class ABP_HandheldTablet_Off_C : public AActor
{
    class UFirstPersonStaticMeshComponent* FirstPersonStaticMesh;
    class USceneComponent* DefaultRoot;
    class UMaterialInstanceDynamic* MonitorMaterial;

    bool OnSpawnRelease_Attached(class AActor* Parent);
    bool OnSpawnRelease_Released();
    void SetBackgroundColor(FLinearColor Value);
    void UserConstructionScript();
};

#endif
