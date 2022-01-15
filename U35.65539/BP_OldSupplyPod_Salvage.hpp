#ifndef UE4SS_SDK_BP_OldSupplyPod_Salvage_HPP
#define UE4SS_SDK_BP_OldSupplyPod_Salvage_HPP

class ABP_OldSupplyPod_Salvage_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBoxComponent* UseBox_Fixing;
    UDamageComponent* Damage;
    UTerrainPlacementComponent* terrainPlacement;
    USingleUsableComponent* SingleUsable_FixPod;
    UStaticMeshComponent* SM_Prim_Cylinder_08sides;
    ULevelGenerationCarverComponent* LevelGenerationCarver_Tunnel;
    UDropToTerrainComponent* DropToTerrain;
    UStaticMeshComponent* FrontPlane1;
    UStaticMeshComponent* SM_Screen_006;
    UParticleSystemComponent* P_GasCanister_air_Mule2;
    UStaticMeshComponent* SM_GasCanister1;
    UParticleSystemComponent* P_GasCanister_air_Mule1;
    UAudioComponent* Oxygen_Leak;
    UStaticMeshComponent* FrontPlane;
    UStaticMeshComponent* SM_Screen_005;
    UStaticMeshComponent* SM_GasCanister;
    UOxygenSourceComponent* OxygenSource;
    UTerrainDetectComponent* TerrainDetect;
    UPathfinderCollisionComponent* PathfinderCollision;
    UActorTrackingComponent* ActorTracking;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    UBoxComponent* Box;
    UCapsuleComponent* UseCapsule4;
    UCapsuleComponent* UseCapsule3;
    UCapsuleComponent* UseCapsule2;
    UCapsuleComponent* UseCapsule1;
    USingleUsableComponent* SingleUsable3;
    USingleUsableComponent* SingleUsable4;
    USkeletalMeshComponent* SupplyPod_Door_4;
    USkeletalMeshComponent* SupplyPod_Door_3;
    USkeletalMeshComponent* SupplyPod_Door_2;
    USkeletalMeshComponent* SupplyPod_Door_1;
    USkeletalMeshComponent* SK_DropPod_Drill;
    USingleUsableComponent* SingleUsable1;
    USingleUsableComponent* SingleUsable2;
    UOutlineComponent* outline;
    URadarPointComponent* radarPoint;
    UPointLightComponent* PointLight;
    UStaticMeshComponent* SM_DropPod_Hull;
    TMap<USkeletalMeshComponent*, UMaterialInstanceDynamic*> DoorMaterials;
    float ChanceOfWorking;
    int32 NumFailCycles;
    bool RepairFailed;
    bool AllGood;

    void OnRep_AllGood();
    void OnRep_RepairFailed();
    void HandleUsableChanged(UPrimitiveComponent* UseCollider, USkeletalMeshComponent* DoorMesh, bool CanUse);
    void HealUser(UPlayerCharacter* User);
    void DisableUsable(UPrimitiveComponent* collider, USkeletalMeshComponent* DoorMesh, bool CallFunc_IsValid_ReturnValue, UMaterialInstanceDynamic* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
    void ResupplyUser(UPlayerCharacter* User);
    void UserConstructionScript(UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_3);
    void BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_5_UsedBySignature__DelegateSignature(UPlayerCharacter* User, EInputKeys Key);
    void BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_6_UsedBySignature__DelegateSignature(UPlayerCharacter* User, EInputKeys Key);
    void BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_7_UsedBySignature__DelegateSignature(UPlayerCharacter* User, EInputKeys Key);
    void BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_8_UsedBySignature__DelegateSignature(UPlayerCharacter* User, EInputKeys Key);
    void SupplyUsed(UPlayerCharacter* User, USingleUsableComponent* Target);
    void UsableChanged(bool CanUse, UPrimitiveComponent* UseCollider, USkeletalMeshComponent* DoorMesh);
    void BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_4_UsableChangedSignature__DelegateSignature(bool CanUse);
    void BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature(bool CanUse);
    void BndEvt__OxygenSource_K2Node_ComponentBoundEvent_9_OxygenActiveDelegate__DelegateSignature(bool IsActive);
    void BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_2_UsableChangedSignature__DelegateSignature(bool CanUse);
    void BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool CanUse);
    void ReceiveBeginPlay();
    void BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_10_UserCountChangedDelegate__DelegateSignature(int32 userCount);
    void BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_11_UserCountChangedDelegate__DelegateSignature(int32 userCount);
    void BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_12_UserCountChangedDelegate__DelegateSignature(int32 userCount);
    void BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_13_UserCountChangedDelegate__DelegateSignature(int32 userCount);
    void HandleUserCountChanged(int32 userCount, USingleUsableComponent* Usable, USkeletalMeshComponent* Door);
    void BndEvt__DropToTerrain_K2Node_ComponentBoundEvent_14_OnIsFallingToTerrainChanged__DelegateSignature(bool IsFalling);
    void OnDroppodImpact_1();
    void OnTunnelBLocked_1();
    void BndEvt__SingleUsable_FixPod_K2Node_ComponentBoundEvent_1_ProgressSignature__DelegateSignature(float Progress);
    void OnSupplyPodFixed();
    void ExecuteUbergraph_BP_OldSupplyPod_Salvage(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, const FTransform CallFunc_GetTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, UPlayerCharacter* K2Node_CustomEvent_User, USingleUsableComponent* K2Node_CustomEvent_Target, ABP_TunnelBlocker_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_CustomEvent_canUse, UPrimitiveComponent* K2Node_CustomEvent_UseCollider, USkeletalMeshComponent* K2Node_CustomEvent_DoorMesh, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, bool K2Node_ComponentBoundEvent_canUse_3, bool K2Node_ComponentBoundEvent_canUse_2, bool CallFunc_HasAuthority_ReturnValue, bool K2Node_ComponentBoundEvent_isActive, bool K2Node_ComponentBoundEvent_canUse_1, bool K2Node_ComponentBoundEvent_canUse, bool CallFunc_HasAuthority_ReturnValue_1, int32 K2Node_ComponentBoundEvent_userCount_3, int32 K2Node_ComponentBoundEvent_userCount_2, int32 K2Node_ComponentBoundEvent_userCount_1, int32 K2Node_ComponentBoundEvent_userCount, int32 K2Node_CustomEvent_UserCount, USingleUsableComponent* K2Node_CustomEvent_Usable, USkeletalMeshComponent* K2Node_CustomEvent_Door, bool CallFunc_EqualEqual_IntInt_ReturnValue, UMaterialInstanceDynamic* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool K2Node_ComponentBoundEvent_IsFalling, UPlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, float K2Node_ComponentBoundEvent_progress, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, UPlayerCharacter* K2Node_ComponentBoundEvent_user_1, EInputKeys K2Node_ComponentBoundEvent_key_1, UPlayerCharacter* K2Node_ComponentBoundEvent_user_2, EInputKeys K2Node_ComponentBoundEvent_key_2, UPlayerCharacter* K2Node_ComponentBoundEvent_user_3, EInputKeys K2Node_ComponentBoundEvent_key_3, int32 CallFunc_Add_IntInt_ReturnValue, const FTransform CallFunc_GetTransform_ReturnValue_1, int32 Temp_int_Variable, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, UBP_OldSupplyPod_FailSmokeCloud_C* CallFunc_FinishSpawningActor_ReturnValue_1, AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue, AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue_1, float CallFunc_RandomFloatInRangeFromStream_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2);
}

#endif
