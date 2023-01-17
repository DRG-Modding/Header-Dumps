#ifndef UE4SS_SDK_BP_Gem_HPP
#define UE4SS_SDK_BP_Gem_HPP

class ABP_Gem_C : public AGem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTerrainDetectComponent* TerrainDetect;
    class UTerrainDetectComponent* TerrainDetect5;
    class UTerrainDetectComponent* TerrainDetect4;
    class UTerrainDetectComponent* TerrainDetect3;
    class UTerrainDetectComponent* TerrainDetect2;
    class UTerrainDetectComponent* TerrainDetect1;
    class UFirstPersonStaticMeshComponent* FirstPersonStaticMesh;
    class UStaticMeshComponent* TerrainScannerMesh;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UCarriableComponent* Carriable;
    class UBoxComponent* Box;
    class USphereComponent* Sphere;
    int32 Detects;
    class USoundCue* DugFreeCue;
    bool CanTriggerSound;
    class USoundBase* ImpactSound;
    FName ImpactSoundParameter;
    class USoundBase* PickupSound;
    FVector InWorldScale;
    FVector throwForce;
    bool VisibleToTerrainScanner;
    bool ExposeNeighbourhoodToTerrainScanner;
    class UFSDAchievement* CollectedAchievement;
    bool VisibleToScannerAfterDigOut;

    void ReleaseToWorld();
    void SetPickedUp(class APlayerCharacter* Character);
    void PointCleared();
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void BndEvt__TerrainDetect1_K2Node_ComponentBoundEvent_2_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void BndEvt__TerrainDetect2_K2Node_ComponentBoundEvent_3_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void BndEvt__TerrainDetect3_K2Node_ComponentBoundEvent_4_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void BndEvt__TerrainDetect4_K2Node_ComponentBoundEvent_5_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void BndEvt__TerrainDetect5_K2Node_ComponentBoundEvent_6_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void All_PlayDugFree();
    void BndEvt__Box_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__Carriable_K2Node_ComponentBoundEvent_0_CarriableEvent__DelegateSignature();
    void BndEvt__Carriable_K2Node_ComponentBoundEvent_1_CarriableEvent__DelegateSignature();
    void BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool CanUse);
    void Throw(FVector force);
    void ReceiveBeginPlay();
    void Receive_OnDeposited(class APlayerCharacter* fromPlayer, class AActor* toActor);
    void Cheat_ReleaseToWorld();
    void OnAttachChanged(bool Attached);
    void UpdateAttachState(bool Attached);
    void ExecuteUbergraph_BP_Gem(int32 EntryPoint);
};

#endif
