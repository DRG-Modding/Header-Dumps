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
    void ExecuteUbergraph_BP_Damage_Cloud_Flamable_Base(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, FVector CallFunc_K2_GetActorLocation_ReturnValue, FRotator CallFunc_K2_GetActorRotation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1);
};

#endif
