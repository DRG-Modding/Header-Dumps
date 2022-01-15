#ifndef UE4SS_SDK_ENE_Spider_Exploding_HPP
#define UE4SS_SDK_ENE_Spider_Exploding_HPP

class AENE_Spider_Exploding_C : UENE_SpiderBase_Large_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UDamageComponent* Damage;
    USphereComponent* Sphere;
    UPointLightComponent* Light_BackBody;
    bool Exploded;
    bool IsFleeing_0;
    UParticleSystem* ExplosionParticles;
    bool ExplodeOnDeath;
    bool NearbyExplodersFlee;

    bool GetIsTargetable(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    bool ShouldExplode(TArray<UDamageTag*>& Tags);
    float GetDistanceToLocalPlayer(UCharacter* CallFunc_GetPlayerCharacter_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue);
    void DamageAndCarve(FVector CallFunc_K2_GetActorLocation_ReturnValue);
    void PlayRumbeAndShake(FVector CallFunc_K2_GetActorLocation_ReturnValue);
    void MakeNearbyExplodersFlee(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Square_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, TArray<UENE_Spider_Exploding_C*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_Array_RemoveItem_ReturnValue, UENE_Spider_Exploding_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_PushActiveStatusEffect_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSizeSquared_ReturnValue, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void OnRep_Exploded();
    void Explode();
    void OnExploded();
    void OnMessageAI(FName TriggerName);
    void Play Burn Death();
    void Play Body Death Effects();
    void SetRagdollImpulse(UDamageClass* DamageClass, UFSDPhysicalMaterial* PhysMat);
    void Spawn Headshot Gibs(uint8 DeathType);
    void OnFrozen(AActor* Source);
    void OnUnFrozen();
    void Play Frozen Death();
    void DisableExplosion();
    void StopMontagesOnDeath();
    void ExecuteUbergraph_ENE_Spider_Exploding(int32 EntryPoint, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, UCharacter* CallFunc_GetPlayerCharacter_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsCloseToLocalPlayer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsCloseToLocalPlayer_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_1, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float CallFunc_Montage_Play_ReturnValue, FRotator CallFunc_K2_GetActorRotation_ReturnValue, FName K2Node_Event_triggerName, UDamageClass* K2Node_Event_DamageClass, UFSDPhysicalMaterial* K2Node_Event_PhysMat, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, bool CallFunc_IsInRangeOfLocalPlayer_ReturnValue, bool Temp_bool_IsClosed_Variable_2, uint8 K2Node_Event_DeathType, AActor* K2Node_Event_source, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, AController* CallFunc_GetController_ReturnValue, UAIController* K2Node_DynamicCast_AsAIController, bool K2Node_DynamicCast_bSuccess);
}

#endif
