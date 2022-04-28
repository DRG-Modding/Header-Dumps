#ifndef UE4SS_SDK_Grenade_StickySmall_HPP
#define UE4SS_SDK_Grenade_StickySmall_HPP

class AGrenade_StickySmall_C : public AITM_Grenade_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDamageComponent* BluntDamage;

    void AddGearStateEntries(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Grenade_StickySmall(int32 EntryPoint);
};

#endif
