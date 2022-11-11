#ifndef UE4SS_SDK_BP_Salvage_Point_Uplink_HPP
#define UE4SS_SDK_BP_Salvage_Point_Uplink_HPP

class ABP_Salvage_Point_Uplink_C : public ABP_Salvage_Point_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTerrainDetectComponent* TerrainDetect3;
    class UTerrainDetectComponent* TerrainDetect2;
    class UTerrainDetectComponent* TerrainDetect1;
    class UTerrainScannerStaticMesh* TerrainScannerStaticMesh;
    class UTerrainDetectComponent* TerrainDetect;
    class UDropToTerrainComponent* DropToTerrain;
    class UOxygenSourceComponent* OxygenSource;
    class UPointLightComponent* PointLight1;
    class UPointLightComponent* PointLight;
    class UPointLightComponent* PointLight2;
    class UStaticMeshComponent* StaticMesh1;
    class UStaticMeshComponent* StaticMesh;
    class UBoxComponent* UplinkCollision;
    class USkeletalMeshComponent* SkeletalMesh;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UAudioComponent* UplinkTriangulation_Cue;
    class USimpleObjectInfoComponent* SimpleObjectInfo;

    void HandlePhotosensitivity();
    void ReceiveBeginPlay();
    void OnDefenseStart();
    void OnDefenseComplete();
    void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_ProgressSignature__DelegateSignature(float Progress);
    void OnDefenseFail();
    void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsableChangedSignature__DelegateSignature(bool CanUse);
    void UpdateTerrainScannerMesh();
    void Cheat_RepairUplink();
    void ExecuteUbergraph_BP_Salvage_Point_Uplink(int32 EntryPoint);
};

#endif
