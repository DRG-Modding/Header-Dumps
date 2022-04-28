#ifndef UE4SS_SDK_Grenade_Lure_HPP
#define UE4SS_SDK_Grenade_Lure_HPP

class AGrenade_Lure_C : public AITM_Grenade_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void AddGearStateEntries(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    void OnExploded();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void DoCustomExplosion();
    void ExecuteUbergraph_Grenade_Lure(int32 EntryPoint);
};

#endif
