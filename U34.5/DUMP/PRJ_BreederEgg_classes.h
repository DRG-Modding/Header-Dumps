// BlueprintGeneratedClass PRJ_BreederEgg.PRJ_BreederEgg_C
// Size: 0x478 (Inherited: 0x2f0)
struct APRJ_BreederEgg_C : AProjectile {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	UEnemyHealthComponent* EnemyHealth; // 0x2f8(0x08)
	UGrowthComponent* Growth; // 0x300(0x08)
	UPhysicalAnimationComponent* PhysicalAnimation; // 0x308(0x08)
	USkeletalMeshComponent* Mesh; // 0x310(0x08)
	UOutlineComponent* outline; // 0x318(0x08)
	UEnemyComponent* enemy; // 0x320(0x08)
	UParticleSystem* BreakingParticles; // 0x328(0x08)
	int32_t SpawnAmount; // 0x330(0x04)
	float WarningTime; // 0x334(0x04)
	float SpawnTime; // 0x338(0x04)
	USoundCue* BreakingSound; // 0x340(0x08)
	FName BoneName; // 0x348(0x08)
	FName Profile Name; // 0x350(0x08)
	FRuntimeFloatCurve WarningCurve; // 0x358(0x88)
	FRuntimeFloatCurve GrowthCurve; // 0x3e0(0x88)
	TArray<FName> BonesToSimulatPhysics; // 0x468(0x10)

	void ReceiveBeginPlay();
	void ESpawnJellies();
	void BndEvt__EnemyHealth_K2Node_ComponentBoundEvent_3_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void DestroyEgg();
	void ExecuteUbergraph_PRJ_BreederEgg(int32_t EntryPoint);
};

