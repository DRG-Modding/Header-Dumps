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
    void ExecuteUbergraph_ENE_Spider_Shooter_Queen(int32 EntryPoint, int32 Temp_int_Variable, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_GetHealthPct_ReturnValue, float CallFunc_GetHealthPct_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1);
};

#endif
