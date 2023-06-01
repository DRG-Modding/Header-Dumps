#ifndef UE4SS_SDK_ENE_SpiderBase_Large_HPP
#define UE4SS_SDK_ENE_SpiderBase_Large_HPP

class AENE_SpiderBase_Large_C : public AENE_PF_SpiderBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* GlyphidPraetorianIdle_Cue;
    class UStaticMeshComponent* DropShadow;
    float RagdollImpulseSpeed;
    class UFXSystemAsset* HeadshotParticle;
    TSubclassOf<class AActor> FrontLegGib;
    class USoundBase* HeadGibSound;
    TEnumAsByte<Spider_DeathType::Type> DeathType;
    class UStaticMeshComponent* HeadGoreMesh;
    float DissolveDelay;
    class UNiagaraSystem* GibParticles;
    class ULimbDismembermentList* LimbDismemberment;
    class UFXSystemAsset* ChemExplosionParticles;
    bool RagdolEnabled;

    void FindChemicalArrow(class ACrossbowProjectileStuck*& ChemicalArrow);
    void GetFXMeshScale(float& Scale);
    void HandleWeapointDeath(FDamageData& DamageData, TArray<class UDamageTag*>& Tags);
    void HandleNormalDeath(FDamageData& DamageData, TArray<class UDamageTag*>& Tags);
    FVector GetImpactImpulse(EImpulseDirectionSource Selection, FDamageData& DamageData, float UpForceScale);
    void SetDeathAnimationCategory(ESpiderDeathAnimationCategory Category);
    void SetCookMaterialSettings();
    void SetBurnMaterialSettings();
    void FindClosestBone(FVector Location, FName& Bone);
    int32 DismemberLegs(FVector Location);
    bool ShouldMelt(const TArray<class UDamageTag*>& TargetArray, class UDamageClass* DamageClass);
    void IsWeakPointDeath(class UFSDPhysicalMaterial* Material, bool& IsWeakPoint);
    void GetEnemySpawnedCount(int32& SpawnCount);
    void SetAnimatedDeathType(int32 AnimationIndex);
    void TrySelectDeathAnimation(bool WasWeakpoint, int32& AnimationIndex, bool& HasSelectedAnimation);
    void SetDeathType(TEnumAsByte<Spider_DeathType::Type> DeathType);
    void OnRep_DeathType();
    void SpawnLeg(FName InSocketName);
    void SetRagdollImpulse(FDamageData& DamageData, TArray<class UDamageTag*>& Tags);
    void UserConstructionScript();
    void OnFrozen(class AActor* Source);
    void OnUnFrozen();
    void Play Burn Death();
    void StartDissolve();
    void Play Frozen Death();
    void StartBurn();
    void Play Body Death Effects();
    void SpawnLegGib_Local();
    void StartFadeBody();
    void SendRagdollImpulse(FVector_NetQuantize Impulse, uint8 BoneIndex);
    void PlayAnimatedDeath(int32 AnimationIndex);
    void ExplodedDeath();
    void TrySpawnEnemies();
    void BurrowingEscape();
    void SpawnLegGib();
    void GibbedDeath();
    void DeathDetailedBase(float Amount, const FDamageData& DamageData, const TArray<class UDamageTag*>& Tags);
    void MakeElite();
    void CorrosiveDeath();
    void StartCorrosiveDissovle();
    void ChangeVisibility(bool bNewVisibility);
    void Cooked Death();
    void All_Ragdoll(FVector_NetQuantize Impulse, const FVector_NetQuantize& Location, uint8 BoneIndex, uint8 limbIndex);
    void BreakLimb(uint8 BoneIndex);
    void BndEvt__ENE_SpiderBase_Large_HealthComponent_K2Node_ComponentBoundEvent_0_DeathSigDetailed__DelegateSignature(class UHealthComponent* HealthComponent, float damageAmount, const FDamageData& DamageData, const TArray<class UDamageTag*>& Tags);
    void Spawn Headshot Gibs(TEnumAsByte<Spider_DeathType::Type> DeathType);
    void OnRagdoll();
    void ChemicalExplosionDeath();
    void OnDeathBase();
    void ExecuteUbergraph_ENE_SpiderBase_Large(int32 EntryPoint);
};

#endif
