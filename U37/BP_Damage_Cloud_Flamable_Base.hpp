#ifndef UE4SS_SDK_BP_Damage_Cloud_Flamable_Base_HPP
#define UE4SS_SDK_BP_Damage_Cloud_Flamable_Base_HPP

class ABP_Damage_Cloud_Flamable_Base_C : public ABP_Damage_Cloud_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDamageComponent* CombustionDamage;
    class UObjectTemperatureComponent* ObjectTemperature;
    class USimpleHealthComponent* SimpleHealth;
    class USoundBase* CombustionSound;
    class UNiagaraSystem* CombustionFX;

    void BndEvt__ObjectTemperature_K2Node_ComponentBoundEvent_0_OnStartBurning__DelegateSignature();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_BP_Damage_Cloud_Flamable_Base(int32 EntryPoint);
};

#endif
