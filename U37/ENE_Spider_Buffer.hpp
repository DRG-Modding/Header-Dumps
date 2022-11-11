#ifndef UE4SS_SDK_ENE_Spider_Buffer_HPP
#define UE4SS_SDK_ENE_Spider_Buffer_HPP

class AENE_Spider_Buffer_C : public AENE_SpiderBase_Large_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWeakpointGlowComponent* WeakpointGlow;
    class UCapsuleComponent* Capsule;
    class UCapsuleComponent* Capsule1;
    class UPointLightComponent* PointLight;
    class UAudioComponent* BuffingLoop;
    class UEnemyBufferComponent* EnemyBuffer;
    class USimpleArmorDamageComponent* SimpleArmorDamage;

    void HandleWeapointDeath(FDamageData& DamageData, TArray<class UDamageTag*>& Tags);
    void OnRagdoll();
    void OnFrozen(class AActor* Source);
    void OnUnFrozen();
    void BndEvt__EnemyBuffer_K2Node_ComponentBoundEvent_1_BuffingChangedDelegate__DelegateSignature(bool boolValue);
    void Spawn Headshot Gibs(TEnumAsByte<Spider_DeathType::Type> DeathType);
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_ENE_Spider_Buffer(int32 EntryPoint);
};

#endif
