#ifndef UE4SS_SDK_ENE_Spider_Boss_Heavy_HPP
#define UE4SS_SDK_ENE_Spider_Boss_Heavy_HPP

class AENE_Spider_Boss_Heavy_C : public AENE_Spider_Boss_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCapsuleComponent* Capsule;
    class UMeleeAttackComponent* CarveAttack;
    class UWeakpointGlowComponent* WeakpointGlow;
    class UCapsuleComponent* Weakspot_C;
    class UCapsuleComponent* Weakspot_L;
    class UCapsuleComponent* Weakspot_R;
    class UProjectileAttackComponent* ProjectileFireball;
    class UMeleeAttackComponent* MeleeAttack1;
    class UDamageComponent* SpecialAttackAoE;
    class UEnemyTemperatureReplicatorComponent* EnemyTemperatureReplicator;
    class UHealthDamageTracker* HealthDamageTracker;
    class UDestructibleSubHealthComponent* WeakspotHealth_L;
    class USpawnActorWithDebrisPosComponent* SpecialAttackSpawn;
    class UDestructibleSubHealthComponent* WeakspotHealth_C;
    class UDestructibleSubHealthComponent* WeakspotHealth_R;
    class UAlignEnemyComponent* AlignEnemy;
    TEnumAsByte<Spider_Boss_Heavy_State::Type> HeavyTankState;
    class UNiagaraComponent* WhirlwindParticles;

    bool GetIsTargetable(bool CallFunc_IsAlive_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void SetupWeakspotGlow(int32 CallFunc_SetUpWeakPointGlowOnMesh_ReturnValue, int32 CallFunc_SetUpWeakPointGlowOnMesh_ReturnValue_1, int32 CallFunc_SetUpWeakPointGlowOnMesh_ReturnValue_2, int32 CallFunc_SetUpWeakPointGlowOnMesh_ReturnValue_3);
    void TrySelectDeathAnimation(bool WasWeakpoint, int32& AnimationIndex, bool& HasSelectedAnimation, FVector CallFunc_GetActorUpVector_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
    void SetArmorMeshState(bool ArmorOpen, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UABP_Spider_Boss_Heavy_C* K2Node_DynamicCast_AsABP_Spider_Boss_Heavy, bool K2Node_DynamicCast_bSuccess);
    bool ShouldExplode(TArray<class UDamageTag*>& Tags);
    void OnRep_HeavyTankState(class UPhysicsAsset* Temp_object_Variable, class UPhysicsAsset* Temp_object_Variable_1, class UPhysicsAsset* Temp_object_Variable_2, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, TEnumAsByte<Spider_Boss_Heavy_State::Type> Temp_byte_Variable, bool CallFunc_HasAuthority_ReturnValue_3, class AFSDAIController* CallFunc_GetFSDAIController_ReturnValue, class AAIC_Spider_Boss_Heavy_C* K2Node_DynamicCast_AsAIC_Spider_Boss_Heavy, bool K2Node_DynamicCast_bSuccess, bool CallFunc_PopActiveStatusEffect_ReturnValue, bool CallFunc_PushActiveStatusEffect_ReturnValue, class UPhysicsAsset* K2Node_Select_Default, bool K2Node_SwitchEnum_CmpSuccess);
    bool IsArmorIntact(bool CallFunc_IsAlive_ReturnValue, bool CallFunc_IsAlive_ReturnValue_1, bool CallFunc_IsAlive_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
    void SetWeakpointVisibility(bool Visible, class UDestructibleSubHealthComponent* Health, FRotator CallFunc_K2_GetComponentRotation_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, class UPrimitiveComponent* K2Node_DynamicCast_AsPrimitive_Component, bool K2Node_DynamicCast_bSuccess, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue);
    void ReceiveBeginPlay();
    void BndEvt__DestructibleSubHealth_K2Node_ComponentBoundEvent_0_SubHealthDestroyed__DelegateSignature(class UDestructibleSubHealthComponent* subHealth);
    void BndEvt__DestructibleSubHealth1_K2Node_ComponentBoundEvent_1_SubHealthDestroyed__DelegateSignature(class UDestructibleSubHealthComponent* subHealth);
    void StartSpecialAttack();
    void ForceVulnerable();
    void BndEvt__DestructibleSubHealth2_K2Node_ComponentBoundEvent_2_SubHealthDestroyed__DelegateSignature(class UDestructibleSubHealthComponent* subHealth);
    void OnMessageAI(FName TriggerName);
    void OnRagdoll();
    void BndEvt__HealthDamageTracker_K2Node_ComponentBoundEvent_3_DamageSig__DelegateSignature(float Amount);
    void GrowWeakpoints();
    void PlayAnimatedDeath(int32 AnimationIndex);
    void ForceEnraged();
    void OnDeathBase();
    void SpawnProjectile(TSubclassOf<class AActor> Actor, const FTransform& Transform);
    void SetPhysicsAsset(class UPhysicsAsset* NewPhysicsAsset);
    void ExecuteUbergraph_ENE_Spider_Boss_Heavy(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, FExecuteUbergraph_ENE_Spider_Boss_HeavyK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UDestructibleSubHealthComponent* K2Node_ComponentBoundEvent_subHealth_2, class UDestructibleSubHealthComponent* K2Node_ComponentBoundEvent_subHealth_1, class AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, const TArray<FVector>& K2Node_MakeArray_Array, bool CallFunc_PlaceActorsWithCallback_ReturnValue, bool CallFunc_IsArmorIntact_ReturnValue, class UDestructibleSubHealthComponent* K2Node_ComponentBoundEvent_subHealth, FName K2Node_Event_triggerName, bool K2Node_SwitchName_CmpSuccess, float K2Node_ComponentBoundEvent_Amount, float CallFunc_GetHealthPct_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UABP_Spider_Boss_Heavy_C* K2Node_DynamicCast_AsABP_Spider_Boss_Heavy, bool K2Node_DynamicCast_bSuccess, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, class UABP_Spider_Boss_Heavy_C* K2Node_DynamicCast_AsABP_Spider_Boss_Heavy_1, bool K2Node_DynamicCast_bSuccess_1, int32 K2Node_Event_AnimationIndex, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_2, class USpiderAnimInstance* K2Node_DynamicCast_AsSpider_Anim_Instance, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class UAnimSequence* Temp_object_Variable, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAnimSequence* Temp_object_Variable_1, int32 Temp_int_Variable, TSubclassOf<class AActor> K2Node_CustomEvent_actor, const FTransform K2Node_CustomEvent_transform, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, class UAnimSequence* K2Node_Select_Default, TSubclassOf<class AProjectile> K2Node_ClassDynamicCast_AsProjectile, bool K2Node_ClassDynamicCast_bSuccess, class AProjectileBase* CallFunc_SpawnProjectile_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, class UPhysicsAsset* K2Node_CustomEvent_NewPhysicsAsset);
};

#endif
