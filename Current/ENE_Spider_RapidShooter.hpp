#ifndef UE4SS_SDK_ENE_Spider_RapidShooter_HPP
#define UE4SS_SDK_ENE_Spider_RapidShooter_HPP

class AENE_Spider_RapidShooter_C : public AENE_SpiderBase_Large_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWeakpointGlowComponent* WeakpointGlow;
    class UProjectileAttackComponent* ProjectileAttack;
    class UCapsuleComponent* Capsule;
    class UArmorHealthDamageComponent* ArmorHealthDamage;
    class UPointLightComponent* PointLight;
    class UBP_BurrowComponent_C* BP_BurrowComponent;

    void OnRagdoll();
    void BndEvt__BP_BurrowComponent_K2Node_ComponentBoundEvent_0_OnUnBurrow__DelegateSignature();
    void BndEvt__BP_BurrowComponent_K2Node_ComponentBoundEvent_1_OnBurrow__DelegateSignature();
    void OnDeathBase();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_ENE_Spider_RapidShooter(int32 EntryPoint);
};

#endif
