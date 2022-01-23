#ifndef UE4SS_SDK_ENE_Mactera_Shooter_Base_HPP
#define UE4SS_SDK_ENE_Mactera_Shooter_Base_HPP

class AENE_Mactera_Shooter_Base_C : public AAFlyingBug
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDashPoints* DashPoints;
    class UWeakpointGlowComponent* WeakpointGlowComponent;
    TEnumAsByte<MacteraDeathTypes::Type> DeathType;
    class USoundCue* deathSound;

    void Death_Explode(bool CallFunc_HasAuthority_ReturnValue);
    bool ShouldExplode(TArray<class UDamageTag*>& Tagsconst class UDamageTag* Temp_object_Variable, float CallFunc_GetStatValue_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_IsMutatorActive_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
    void Death_Normal(class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue);
    void Death_Weakpoint(class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue);
    void OnRep_DeathType(bool K2Node_SwitchEnum_CmpSuccess);
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSigDetailed__DelegateSignature(class UHealthComponent* HealthComponent, float damageAmount, class UDamageClass* DamageClass, class AActor* damageCause, class AController* Instigator, class UFSDPhysicalMaterial* PhysicalMaterial, bool IsRadial, const TArray<class UDamageTag*>& Tags);
    void OnMessageAI(FName TriggerName);
    void Receive_Alerted();
    void All_PlayAlertedSound();
    void OnFrozen(class AActor* Source);
    void MakeElite();
    void Death_Corrosive();
    void FadeMaterials();
    void ExecuteUbergraph_ENE_Mactera_Shooter_Base(int32 EntryPoint, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UHealthComponent* K2Node_ComponentBoundEvent_HealthComponent, float K2Node_ComponentBoundEvent_damageAmount, class UDamageClass* K2Node_ComponentBoundEvent_damageClass, class AActor* K2Node_ComponentBoundEvent_damageCause, class AController* K2Node_ComponentBoundEvent_instigator, class UFSDPhysicalMaterial* K2Node_ComponentBoundEvent_physicalMaterial, bool K2Node_ComponentBoundEvent_isRadial, const TArray<class UDamageTag*>& K2Node_ComponentBoundEvent_tags, FName K2Node_Event_triggerName, bool CallFunc_IsCorrosiveDeath_ReturnValue, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_ShouldExplode_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AActor* K2Node_Event_source, class AController* CallFunc_GetController_ReturnValue, class AFSDAIController* K2Node_DynamicCast_AsFSDAIController, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetNumMaterials_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
};

#endif
