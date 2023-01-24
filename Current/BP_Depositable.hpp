#ifndef UE4SS_SDK_BP_Depositable_HPP
#define UE4SS_SDK_BP_Depositable_HPP

class ABP_Depositable_C : public AGem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UOutlineComponent* outline;
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

    void Release();
    void SetPickedUp(class APlayerCharacter* Character);
    void All_PlayActivated();
    void BndEvt__Box_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__Carriable_K2Node_ComponentBoundEvent_0_CarriableEvent__DelegateSignature();
    void BndEvt__Carriable_K2Node_ComponentBoundEvent_1_CarriableEvent__DelegateSignature();
    void BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool CanUse);
    void Throw(FVector force);
    void ReceiveBeginPlay();
    void Receive_OnDeposited(class APlayerCharacter* fromPlayer, class AActor* toActor);
    void OnAttachChanged(bool Attached);
    void UpdateAttachState(bool Attached);
    void ExecuteUbergraph_BP_Depositable(int32 EntryPoint);
};

#endif
