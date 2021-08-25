// BlueprintGeneratedClass ENE_Spider_ExploderTank.ENE_Spider_ExploderTank_C
// Size: 0x570 (Inherited: 0x4b4)
struct AENE_Spider_ExploderTank_C : AENE_SpiderBase_Large_C {
	char UnknownData_4B4[0x4]; // 0x4b4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct UWeakpointGlowComponent* WeakpointGlow; // 0x4c0(0x08)
	struct UMeleeAttackComponent* CarveAttack; // 0x4c8(0x08)
	struct UAlignEnemyComponent* AlignEnemy; // 0x4d0(0x08)
	struct UCapsuleComponent* Capsule; // 0x4d8(0x08)
	struct UParticleSystemComponent* P_ExploderTank_CollectingEmbers; // 0x4e0(0x08)
	struct UDamageComponent* DamageDeathExplosion; // 0x4e8(0x08)
	struct UArmorHealthDamageComponent* ArmorHealthDamage; // 0x4f0(0x08)
	struct UBillboardComponent* ExplosionOrigin; // 0x4f8(0x08)
	struct UBillboardComponent* ClusterOrigin; // 0x500(0x08)
	struct UDamageComponent* Damage; // 0x508(0x08)
	struct USphereComponent* Sphere; // 0x510(0x08)
	struct UPointLightComponent* Light_BackBody; // 0x518(0x08)
	struct UParticleSystem* ExplosionParticles; // 0x520(0x08)
	float WeakspotDamageMult; // 0x528(0x04)
	int32_t NumClusterBombs; // 0x52c(0x04)
	int32_t NumWeakspotsDestroyed; // 0x530(0x04)
	char UnknownData_534[0x4]; // 0x534(0x04)
	struct UParticleSystem* AoeAttackParticles; // 0x538(0x08)
	bool IsSucking; // 0x540(0x01)
	char UnknownData_541[0x7]; // 0x541(0x07)
	struct UFSDAchievement* CyaDetonatorAchievement; // 0x548(0x08)
	float PushForce; // 0x550(0x04)
	char UnknownData_554[0x4]; // 0x554(0x04)
	struct AProjectileBase* ClusterProjectileType; // 0x558(0x08)
	struct UTerrainMaterial* OvverideBurnedMaterial; // 0x560(0x08)
	float BurnThickness; // 0x568(0x04)
	float CarveDiameter; // 0x56c(0x04)

	void SetupWeakpointGlow(); // Function ENE_Spider_ExploderTank.ENE_Spider_ExploderTank_C.SetupWeakpointGlow
	void MakeCrater(); // Function ENE_Spider_ExploderTank.ENE_Spider_ExploderTank_C.MakeCrater
	void Apply Force to Players in Range(struct TArray<struct APlayerCharacter*> Array of Players, float Directional Force to Apply); // Function ENE_Spider_ExploderTank.ENE_Spider_ExploderTank_C.Apply Force to Players in Range
	bool GetIsTargetable(); // Function ENE_Spider_ExploderTank.ENE_Spider_ExploderTank_C.GetIsTargetable
	void GetEnemySpawnedCount(int32_t SpawnCount); // Function ENE_Spider_ExploderTank.ENE_Spider_ExploderTank_C.GetEnemySpawnedCount
	bool ShouldExplode(); // Function ENE_Spider_ExploderTank.ENE_Spider_ExploderTank_C.ShouldExplode
	void SetAchievementFromServerToAll(struct UFSDAchievement* AchievementToSet, float Progress); // Function ENE_Spider_ExploderTank.ENE_Spider_ExploderTank_C.SetAchievementFromServerToAll
	void OnRep_IsSucking(); // Function ENE_Spider_ExploderTank.ENE_Spider_ExploderTank_C.OnRep_IsSucking
	float GetDistanceToLocalPlayer(); // Function ENE_Spider_ExploderTank.ENE_Spider_ExploderTank_C.GetDistanceToLocalPlayer
	void DamageAndCarve(); // Function ENE_Spider_ExploderTank.ENE_Spider_ExploderTank_C.DamageAndCarve
	void PlayRumbeAndShake(); // Function ENE_Spider_ExploderTank.ENE_Spider_ExploderTank_C.PlayRumbeAndShake
	void OnRep_Exploded(); // Function ENE_Spider_ExploderTank.ENE_Spider_ExploderTank_C.OnRep_Exploded
	void OnMessageAI(struct FName TriggerName); // Function ENE_Spider_ExploderTank.ENE_Spider_ExploderTank_C.OnMessageAI
	void SetRagdollImpulse(struct UDamageClass* DamageClass, struct UFSDPhysicalMaterial* PhysMat); // Function ENE_Spider_ExploderTank.ENE_Spider_ExploderTank_C.SetRagdollImpulse
	void OnFrozen(struct AActor* Source); // Function ENE_Spider_ExploderTank.ENE_Spider_ExploderTank_C.OnFrozen
	void OnUnFrozen(); // Function ENE_Spider_ExploderTank.ENE_Spider_ExploderTank_C.OnUnFrozen
	void Play Frozen Death(); // Function ENE_Spider_ExploderTank.ENE_Spider_ExploderTank_C.Play Frozen Death
	void ShootClusterBombs(); // Function ENE_Spider_ExploderTank.ENE_Spider_ExploderTank_C.ShootClusterBombs
	void Play Body Death Effects(); // Function ENE_Spider_ExploderTank.ENE_Spider_ExploderTank_C.Play Body Death Effects
	void Play Burn Death(); // Function ENE_Spider_ExploderTank.ENE_Spider_ExploderTank_C.Play Burn Death
	void Spawn Headshot Gibs(char DeathType); // Function ENE_Spider_ExploderTank.ENE_Spider_ExploderTank_C.Spawn Headshot Gibs
	void Attack(struct FName nameValue); // Function ENE_Spider_ExploderTank.ENE_Spider_ExploderTank_C.Attack
	void BndEvt__ArmorHealthDamage_K2Node_ComponentBoundEvent_0_AmorPartDestroyedDelegate__DelegateSignature(struct FName Name); // Function ENE_Spider_ExploderTank.ENE_Spider_ExploderTank_C.BndEvt__ArmorHealthDamage_K2Node_ComponentBoundEvent_0_AmorPartDestroyedDelegate__DelegateSignature
	void ReceiveBeginPlay(); // Function ENE_Spider_ExploderTank.ENE_Spider_ExploderTank_C.ReceiveBeginPlay
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_BodypartHitSig__DelegateSignature(float amount, float BaseAmount, struct UPrimitiveComponent* Component, struct UFSDPhysicalMaterial* PhysMat, struct FName BoneName); // Function ENE_Spider_ExploderTank.ENE_Spider_ExploderTank_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_BodypartHitSig__DelegateSignature
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function ENE_Spider_ExploderTank.ENE_Spider_ExploderTank_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature
	void Frozen Explosion(); // Function ENE_Spider_ExploderTank.ENE_Spider_ExploderTank_C.Frozen Explosion
	void MakeElite(); // Function ENE_Spider_ExploderTank.ENE_Spider_ExploderTank_C.MakeElite
	void ExecuteUbergraph_ENE_Spider_ExploderTank(int32_t EntryPoint); // Function ENE_Spider_ExploderTank.ENE_Spider_ExploderTank_C.ExecuteUbergraph_ENE_Spider_ExploderTank
};

