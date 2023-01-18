#ifndef UE4SS_SDK_BP_TransmitterNode_HPP
#define UE4SS_SDK_BP_TransmitterNode_HPP

class ABP_TransmitterNode_C : public ATether
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* TetherConnectionCollider;
    class UOutlineComponent* outline;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UAudioComponent* TetherCreateConnection_Cue;
    class UAudioComponent* TetherIdle_Cue;
    class UTetherComponent* Tether;
    class UStaticMeshComponent* RangeSphere;
    class UTerrainDetectComponent* TerrainDetect;
    FVector throwForce;
    float ConnectionDelay;
    bool Disabled;
    bool HasDeployed;
    float RangeScaleConversion;
    float HackingPower;
    bool KillInitalized;
    class APlayerCharacter* holder;
    FVector OldLocation;
    bool RangeIndicatorVisible;

    void OnRep_RangeIndicatorVisible();
    void InitKill();
    void OnRep_KillInitalized();
    void OnRep_HackingPower();
    void DropAndThrowForce(FVector throwForce);
    void ReceiveBeginPlay();
    void BndEvt__UsableComponent_K2Node_ComponentBoundEvent_3_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void BndEvt__Carry_K2Node_ComponentBoundEvent_0_CarriableEvent__DelegateSignature();
    void BndEvt__Carry_K2Node_ComponentBoundEvent_1_CarriableEvent__DelegateSignature();
    void BndEvt__PysicalCollision_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void Throw(FVector force);
    void TryConnecting();
    void BndEvt__Tether_K2Node_ComponentBoundEvent_5_TetherPowerChanged_Delegate__DelegateSignature(bool hasPower);
    void BndEvt__Tether_K2Node_ComponentBoundEvent_6_TetherConnectionChanged_Deletage__DelegateSignature(class UTetherComponent* frontConnection, class UTetherComponent* backConnection);
    void BndEvt__Tether_K2Node_ComponentBoundEvent_7_TeherMessage_Delegate__DelegateSignature(const FName& Message);
    void destroy();
    void OnDroneDrop();
    void OnDronePickup();
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_8_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void StartDetection();
    void BndEvt__Tether_K2Node_ComponentBoundEvent_2_TetherRangeChanged__DelegateSignature(float range);
    void Cheat_Kill();
    void EnablePhys();
    void ExecuteUbergraph_BP_TransmitterNode(int32 EntryPoint);
};

#endif
