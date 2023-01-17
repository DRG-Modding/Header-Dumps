#ifndef UE4SS_SDK_PRJ_PlatformMaker_HPP
#define UE4SS_SDK_PRJ_PlatformMaker_HPP

class APRJ_PlatformMaker_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Projectile;
    float Timeline_0_NewTrack_1_6344ADF74893FE5BE85A6CA2C1A57EE3;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_6344ADF74893FE5BE85A6CA2C1A57EE3;
    class UTimelineComponent* Timeline_0;
    float Diameter;
    float PlatformCreationDelay (seconds);
    class UStaticMesh* PlatformCarverMesh;
    FVector PlatformScale;
    class UTerrainMaterial* FoamMaterial;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ReceiveBeginPlay();
    void Set Carver mesh(class UStaticMesh* Mesh to use);
    void SetCarverMeshScale(FVector Scale);
    void UseLessFallDamageMaterial();
    void UseBugRepellantMaterial();
    void UseFallDmgAndBugRepellant();
    void ExecuteUbergraph_PRJ_PlatformMaker(int32 EntryPoint);
};

#endif
