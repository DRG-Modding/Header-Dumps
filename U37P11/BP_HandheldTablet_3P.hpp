#ifndef UE4SS_SDK_BP_HandheldTablet_3P_HPP
#define UE4SS_SDK_BP_HandheldTablet_3P_HPP

class ABP_HandheldTablet_3P_C : public AActor
{
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* DefaultRoot;
    class UMaterialInstanceDynamic* MonitorMaterial;

    bool OnSpawnRelease_Attached(class AActor* Parent);
    bool OnSpawnRelease_Released();
    void SetBackgroundColor(FLinearColor Value);
    void UserConstructionScript();
};

#endif
