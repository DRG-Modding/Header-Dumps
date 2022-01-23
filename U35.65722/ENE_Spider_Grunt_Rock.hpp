#ifndef UE4SS_SDK_ENE_Spider_Grunt_Rock_HPP
#define UE4SS_SDK_ENE_Spider_Grunt_Rock_HPP

class AENE_Spider_Grunt_Rock_C : public AENE_Spider_Grunt_Normal_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    bool GetIsTargetable();
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSigDetailed__DelegateSignature(class UHealthComponent* HealthComponent, float damageAmount, class UDamageClass* DamageClass, class AActor* damageCause, class AController* Instigator, class UFSDPhysicalMaterial* PhysicalMaterial, bool IsRadial, const TArray<class UDamageTag*>& Tags);
    void Play Body Death Effects();
    void ExecuteUbergraph_ENE_Spider_Grunt_Rock(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, class UHealthComponent* K2Node_ComponentBoundEvent_HealthComponent, float K2Node_ComponentBoundEvent_damageAmount, class UDamageClass* K2Node_ComponentBoundEvent_damageClass, class AActor* K2Node_ComponentBoundEvent_damageCause, class AController* K2Node_ComponentBoundEvent_instigator, class UFSDPhysicalMaterial* K2Node_ComponentBoundEvent_physicalMaterial, bool K2Node_ComponentBoundEvent_isRadial, const TArray<class UDamageTag*>& K2Node_ComponentBoundEvent_tags, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue);
};

#endif
