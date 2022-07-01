#ifndef UE4SS_SDK_ENE_Prospector_HPP
#define UE4SS_SDK_ENE_Prospector_HPP

class AENE_Prospector_C : public AProspectorRobot
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USkeletalMeshComponent* ShieldMesh;
    class UNiagaraComponent* NS_Idle;
    class UNiagaraComponent* NS_Trail;
    class UNiagaraComponent* Niagara_RadioWaves;
    class UAudioComponent* ProspectingAlarmedIdle_Cue;
    class UAudioComponent* ProspectingDroneStartSampling_Cue;
    class UAudioComponent* ProspectingDroneScreamAlerted_Cue;
    class UAudioComponent* Prospector_Idle_Cue;
    class UAudioComponent* ProspectingDroneStartScanning_Cue;
    class UCapsuleComponent* Capsule;
    class UParticleSystemComponent* Particles_Dirt;
    class UHealthDamageTracker* HealthDamageTracker;
    class UPointLightComponent* PointLight_Eye;
    class URectLightComponent* Light_Exhausts;
    class URectLightComponent* Light_Engine;
    class UPointLightComponent* PointLight_Weakpoint_L;
    class UPointLightComponent* PointLight_Weakpoint_R;
    class UOutlineComponent* outline;
    class UStaticMeshComponent* SM_LightCone001;
    class UWeakpointGlowComponent* WeakpointGlow;
    class UArmorHealthDamageComponent* ArmorHealthDamage;
    class UAlignEnemyComponent* AlignEnemy;
    class UEnemyComponent* enemy;
    class UPawnSensingComponent* PawnSensing;
    class UPawnStatsComponent* PawnStats;
    int32 WeakpointsLeft;
    class AActor* Target_0;
    bool HasBeenHacked;
    float CooldownDuration;
    int32 DirtSamplesTaken;
    int32 MaxDirtSamples;
    FVector2D ChunkValueRange;
    TArray<class UResourceData*> ResourceTypes;
    class UAudioComponent* NewVar_0;
    float ReinforcementsAllowed;
    FTimerHandle SamplingCarveTimer;
    FVector SamplingLocation;
    TArray<class UMaterialInterface*> LightMaterials;
    float AlarmDuration;
    bool BossFightActive;
    FGameplayTagContainer DroneTag;
    bool Shielded;
    float ReinforcementDelay;
    float ReinforcementCooldown;
    TArray<class AFSDPawn*> SpawnedPatrolBots;
    bool SpawnLimitExceeded;
    int32 SpawnLimit;
    int32 PatrolBotDifficulty;
    float LimitTimer;

    void SetSpawnDifficulty(int32 NumAdditionalPlayers);
    void SetPatrolBotSpawnLimit();
    bool GetIsTargetable();
    void OnRep_Shielded();
    void SetUpWeakpointGlowAndMaterial();
    void CheckForDamageCause(class AActor* DamageCauser, bool& ShouldReact);
    void ToggleBossFight(bool IsActive);
    void TriggerAlarmedFeedback(bool BlinkLights);
    void SetupGameplayTags(TArray<FGameplayTag>& TagsToAdd, TArray<FGameplayTag>& TagsToRemove);
    void SetupResources();
    void AddDirtSample();
    void Spawn Dirt Samples();
    void SpawnReinforcements(int32 PatrolBotAmount, int32 ShredderAmount);
    void OnRep_Target();
    void GetAIController(class AAIC_Prospector_C*& AsAIC Prospector);
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_HitSig__DelegateSignature(float Damage, const FDamageData& DamageData, bool anyHealthLost);
    void ToggleScanning(bool IsScanning);
    void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_8_SeePawnDelegate__DelegateSignature(class APawn* Pawn);
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_9_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void ReceiveBeginPlay();
    void SetNewTaget(class AActor* Target);
    void EjectDataCore();
    void OnStateBegin(EProspectorRobotState NewState);
    void OnStateEnd(EProspectorRobotState oldState);
    void ToggleSampling(bool Active);
    void BndEvt__ArmorHealthDamage_K2Node_ComponentBoundEvent_1_AmorPartDestroyedDelegate__DelegateSignature(FName Name);
    void BndEvt__HealthDamageTracker_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float Amount);
    void SmapleCarve();
    void ResetSpawn();
    void TriggerCooldown();
    void SpawnDrones(int32 PatrolBotAmount, int32 ShredderAmount);
    void OnEnemySpawned(class APawn* enemy);
    void OnDeathEvent(class UHealthComponentBase* HealthComponent);
    void SetPhysicsAsset(bool ArmPhysics);
    void ExecuteUbergraph_ENE_Prospector(int32 EntryPoint);
};

#endif
