#ifndef UE4SS_SDK_BP_OldSupplyPod_FailSmokeCloud_HPP
#define UE4SS_SDK_BP_OldSupplyPod_FailSmokeCloud_HPP

class ABP_OldSupplyPod_FailSmokeCloud_C : ABP_Damage_Cloud_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStatusEffectsComponent* StatusEffects;
    UDamageComponent* Damage;
    USimpleHealthComponent* SimpleHealth;

    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_BP_OldSupplyPod_FailSmokeCloud(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, FVector CallFunc_K2_GetActorLocation_ReturnValue, FRotator CallFunc_K2_GetActorRotation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1);
}

#endif
