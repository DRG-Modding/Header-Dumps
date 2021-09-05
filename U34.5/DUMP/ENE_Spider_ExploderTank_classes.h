// BlueprintGeneratedClass ENE_Spider_ExploderTank.ENE_Spider_ExploderTank_C
// Size: 0x570 (Inherited: 0x4b4)
struct AENE_Spider_ExploderTank_C : AENE_SpiderBase_Large_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	UWeakpointGlowComponent* WeakpointGlow; // 0x4c0(0x08)
	UMeleeAttackComponent* CarveAttack; // 0x4c8(0x08)
	UAlignEnemyComponent* AlignEnemy; // 0x4d0(0x08)
	UCapsuleComponent* Capsule; // 0x4d8(0x08)
	UParticleSystemComponent* P_ExploderTank_CollectingEmbers; // 0x4e0(0x08)
	UDamageComponent* DamageDeathExplosion; // 0x4e8(0x08)
	UArmorHealthDamageComponent* ArmorHealthDamage; // 0x4f0(0x08)
	UBillboardComponent* ExplosionOrigin; // 0x4f8(0x08)
	UBillboardComponent* ClusterOrigin; // 0x500(0x08)
	UDamageComponent* Damage; // 0x508(0x08)
	USphereComponent* Sphere; // 0x510(0x08)
	UPointLightComponent* Light_BackBody; // 0x518(0x08)
	UParticleSystem* ExplosionParticles; // 0x520(0x08)
	float WeakspotDamageMult; // 0x528(0x04)
	int32_t NumClusterBombs; // 0x52c(0x04)
	int32_t NumWeakspotsDestroyed; // 0x530(0x04)
	UParticleSystem* AoeAttackParticles; // 0x538(0x08)
	bool IsSucking; // 0x540(0x01)
	UFSDAchievement* CyaDetonatorAchievement; // 0x548(0x08)
	float PushForce; // 0x550(0x04)
	AProjectileBase* ClusterProjectileType; // 0x558(0x08)
	UTerrainMaterial* OvverideBurnedMaterial; // 0x560(0x08)
	float BurnThickness; // 0x568(0x04)
	float CarveDiameter; // 0x56c(0x04)

	void SetupWeakpointGlow();
	void MakeCrater();
	void Apply Force to Players in Range(TArray<APlayerCharacter*> Array of Players, float Directional Force to Apply);
	bool GetIsTargetable();
	void GetEnemySpawnedCount(int32_t SpawnCount);
	bool ShouldExplode();
	void SetAchievementFromServerToAll(UFSDAchievement* AchievementToSet, float Progress);
	void OnRep_IsSucking();
	float GetDistanceToLocalPlayer();
	void DamageAndCarve();
	void PlayRumbeAndShake();
	void OnRep_Exploded();
	void OnMessageAI(FName TriggerName);
	void SetRagdollImpulse(UDamageClass* DamageClass, UFSDPhysicalMaterial* PhysMat);
	void OnFrozen(AActor* Source);
	void OnUnFrozen();
	void Play Frozen Death();
	void ShootClusterBombs();
	void Play Body Death Effects();
	void Play Burn Death();
	void Spawn Headshot Gibs(enum class Spider_DeathType DeathType);
	void Attack(FName nameValue);
	void BndEvt__ArmorHealthDamage_K2Node_ComponentBoundEvent_0_AmorPartDestroyedDelegate__DelegateSignature(FName Name);
	void ReceiveBeginPlay();
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_BodypartHitSig__DelegateSignature(float amount, float BaseAmount, UPrimitiveComponent* Component, UFSDPhysicalMaterial* PhysMat, FName BoneName);
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void Frozen Explosion();
	void MakeElite();
	void ExecuteUbergraph_ENE_Spider_ExploderTank(int32_t EntryPoint);
};

