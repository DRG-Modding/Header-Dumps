#ifndef UE4SS_SDK_ENE_Spider_Grunt_Rock_HPP
#define UE4SS_SDK_ENE_Spider_Grunt_Rock_HPP

class AENE_Spider_Grunt_Rock_C : UENE_Spider_Grunt_Normal_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    bool GetIsTargetable();
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSigDetailed__DelegateSignature(UHealthComponent* HealthComponent, float damageAmount, UDamageClass* DamageClass, AActor* damageCause, AController* Instigator, UFSDPhysicalMaterial* PhysicalMaterial, bool IsRadial, const TArray<UDamageTag*>& Tags);
    void Play Body Death Effects();
    void ExecuteUbergraph_ENE_Spider_Grunt_Rock(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, UHealthComponent* K2Node_ComponentBoundEvent_HealthComponent, float K2Node_ComponentBoundEvent_damageAmount, UDamageClass* K2Node_ComponentBoundEvent_damageClass, AActor* K2Node_ComponentBoundEvent_damageCause, AController* K2Node_ComponentBoundEvent_instigator, UFSDPhysicalMaterial* K2Node_ComponentBoundEvent_physicalMaterial, bool K2Node_ComponentBoundEvent_isRadial, const TArray<UDamageTag*>& K2Node_ComponentBoundEvent_tags, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue);
}

#endif