#ifndef UE4SS_SDK_BP_OldSupplyPod_Salvage_HPP
#define UE4SS_SDK_BP_OldSupplyPod_Salvage_HPP

class ABP_OldSupplyPod_Salvage_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTerrainDetectComponent* TerrainDetect1;
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
    void HandleUsableChanged(class UPrimitiveComponent* useCollider, class USkeletalMeshComponent* DoorMesh, bool CanUse);
    void HealUser(class APlayerCharacter* User);
    void DisableUsable(class UPrimitiveComponent* collider, class USkeletalMeshComponent* DoorMesh);
    void ResupplyUser(class APlayerCharacter* User);
    void UserConstructionScript();
    void BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_5_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_6_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_7_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_8_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void SupplyUsed(class APlayerCharacter* User, class USingleUsableComponent* Target);
    void UsableChanged(bool CanUse, class UPrimitiveComponent* useCollider, class USkeletalMeshComponent* DoorMesh);
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
    void ExecuteUbergraph_BP_OldSupplyPod_Salvage(int32 EntryPoint);
};

#endif
