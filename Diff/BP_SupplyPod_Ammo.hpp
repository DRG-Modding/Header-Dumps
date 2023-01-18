#ifndef UE4SS_SDK_BP_SupplyPod_Ammo_HPP
#define UE4SS_SDK_BP_SupplyPod_Ammo_HPP

class ABP_SupplyPod_Ammo_C : public ARessuplyPod
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_SupplyDropToTerrainLogic_C* BP_SupplyDropToTerrainLogic;
    class UTerrainDetectComponent* TerrainDetect3;
    class UTerrainDetectComponent* TerrainDetect2;
    class UTerrainDetectComponent* TerrainDetect1;
    class UChildActorComponent* OxygenSound;
    class UChildActorComponent* OxygenTank02;
    class UChildActorComponent* OxygenTank01;
    class UDropToTerrainComponent* DropToTerrain;
    class UStaticMeshComponent* FrontPlane1;
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
    class UAudioComponent* audio;
    class UOutlineComponent* outline;
    class UAutoCarverComponent* AutoCarver;
    class URadarPointComponent* radarPoint;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* SM_DropPod_Hull;
    TMap<class USkeletalMeshComponent*, class UMaterialInstanceDynamic*> DoorMaterials;
    class UParticleSystemComponent* DropParticles;
    class UParticleSystemComponent* DropParticles2;

    void HandlePhotosentitivity();
    void HandleUsableChanged(class UPrimitiveComponent* useCollider, class USkeletalMeshComponent* DoorMesh, bool CanUse);
    void HealUser(class APlayerCharacter* User);
    void DisableUsable(class UPrimitiveComponent* collider, class USkeletalMeshComponent* DoorMesh);
    void ResupplyUser(class APlayerCharacter* User);
    void UserConstructionScript();
    void OnDroppodImpact();
    void OnDropStarted();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool CanUse);
    void BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_2_UsableChangedSignature__DelegateSignature(bool CanUse);
    void BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature(bool CanUse);
    void BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_4_UsableChangedSignature__DelegateSignature(bool CanUse);
    void BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_5_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_6_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_7_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_8_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void OnTunnelBLocked();
    void SupplyUsed(class APlayerCharacter* User, class USingleUsableComponent* Target);
    void UsableChanged(bool CanUse, class UPrimitiveComponent* useCollider, class USkeletalMeshComponent* DoorMesh);
    void ReceiveBeginPlay();
    void BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_10_UserCountChangedDelegate__DelegateSignature(int32 userCount);
    void BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_11_UserCountChangedDelegate__DelegateSignature(int32 userCount);
    void BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_12_UserCountChangedDelegate__DelegateSignature(int32 userCount);
    void BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_13_UserCountChangedDelegate__DelegateSignature(int32 userCount);
    void HandleUserCountChanged(int32 userCount, class USingleUsableComponent* Usable, class USkeletalMeshComponent* Door);
    void ExecuteUbergraph_BP_SupplyPod_Ammo(int32 EntryPoint);
};

#endif
