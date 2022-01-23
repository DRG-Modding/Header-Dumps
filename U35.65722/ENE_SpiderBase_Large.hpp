#ifndef UE4SS_SDK_ENE_SpiderBase_Large_HPP
#define UE4SS_SDK_ENE_SpiderBase_Large_HPP

class AENE_SpiderBase_Large_C : public AENE_PF_SpiderBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* GlyphidPraetorianIdle_Cue;
    class UStaticMeshComponent* DropShadow;
    float RagdollImpulseSpeed;
    class UParticleSystem* HeadshotParticle;
    TSubclassOf<class AActor> FrontLegGib;
    class USoundBase* HeadGibSound;
    TEnumAsByte<Spider_DeathType::Type> DeathType;
    class UParticleSystem* GibDeathParticles;
    FVector_NetQuantize RagdollImpulse;
    class UStaticMeshComponent* HeadGoreMesh;
    float DissolveDelay;

    bool ShouldMelt(const TArray<class UDamageTag*>& TargetArray, class UDamageClass* DamageClassconst class UDamageTag* Temp_object_Variable, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const class UDamageTag* Temp_object_Variable_1, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
    void OnRep_RagdollImpulse();
    void IsWeakPointDeath(class UFSDPhysicalMaterial* Material, bool& IsWeakPoint, bool CallFunc_IsWeakPoint_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void GetEnemySpawnedCount(int32& SpawnCount);
    bool ShouldExplode(TArray<class UDamageTag*>& Tagsconst class UDamageTag* Temp_object_Variable, float CallFunc_GetStatValue_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_IsMutatorActive_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
    void SetAnimatedDeathType(int32 AnimationIndex, bool K2Node_SwitchInteger_CmpSuccess);
    void TrySelectDeathAnimation(bool WasWeakpoint, int32& AnimationIndex, bool& HasSelectedAnimation);
    void SetDeathType(TEnumAsByte<Spider_DeathType::Type> DeathType);
    void OnRep_DeathType(bool K2Node_SwitchEnum_CmpSuccess);
    void SpawnLeg(FName InSocketName, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, FVector CallFunc_GetActorUpVector_ReturnValue, int32 CallFunc_GetNumMaterials_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, FTransform CallFunc_GetSocketTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, class ABP_Spider_Leg_Base_C* K2Node_DynamicCast_AsBP_Spider_Leg_Base, bool K2Node_DynamicCast_bSuccess);
    void SetRagdollImpulse(class UDamageClass* DamageClass, class UFSDPhysicalMaterial* PhysMat, float RagdollScale, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FVector CallFunc_GetActorUpVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Normal_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, FVector_NetQuantize CallFunc_VectorToNetQuantize_ReturnValue);
    void OnRagdoll();
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSigDetailed__DelegateSignature(class UHealthComponent* HealthComponent, float damageAmount, class UDamageClass* DamageClass, class AActor* damageCause, class AController* Instigator, class UFSDPhysicalMaterial* PhysicalMaterial, bool IsRadial, const TArray<class UDamageTag*>& Tags);
    void OnDeathBase();
    void Spawn Headshot Gibs(TEnumAsByte<Spider_DeathType::Type> DeathType);
    void ChangeVisibility(bool bNewVisibility);
    void SpawnLegGib();
    void StartFadeBody();
    void SpawnLegGib_Local();
    void Play Body Death Effects();
    void OnFrozen(class AActor* Source);
    void OnUnFrozen();
    void Play Burn Death();
    void StartDissolve();
    void Play Frozen Death();
    void StartBurn();
    void SendRagdollImpulse(FVector Impulse);
    void HandleWeapointDeath(class UFSDPhysicalMaterial* Material, class UDamageClass* DamageClass);
    void PlayAnimatedDeath(int32 AnimationIndex);
    void ExplodedDeath();
    void TrySpawnEnemies();
    void BurrowingEscape();
    void GibbedDeath();
    void DeathDetailedBase(float Amount, class UDamageClass* DamageClass, class AActor* Causer, class AController* Instigator, class UFSDPhysicalMaterial* PhysicalMaterial);
    void TriggerRagdollFromImpulse(FVector Impulse);
    void MakeElite();
    void CorrosiveDeath();
    void StartCorrosiveDissovle();
    void ExecuteUbergraph_ENE_SpiderBase_Large(int32 EntryPoint, TEnumAsByte<Spider_DeathType::Type> K2Node_CustomEvent_DeathType, bool K2Node_Event_bNewVisibility, class UStaticMeshComponent* CallFunc_CreateHeadGore_ReturnValue, bool CallFunc_RandomBool_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class AActor* K2Node_Event_source, FRotator CallFunc_K2_GetActorRotation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, FName CallFunc_GetBoneName_ReturnValue, int32 Temp_int_Variable, FVector K2Node_CustomEvent_Impulse_1, int32 CallFunc_Add_IntInt_ReturnValue, class UHealthComponent* K2Node_ComponentBoundEvent_HealthComponent, float K2Node_ComponentBoundEvent_damageAmount, class UDamageClass* K2Node_ComponentBoundEvent_damageClass, class AActor* K2Node_ComponentBoundEvent_damageCause, class AController* K2Node_ComponentBoundEvent_instigator, class UFSDPhysicalMaterial* K2Node_ComponentBoundEvent_physicalMaterial, bool K2Node_ComponentBoundEvent_isRadial, const TArray<class UDamageTag*>& K2Node_ComponentBoundEvent_tags, class UFSDPhysicalMaterial* K2Node_CustomEvent_Material, class UDamageClass* K2Node_CustomEvent_damageClass_1, bool CallFunc_IsCorrosiveDeath_ReturnValue, bool CallFunc_ShouldExplode_ReturnValue, bool CallFunc_IsWeakPointDeath_IsWeakPoint, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, int32 K2Node_CustomEvent_AnimationIndex, int32 CallFunc_TrySelectDeathAnimation_AnimationIndex, bool CallFunc_TrySelectDeathAnimation_HasSelectedAnimation, int32 CallFunc_TrySelectDeathAnimation_AnimationIndex_1, bool CallFunc_TrySelectDeathAnimation_HasSelectedAnimation_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, int32 CallFunc_GetEnemySpawnedCount_SpawnCount, class UInfestedEnemiesMutator* CallFunc_GetFirstMutator_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, FRotator CallFunc_K2_GetActorRotation_ReturnValue_1, class UParticleSystem* CallFunc_GetParticleSystem_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, class UImpactAudioComponent* CallFunc_AddImpactAudioToActor_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_QueueMontage_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AAIController* K2Node_DynamicCast_AsAIController, bool K2Node_DynamicCast_bSuccess, float K2Node_CustomEvent_Amount, class UDamageClass* K2Node_CustomEvent_damageClass, class AActor* K2Node_CustomEvent_Causer, class AController* K2Node_CustomEvent_Instigator, class UFSDPhysicalMaterial* K2Node_CustomEvent_PhysicalMaterial, FVector K2Node_CustomEvent_Impulse, FVector CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_VSizeSquared_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, FRotator CallFunc_GetSocketRotation_ReturnValue, FVector CallFunc_GetSocketLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_2, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, int32 CallFunc_GetNumMaterials_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_HasAuthority_ReturnValue_1, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, class UDecalComponent* CallFunc_SpawnDecalAtActor_ReturnValue);
};

#endif
