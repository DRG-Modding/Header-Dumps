#ifndef UE4SS_SDK_Grenade_IFG_HPP
#define UE4SS_SDK_Grenade_IFG_HPP

class AGrenade_IFG_C : public AITM_AOE_Grenade_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight;
    class UParticleSystemComponent* ParticleSystem;
    bool Stick;

    void OnRep_Stick();
    void AddGearStateEntries(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    void EnableWeakeningEffect();
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_Grenade_IFG(int32 EntryPoint);
};

#endif
