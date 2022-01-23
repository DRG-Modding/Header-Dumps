#ifndef UE4SS_SDK_BP_OldSupplyPod_Salvage_HPP
#define UE4SS_SDK_BP_OldSupplyPod_Salvage_HPP

class ABP_OldSupplyPod_Salvage_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* UseBox_Fixing;
    class UDamageComponent* Damage;
    class UTerrainPlacementComponent* terrainPlacement;
    class USingleUsableComponent* SingleUsable_FixPod;
    class UStaticMeshComponent* SM_Prim_Cylinder_08sides;
    class ULevelGenerationCarverComponent* LevelGenerationCarver_Tunnel;
    class UDropToTerrainComponent* DropToTerrain;
    class UStaticMeshComponent* FrontPlane1;
    class UStaticMeshComponent* SM_Screen_006;
    class UParticleSystemComponent* P_GasCanister_air_Mule2;
    class UStaticMeshComponent* SM_GasCanister1;
    class UParticleSystemComponent* P_GasCanister_air_Mule1;
    class UAudioComponent* Oxygen_Leak;
    class UStaticMeshComponent* FrontPlane;
    class UStaticMeshComponent* SM_Screen_005;
    class UStaticMeshComponent* SM_GasCanister;
    class UOxygenSourceComponent* OxygenSource;
    class UTerrainDetectComponent* TerrainDetect;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UActorTrackingComponent* ActorTracking;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UBoxComponent* Box;
    class UCapsuleComponent* UseCapsule4;
    class UCapsuleComponent* UseCapsule3;
    class UCapsuleComponent* UseCapsule2;
    class UCapsuleComponent* UseCapsule1;
    class USingleUsableComponent* SingleUsable3;
    class USingleUsableComponent* SingleUsable4;
    class USkeletalMeshComponent* SupplyPod_Door_4;
    class USkeletalMeshComponent* SupplyPod_Door_3;
    class USkeletalMeshComponent* SupplyPod_Door_2;
    class USkeletalMeshComponent* SupplyPod_Door_1;
    class USkeletalMeshComponent* SK_DropPod_Drill;
    class USingleUsableComponent* SingleUsable1;
    class USingleUsableComponent* SingleUsable2;
    class UOutlineComponent* outline;
    class URadarPointComponent* radarPoint;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* SM_DropPod_Hull;
    TMap<class USkeletalMeshComponent*, class UMaterialInstanceDynamic*> DoorMaterials;
    float ChanceOfWorking;
    int32 NumFailCycles;
    bool RepairFailed;
    bool AllGood;

    void OnRep_AllGood();
    void OnRep_RepairFailed();
    void HandleUsableChanged(class UPrimitiveComponent* UseCollider, class USkeletalMeshComponent* DoorMesh, bool CanUse);
    void HealUser(class APlayerCharacter* User);
    void DisableUsable(class UPrimitiveComponent* collider, class USkeletalMeshComponent* DoorMesh, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
    void ResupplyUser(class APlayerCharacter* User);
    void UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_3);
    void BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_5_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_6_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_7_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_8_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void SupplyUsed(class APlayerCharacter* User, class USingleUsableComponent* Target);
    void UsableChanged(bool CanUse, class UPrimitiveComponent* UseCollider, class USkeletalMeshComponent* DoorMesh);
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
    void HandleUserCountChanged(int32 userCount, class USingleUsableComponent* Usable, class USkeletalMeshComponent* Door);
    void BndEvt__DropToTerrain_K2Node_ComponentBoundEvent_14_OnIsFallingToTerrainChanged__DelegateSignature(bool IsFalling);
    void OnDroppodImpact_1();
    void OnTunnelBLocked_1();
    void BndEvt__SingleUsable_FixPod_K2Node_ComponentBoundEvent_1_ProgressSignature__DelegateSignature(float Progress);
    void OnSupplyPodFixed();
    void ExecuteUbergraph_BP_OldSupplyPod_Salvage(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, const FTransform CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class APlayerCharacter* K2Node_CustomEvent_User, class USingleUsableComponent* K2Node_CustomEvent_Target, class ABP_TunnelBlocker_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_CustomEvent_canUse, class UPrimitiveComponent* K2Node_CustomEvent_UseCollider, class USkeletalMeshComponent* K2Node_CustomEvent_DoorMesh, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, bool K2Node_ComponentBoundEvent_canUse_3, bool K2Node_ComponentBoundEvent_canUse_2, bool CallFunc_HasAuthority_ReturnValue, bool K2Node_ComponentBoundEvent_isActive, bool K2Node_ComponentBoundEvent_canUse_1, bool K2Node_ComponentBoundEvent_canUse, bool CallFunc_HasAuthority_ReturnValue_1, int32 K2Node_ComponentBoundEvent_userCount_3, int32 K2Node_ComponentBoundEvent_userCount_2, int32 K2Node_ComponentBoundEvent_userCount_1, int32 K2Node_ComponentBoundEvent_userCount, int32 K2Node_CustomEvent_UserCount, class USingleUsableComponent* K2Node_CustomEvent_Usable, class USkeletalMeshComponent* K2Node_CustomEvent_Door, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool K2Node_ComponentBoundEvent_IsFalling, class APlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, float K2Node_ComponentBoundEvent_progress, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class APlayerCharacter* K2Node_ComponentBoundEvent_user_1, EInputKeys K2Node_ComponentBoundEvent_key_1, class APlayerCharacter* K2Node_ComponentBoundEvent_user_2, EInputKeys K2Node_ComponentBoundEvent_key_2, class APlayerCharacter* K2Node_ComponentBoundEvent_user_3, EInputKeys K2Node_ComponentBoundEvent_key_3, int32 CallFunc_Add_IntInt_ReturnValue, const FTransform CallFunc_GetTransform_ReturnValue_1, int32 Temp_int_Variable, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class ABP_OldSupplyPod_FailSmokeCloud_C* CallFunc_FinishSpawningActor_ReturnValue_1, class AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue, class AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue_1, float CallFunc_RandomFloatInRangeFromStream_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2);
};

#endif
