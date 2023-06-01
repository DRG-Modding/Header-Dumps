#ifndef UE4SS_SDK_WPN_PlagueSoaper_HPP
#define UE4SS_SDK_WPN_PlagueSoaper_HPP

class AWPN_PlagueSoaper_C : public APlagueSoaperItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoscoCarryingDetailComponent* BoscoCarryingDetail;
    class UNiagaraComponent* Niagara3P;
    class UFSDAudioComponent* GroundImpact;
    class UActorTrackingComponent* ActorTracking;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* TerrainScannerMesh;
    class UNiagaraComponent* Niagara;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UOutlineComponent* outline;
    bool ObjectiveIsComplete;
    class AActor* hologramRef;

    void ReceiveBeginPlay();
    void BndEvt__PickupUsable_K2Node_ComponentBoundEvent_1_UsableChangedSignature__DelegateSignature(bool CanUse);
    void BndEvt__DroppedCollider_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void RecieveStartUsing();
    void RecieveStopUsing();
    void OnObjectiveChanged(class UObjective* Objective);
    void ExecuteUbergraph_WPN_PlagueSoaper(int32 EntryPoint);
};

#endif
