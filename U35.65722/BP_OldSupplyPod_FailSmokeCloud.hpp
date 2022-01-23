#ifndef UE4SS_SDK_BP_OldSupplyPod_FailSmokeCloud_HPP
#define UE4SS_SDK_BP_OldSupplyPod_FailSmokeCloud_HPP

class ABP_OldSupplyPod_FailSmokeCloud_C : public ABP_Damage_Cloud_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStatusEffectsComponent* StatusEffects;
    class UDamageComponent* Damage;
    class USimpleHealthComponent* SimpleHealth;

    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_BP_OldSupplyPod_FailSmokeCloud(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, FVector CallFunc_K2_GetActorLocation_ReturnValue, FRotator CallFunc_K2_GetActorRotation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1);
};

#endif
