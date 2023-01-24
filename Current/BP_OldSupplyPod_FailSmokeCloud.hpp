#ifndef UE4SS_SDK_BP_OldSupplyPod_FailSmokeCloud_HPP
#define UE4SS_SDK_BP_OldSupplyPod_FailSmokeCloud_HPP

class ABP_OldSupplyPod_FailSmokeCloud_C : public ABP_Damage_Cloud_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStatusEffectsComponent* StatusEffects;
    class UDamageComponent* Damage;
    class USimpleHealthComponent* SimpleHealth;

    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_BP_OldSupplyPod_FailSmokeCloud(int32 EntryPoint);
};

#endif
