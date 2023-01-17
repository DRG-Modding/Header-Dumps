#ifndef UE4SS_SDK_Grenade_Axe_HPP
#define UE4SS_SDK_Grenade_Axe_HPP

class AGrenade_Axe_C : public AITM_Grenade_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDamageComponent* BluntDamage;
    float BladeExtentionDelay;

    void AddGearStateEntries(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Grenade_Axe(int32 EntryPoint);
};

#endif
