#ifndef UE4SS_SDK_BP_Salvage_Point_Uplink_HPP
#define UE4SS_SDK_BP_Salvage_Point_Uplink_HPP

class ABP_Salvage_Point_Uplink_C : public ABP_Salvage_Point_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
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

    void HandlePhotosensitivity(class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_GetPhotosensitiveMode_ReturnValue);
    void ReceiveBeginPlay();
    void OnDefenseStart();
    void OnDefenseComplete();
    void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_ProgressSignature__DelegateSignature(float Progress);
    void OnDefenseFail();
    void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsableChangedSignature__DelegateSignature(bool CanUse);
    void UpdateTerrainScannerMesh();
    void Cheat_RepairUplink();
    void ExecuteUbergraph_BP_Salvage_Point_Uplink(int32 EntryPoint, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, bool CallFunc_HasAuthority_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, float K2Node_ComponentBoundEvent_progress, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, class UAPB_Uplink_C* K2Node_DynamicCast_AsAPB_Uplink, bool K2Node_DynamicCast_bSuccess, class UAPB_Uplink_C* K2Node_DynamicCast_AsAPB_Uplink_1, bool K2Node_DynamicCast_bSuccess_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_2, class UAPB_Uplink_C* K2Node_DynamicCast_AsAPB_Uplink_2, bool K2Node_DynamicCast_bSuccess_2, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_GetPhotosensitiveMode_ReturnValue, bool K2Node_ComponentBoundEvent_canUse, class UMaterialInterface* K2Node_Select_Default);
};

#endif
