#ifndef UE4SS_SDK_WPN_SoapVacuum_HPP
#define UE4SS_SDK_WPN_SoapVacuum_HPP

class AWPN_SoapVacuum_C : public ASoapVacuumItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoscoCarryingDetailComponent* BoscoCarryingDetail;
    class USceneComponent* VacuumSource;
    class UFSDAudioComponent* GroundImpact;
    class UActorTrackingComponent* ActorTracking;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* TerrainScannerMesh;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UOutlineComponent* outline;
    FVector OriginalRelative;
    bool ObjectiveIsComplete;
    float EffectAlpha;
    class AActor* hologramRef;

    class USceneComponent* GetVacuumSource();
    void ReceiveBeginPlay();
    void OnReceiveEquippedFinished();
    void RecieveUnequipped();
    void BndEvt__PickupUsable_K2Node_ComponentBoundEvent_1_UsableChangedSignature__DelegateSignature(bool CanUse);
    void BndEvt__DroppedCollider_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void RecieveStartUsing();
    void RecieveStopUsing();
    void RecieveEquipped();
    void OnObjectiveChanged(class UObjective* Objective);
    void OnFoamPuddleCollected_Unreliable();
    void StartVacuumEffectTick();
    void ExecuteUbergraph_WPN_SoapVacuum(int32 EntryPoint);
};

#endif
