#ifndef UE4SS_SDK_Grenade_NeedleSprayer_HPP
#define UE4SS_SDK_Grenade_NeedleSprayer_HPP

class AGrenade_NeedleSprayer_C : public AITM_Grenade_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* BouncySphere;
    class UArrowComponent* Arrow;
    FVector StartRight;
    TSubclassOf<class ABP_Grenade_NeedleSprayer_C> NeedleSprayer;
    bool HasBounced;

    void AddGearStateEntries(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    void ReceiveBeginPlay();
    void BndEvt__Grenade_NeedleSprayer_Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_Grenade_NeedleSprayer(int32 EntryPoint);
};

#endif
