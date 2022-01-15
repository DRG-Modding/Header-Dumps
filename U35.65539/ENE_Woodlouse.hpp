#ifndef UE4SS_SDK_ENE_Woodlouse_HPP
#define UE4SS_SDK_ENE_Woodlouse_HPP

class AENE_Woodlouse_C : UWoodLouse
{
    FPointerToUberGraphFrame UberGraphFrame;
    USphereComponent* ProjectileHit;
    UOutlineComponent* outline;
    UEnemyComponent* enemy;
    UPawnStatsComponent* PawnStats;
    UArmorHealthDamageComponent* ArmorHealthDamage;
    UParticleSystemComponent* ParticleSystem;
    FVector_NetQuantize RagdollImpact;
    USoundCue* deathSound;
    USoundCue* FoldSound;
    USoundCue* UnfoldSound;

    void OnRep_RagdollImpact(FName CallFunc_GetBoneName_ReturnValue);
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void OnMessageAI(FName TriggerName);
    void Fizzle();
    void SwitchedState(EWoodLouseState CurrentState);
    void BumpedTarget();
    void ChangePhysicsAsset();
    void IncrementCommunityGoal();
    void ExecuteUbergraph_ENE_Woodlouse(int32 EntryPoint, FVector CallFunc_GetActorUpVector_ReturnValue, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, FName K2Node_Event_triggerName, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_HasAuthority_ReturnValue, AController* CallFunc_GetController_ReturnValue, UAIController* K2Node_DynamicCast_AsAIController, bool K2Node_DynamicCast_bSuccess, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_2, EWoodLouseState K2Node_Event_currentState, bool K2Node_SwitchEnum_CmpSuccess, UGameData* CallFunc_GetFSDGameData_ReturnValue, UCommunityGoal* CallFunc_GetGoal_ReturnValue, UGoogleAnalyticsWrapper* CallFunc_GetGoogleAnalyticsWrapper_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Normal_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector_NetQuantize CallFunc_VectorToNetQuantize_ReturnValue);
}

#endif
