#ifndef UE4SS_SDK_ENE_Spider_Shooter_Queen_HPP
#define UE4SS_SDK_ENE_Spider_Shooter_Queen_HPP

class AENE_Spider_Shooter_Queen_C : public AENE_SpiderBase_Large_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UProjectileAttackComponent* ProjectileAttack;
    class UBP_BurrowComponent_C* BP_BurrowComponent;
    class USimpleArmorDamageComponent* SimpleArmorDamage;
    class USphereComponent* Sphere;
    int32 NumSpawns;

    void OnRagdoll();
    void BndEvt__BP_BurrowComponent_K2Node_ComponentBoundEvent_0_OnUnBurrow__DelegateSignature();
    void OnDeathBase();
    void ExecuteUbergraph_ENE_Spider_Shooter_Queen(int32 EntryPoint);
};

#endif
