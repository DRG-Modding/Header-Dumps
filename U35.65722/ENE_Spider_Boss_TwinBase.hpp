#ifndef UE4SS_SDK_ENE_Spider_Boss_TwinBase_HPP
#define UE4SS_SDK_ENE_Spider_Boss_TwinBase_HPP

class AENE_Spider_Boss_TwinBase_C : public AENE_Spider_Boss_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* TwinBurrow_Cue;
    class UBP_Meet_Attack_C* BP_Meet_Attack;
    class UBP_BurrowComponent_C* BP_BurrowComponent;
    class UArmorHealthDamageComponent* ArmorHealthDamage;
    class UAlignEnemyComponent* AlignEnemy;
    class UCapsuleComponent* Capsule;
    class UEnemyTemperatureReplicatorComponent* EnemyTemperatureReplicator;
    class UHealthDamageTracker* HealthDamageTracker;
    class UPointLightComponent* Light_BackBody;
    FENE_Spider_Boss_TwinBase_COnArmorDestroyed OnArmorDestroyed;
    void OnArmorDestroyed(float EnrageDuration);
    class AENE_Spider_Boss_TwinBase_C* Twin;
    bool WaitingToMeet;
    float MeetHealthChange;
    bool HasMetSecondTime;
    bool HasMetThirdTime;

    void AddDamageDoneToTwinMap(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class APlayerCharacter*>& CallFunc_Map_Keys_Keys, class APlayerCharacter* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue);
    void TrySelectDeathAnimation(bool WasWeakpoint, int32& AnimationIndex, bool& HasSelectedAnimation);
    bool ShouldExplode(TArray<class UDamageTag*>& Tags);
    float GetEnemyDamageResistance(class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, class UDifficultyManager* CallFunc_GetDifficultyManager_ReturnValue, float CallFunc_GetEnemyDamageResistance_ReturnValue);
    void Grieve(FVector GreeveLocation);
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void MatchHealth();
    void ApplyDR();
    void MeetAndGreet();
    void RemoveDR();
    void GoInvulnerable();
    void GoVulnerable();
    void BndEvt__HealthDamageTracker_K2Node_ComponentBoundEvent_3_DamageSig__DelegateSignature(float Amount);
    void BndEvt__BP_BurrowComponent_K2Node_ComponentBoundEvent_1_OnBurrow__DelegateSignature();
    void BndEvt__BP_BurrowComponent_K2Node_ComponentBoundEvent_0_OnUnBurrow__DelegateSignature();
    void PlayAnimatedDeath(int32 AnimationIndex);
    void OnRagdoll();
    void MatchHealthToMe(float HealthChange);
    void RegrowArmor();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_ENE_Spider_Boss_TwinBase(int32 EntryPoint, FName CallFunc_MakeLiteralName_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_GetRandomReachablePointAtApproximateDistance_outPos, bool CallFunc_GetRandomReachablePointAtApproximateDistance_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FVector CallFunc_GetRandomReachablePointAtApproximateDistance_outPos_1, bool CallFunc_GetRandomReachablePointAtApproximateDistance_ReturnValue_1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, float CallFunc_GetHealthPct_ReturnValue, bool CallFunc_IsAlive_ReturnValue_1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_1, float CallFunc_GetHealthPct_ReturnValue_1, FName CallFunc_MakeLiteralName_ReturnValue_2, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_GetValueAsBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, FVector K2Node_CustomEvent_GreeveLocation, FName CallFunc_MakeLiteralName_ReturnValue_3, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_2, FName CallFunc_MakeLiteralName_ReturnValue_4, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_GetRandomReachablePointAtApproximateDistance_outPos_2, bool CallFunc_GetRandomReachablePointAtApproximateDistance_ReturnValue_2, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, bool CallFunc_IsAlive_ReturnValue_2, bool CallFunc_IsAlive_ReturnValue_3, float CallFunc_GetHealth_ReturnValue, float CallFunc_GetHealth_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Heal_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_GetHealth_ReturnValue_2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Heal_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_3, FName CallFunc_MakeLiteralName_ReturnValue_5, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_4, float CallFunc_GetHealthPct_ReturnValue_2, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_2, int32 Temp_int_Variable, float K2Node_ComponentBoundEvent_Amount, int32 K2Node_Event_AnimationIndex, bool CallFunc_HasAuthority_ReturnValue, float K2Node_CustomEvent_HealthChange, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_3, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, float CallFunc_GetHealthPct_ReturnValue_3, bool CallFunc_Less_FloatFloat_ReturnValue_2, class UAnimMontage* Temp_object_Variable, bool CallFunc_RandomBoolWithWeight_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4, class UAnimMontage* Temp_object_Variable_1, float CallFunc_GetHealthPct_ReturnValue_4, float CallFunc_Subtract_FloatFloat_ReturnValue_2, class UAnimMontage* K2Node_Select_Default, float CallFunc_Abs_ReturnValue_1, float CallFunc_Montage_Play_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsAlive_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_5, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, class APlayerCharacter* CallFunc_FindNearestPlayerCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void OnArmorDestroyed__DelegateSignature(float EnrageDuration);
};

#endif
