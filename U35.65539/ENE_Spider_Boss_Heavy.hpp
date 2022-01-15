#ifndef UE4SS_SDK_ENE_Spider_Boss_Heavy_HPP
#define UE4SS_SDK_ENE_Spider_Boss_Heavy_HPP

class AENE_Spider_Boss_Heavy_C : UENE_Spider_Boss_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UCapsuleComponent* Capsule;
    UMeleeAttackComponent* CarveAttack;
    UWeakpointGlowComponent* WeakpointGlow;
    UCapsuleComponent* Weakspot_C;
    UCapsuleComponent* Weakspot_L;
    UCapsuleComponent* Weakspot_R;
    UProjectileAttackComponent* ProjectileFireball;
    UMeleeAttackComponent* MeleeAttack1;
    UDamageComponent* SpecialAttackAoE;
    UEnemyTemperatureReplicatorComponent* EnemyTemperatureReplicator;
    UHealthDamageTracker* HealthDamageTracker;
    UDestructibleSubHealthComponent* WeakspotHealth_L;
    USpawnActorWithDebrisPosComponent* SpecialAttackSpawn;
    UDestructibleSubHealthComponent* WeakspotHealth_C;
    UDestructibleSubHealthComponent* WeakspotHealth_R;
    UAlignEnemyComponent* AlignEnemy;
    TEnumAsByte<Spider_Boss_Heavy_State::Type> HeavyTankState;
    UNiagaraComponent* WhirlwindParticles;

    bool GetIsTargetable(bool CallFunc_IsAlive_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void SetupWeakspotGlow(int32 CallFunc_SetUpWeakPointGlowOnMesh_ReturnValue, int32 CallFunc_SetUpWeakPointGlowOnMesh_ReturnValue_1, int32 CallFunc_SetUpWeakPointGlowOnMesh_ReturnValue_2, int32 CallFunc_SetUpWeakPointGlowOnMesh_ReturnValue_3);
    void TrySelectDeathAnimation(bool WasWeakpoint, int32& AnimationIndex, bool& HasSelectedAnimation, FVector CallFunc_GetActorUpVector_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
    void SetArmorMeshState(bool ArmorOpen, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UABP_Spider_Boss_Heavy_C* K2Node_DynamicCast_AsABP_Spider_Boss_Heavy, bool K2Node_DynamicCast_bSuccess);
    bool ShouldExplode(TArray<UDamageTag*>& Tags);
    void OnRep_HeavyTankState(UPhysicsAsset* Temp_object_Variable, UPhysicsAsset* Temp_object_Variable_1, UPhysicsAsset* Temp_object_Variable_2, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, uint8 Temp_byte_Variable, bool CallFunc_HasAuthority_ReturnValue_3, UFSDAIController* CallFunc_GetFSDAIController_ReturnValue, UAIC_Spider_Boss_Heavy_C* K2Node_DynamicCast_AsAIC_Spider_Boss_Heavy, bool K2Node_DynamicCast_bSuccess, bool CallFunc_PopActiveStatusEffect_ReturnValue, bool CallFunc_PushActiveStatusEffect_ReturnValue, UPhysicsAsset* K2Node_Select_Default, bool K2Node_SwitchEnum_CmpSuccess);
    bool IsArmorIntact(bool CallFunc_IsAlive_ReturnValue, bool CallFunc_IsAlive_ReturnValue_1, bool CallFunc_IsAlive_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
    void SetWeakpointVisibility(bool Visible, UDestructibleSubHealthComponent* Health, FRotator CallFunc_K2_GetComponentRotation_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, UPrimitiveComponent* K2Node_DynamicCast_AsPrimitive_Component, bool K2Node_DynamicCast_bSuccess, UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue);
    void ReceiveBeginPlay();
    void BndEvt__DestructibleSubHealth_K2Node_ComponentBoundEvent_0_SubHealthDestroyed__DelegateSignature(UDestructibleSubHealthComponent* subHealth);
    void BndEvt__DestructibleSubHealth1_K2Node_ComponentBoundEvent_1_SubHealthDestroyed__DelegateSignature(UDestructibleSubHealthComponent* subHealth);
    void StartSpecialAttack();
    void ForceVulnerable();
    void BndEvt__DestructibleSubHealth2_K2Node_ComponentBoundEvent_2_SubHealthDestroyed__DelegateSignature(UDestructibleSubHealthComponent* subHealth);
    void OnMessageAI(FName TriggerName);
    void OnRagdoll();
    void BndEvt__HealthDamageTracker_K2Node_ComponentBoundEvent_3_DamageSig__DelegateSignature(float Amount);
    void GrowWeakpoints();
    void PlayAnimatedDeath(int32 AnimationIndex);
    void ForceEnraged();
    void OnDeathBase();
    void SpawnProjectile(TSubclassOf<AActor> Actor, const FTransform& Transform);
    void SetPhysicsAsset(UPhysicsAsset* NewPhysicsAsset);
    void ExecuteUbergraph_ENE_Spider_Boss_Heavy(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, SpawnActorDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UDestructibleSubHealthComponent* K2Node_ComponentBoundEvent_subHealth_2, UDestructibleSubHealthComponent* K2Node_ComponentBoundEvent_subHealth_1, AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, const TArray<FVector>& K2Node_MakeArray_Array, bool CallFunc_PlaceActorsWithCallback_ReturnValue, bool CallFunc_IsArmorIntact_ReturnValue, UDestructibleSubHealthComponent* K2Node_ComponentBoundEvent_subHealth, FName K2Node_Event_triggerName, bool K2Node_SwitchName_CmpSuccess, float K2Node_ComponentBoundEvent_Amount, float CallFunc_GetHealthPct_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UABP_Spider_Boss_Heavy_C* K2Node_DynamicCast_AsABP_Spider_Boss_Heavy, bool K2Node_DynamicCast_bSuccess, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, UABP_Spider_Boss_Heavy_C* K2Node_DynamicCast_AsABP_Spider_Boss_Heavy_1, bool K2Node_DynamicCast_bSuccess_1, int32 K2Node_Event_AnimationIndex, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_2, USpiderAnimInstance* K2Node_DynamicCast_AsSpider_Anim_Instance, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, UAnimSequence* Temp_object_Variable, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, UAnimSequence* Temp_object_Variable_1, int32 Temp_int_Variable, TSubclassOf<AActor> K2Node_CustomEvent_actor, const FTransform K2Node_CustomEvent_transform, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, UAnimSequence* K2Node_Select_Default, TSubclassOf<UProjectile> K2Node_ClassDynamicCast_AsProjectile, bool K2Node_ClassDynamicCast_bSuccess, AProjectileBase* CallFunc_SpawnProjectile_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, UPhysicsAsset* K2Node_CustomEvent_NewPhysicsAsset);
}

#endif
