#ifndef UE4SS_SDK_BP_Salvage_Point_Uplink_HPP
#define UE4SS_SDK_BP_Salvage_Point_Uplink_HPP

class ABP_Salvage_Point_Uplink_C : UBP_Salvage_Point_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTerrainScannerStaticMesh* TerrainScannerStaticMesh;
    UTerrainDetectComponent* TerrainDetect;
    UDropToTerrainComponent* DropToTerrain;
    UOxygenSourceComponent* OxygenSource;
    UPointLightComponent* PointLight1;
    UPointLightComponent* PointLight;
    UPointLightComponent* PointLight2;
    UStaticMeshComponent* StaticMesh1;
    UStaticMeshComponent* StaticMesh;
    UBoxComponent* UplinkCollision;
    USkeletalMeshComponent* SkeletalMesh;
    UPathfinderCollisionComponent* PathfinderCollision;
    UAudioComponent* UplinkTriangulation_Cue;
    USimpleObjectInfoComponent* SimpleObjectInfo;

    void HandlePhotosensitivity(UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_GetPhotosensitiveMode_ReturnValue);
    void ReceiveBeginPlay();
    void OnDefenseStart();
    void OnDefenseComplete();
    void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_ProgressSignature__DelegateSignature(float Progress);
    void OnDefenseFail();
    void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsableChangedSignature__DelegateSignature(bool CanUse);
    void UpdateTerrainScannerMesh();
    void Cheat_RepairUplink();
    void ExecuteUbergraph_BP_Salvage_Point_Uplink(int32 EntryPoint, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool Temp_bool_Variable, UMaterialInterface* Temp_object_Variable, UMaterialInterface* Temp_object_Variable_1, bool CallFunc_HasAuthority_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, float K2Node_ComponentBoundEvent_progress, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, UAPB_Uplink_C* K2Node_DynamicCast_AsAPB_Uplink, bool K2Node_DynamicCast_bSuccess, UAPB_Uplink_C* K2Node_DynamicCast_AsAPB_Uplink_1, bool K2Node_DynamicCast_bSuccess_1, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_2, UAPB_Uplink_C* K2Node_DynamicCast_AsAPB_Uplink_2, bool K2Node_DynamicCast_bSuccess_2, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_GetPhotosensitiveMode_ReturnValue, bool K2Node_ComponentBoundEvent_canUse, UMaterialInterface* K2Node_Select_Default);
}

#endif
