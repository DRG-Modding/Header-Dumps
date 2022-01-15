#ifndef UE4SS_SDK_ENE_SpiderBase_Large_HPP
#define UE4SS_SDK_ENE_SpiderBase_Large_HPP

class AENE_SpiderBase_Large_C : UENE_PF_SpiderBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAudioComponent* GlyphidPraetorianIdle_Cue;
    UStaticMeshComponent* DropShadow;
    float RagdollImpulseSpeed;
    UParticleSystem* HeadshotParticle;
    TSubclassOf<AActor> FrontLegGib;
    USoundBase* HeadGibSound;
    TEnumAsByte<Spider_DeathType::Type> DeathType;
    UParticleSystem* GibDeathParticles;
    FVector_NetQuantize RagdollImpulse;
    UStaticMeshComponent* HeadGoreMesh;
    float DissolveDelay;

    bool ShouldMelt(const TArray<UDamageTag*>& TargetArray, UDamageClass* DamageClassconst UDamageTag* Temp_object_Variable, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const UDamageTag* Temp_object_Variable_1, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
    void OnRep_RagdollImpulse();
    void IsWeakPointDeath(UFSDPhysicalMaterial* Material, bool& IsWeakPoint, bool CallFunc_IsWeakPoint_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void GetEnemySpawnedCount(int32& SpawnCount);
    bool ShouldExplode(TArray<UDamageTag*>& Tagsconst UDamageTag* Temp_object_Variable, float CallFunc_GetStatValue_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_IsMutatorActive_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
    void SetAnimatedDeathType(int32 AnimationIndex, bool K2Node_SwitchInteger_CmpSuccess);
    void TrySelectDeathAnimation(bool WasWeakpoint, int32& AnimationIndex, bool& HasSelectedAnimation);
    void SetDeathType(uint8 DeathType);
    void OnRep_DeathType(bool K2Node_SwitchEnum_CmpSuccess);
    void SpawnLeg(FName InSocketName, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, FVector CallFunc_GetActorUpVector_ReturnValue, int32 CallFunc_GetNumMaterials_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, FTransform CallFunc_GetSocketTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, AActor* CallFunc_FinishSpawningActor_ReturnValue, ABP_Spider_Leg_Base_C* K2Node_DynamicCast_AsBP_Spider_Leg_Base, bool K2Node_DynamicCast_bSuccess);
    void SetRagdollImpulse(UDamageClass* DamageClass, UFSDPhysicalMaterial* PhysMat, float RagdollScale, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FVector CallFunc_GetActorUpVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Normal_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, FVector_NetQuantize CallFunc_VectorToNetQuantize_ReturnValue);
    void OnRagdoll();
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSigDetailed__DelegateSignature(UHealthComponent* HealthComponent, float damageAmount, UDamageClass* DamageClass, AActor* damageCause, AController* Instigator, UFSDPhysicalMaterial* PhysicalMaterial, bool IsRadial, const TArray<UDamageTag*>& Tags);
    void OnDeathBase();
    void Spawn Headshot Gibs(uint8 DeathType);
    void ChangeVisibility(bool bNewVisibility);
    void SpawnLegGib();
    void StartFadeBody();
    void SpawnLegGib_Local();
    void Play Body Death Effects();
    void OnFrozen(AActor* Source);
    void OnUnFrozen();
    void Play Burn Death();
    void StartDissolve();
    void Play Frozen Death();
    void StartBurn();
    void SendRagdollImpulse(FVector Impulse);
    void HandleWeapointDeath(UFSDPhysicalMaterial* Material, UDamageClass* DamageClass);
    void PlayAnimatedDeath(int32 AnimationIndex);
    void ExplodedDeath();
    void TrySpawnEnemies();
    void BurrowingEscape();
    void GibbedDeath();
    void DeathDetailedBase(float Amount, UDamageClass* DamageClass, AActor* Causer, AController* Instigator, UFSDPhysicalMaterial* PhysicalMaterial);
    void TriggerRagdollFromImpulse(FVector Impulse);
    void MakeElite();
    void CorrosiveDeath();
    void StartCorrosiveDissovle();
    void ExecuteUbergraph_ENE_SpiderBase_Large(int32 EntryPoint, uint8 K2Node_CustomEvent_DeathType, bool K2Node_Event_bNewVisibility, UStaticMeshComponent* CallFunc_CreateHeadGore_ReturnValue, bool CallFunc_RandomBool_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, AActor* K2Node_Event_source, FRotator CallFunc_K2_GetActorRotation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, FName CallFunc_GetBoneName_ReturnValue, int32 Temp_int_Variable, FVector K2Node_CustomEvent_Impulse_1, int32 CallFunc_Add_IntInt_ReturnValue, UHealthComponent* K2Node_ComponentBoundEvent_HealthComponent, float K2Node_ComponentBoundEvent_damageAmount, UDamageClass* K2Node_ComponentBoundEvent_damageClass, AActor* K2Node_ComponentBoundEvent_damageCause, AController* K2Node_ComponentBoundEvent_instigator, UFSDPhysicalMaterial* K2Node_ComponentBoundEvent_physicalMaterial, bool K2Node_ComponentBoundEvent_isRadial, const TArray<UDamageTag*>& K2Node_ComponentBoundEvent_tags, UFSDPhysicalMaterial* K2Node_CustomEvent_Material, UDamageClass* K2Node_CustomEvent_damageClass_1, bool CallFunc_IsCorrosiveDeath_ReturnValue, bool CallFunc_ShouldExplode_ReturnValue, bool CallFunc_IsWeakPointDeath_IsWeakPoint, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, int32 K2Node_CustomEvent_AnimationIndex, int32 CallFunc_TrySelectDeathAnimation_AnimationIndex, bool CallFunc_TrySelectDeathAnimation_HasSelectedAnimation, int32 CallFunc_TrySelectDeathAnimation_AnimationIndex_1, bool CallFunc_TrySelectDeathAnimation_HasSelectedAnimation_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, int32 CallFunc_GetEnemySpawnedCount_SpawnCount, UInfestedEnemiesMutator* CallFunc_GetFirstMutator_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, FRotator CallFunc_K2_GetActorRotation_ReturnValue_1, UParticleSystem* CallFunc_GetParticleSystem_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, UImpactAudioComponent* CallFunc_AddImpactAudioToActor_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_QueueMontage_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, AController* CallFunc_GetController_ReturnValue, UAIController* K2Node_DynamicCast_AsAIController, bool K2Node_DynamicCast_bSuccess, float K2Node_CustomEvent_Amount, UDamageClass* K2Node_CustomEvent_damageClass, AActor* K2Node_CustomEvent_Causer, AController* K2Node_CustomEvent_Instigator, UFSDPhysicalMaterial* K2Node_CustomEvent_PhysicalMaterial, FVector K2Node_CustomEvent_Impulse, FVector CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_VSizeSquared_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, FRotator CallFunc_GetSocketRotation_ReturnValue, FVector CallFunc_GetSocketLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_2, UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, int32 CallFunc_GetNumMaterials_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_HasAuthority_ReturnValue_1, UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, UDecalComponent* CallFunc_SpawnDecalAtActor_ReturnValue);
}

#endif
