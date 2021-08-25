// BlueprintGeneratedClass PRJ_BreederEgg.PRJ_BreederEgg_C
// Size: 0x478 (Inherited: 0x2f0)
struct APRJ_BreederEgg_C : AProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UEnemyHealthComponent* EnemyHealth; // 0x2f8(0x08)
	struct UGrowthComponent* Growth; // 0x300(0x08)
	struct UPhysicalAnimationComponent* PhysicalAnimation; // 0x308(0x08)
	struct USkeletalMeshComponent* Mesh; // 0x310(0x08)
	struct UOutlineComponent* outline; // 0x318(0x08)
	struct UEnemyComponent* enemy; // 0x320(0x08)
	struct UParticleSystem* BreakingParticles; // 0x328(0x08)
	int32_t SpawnAmount; // 0x330(0x04)
	float WarningTime; // 0x334(0x04)
	float SpawnTime; // 0x338(0x04)
	char UnknownData_33C[0x4]; // 0x33c(0x04)
	struct USoundCue* BreakingSound; // 0x340(0x08)
	struct FName BoneName; // 0x348(0x08)
	struct FName Profile Name; // 0x350(0x08)
	struct FRuntimeFloatCurve WarningCurve; // 0x358(0x88)
	struct FRuntimeFloatCurve GrowthCurve; // 0x3e0(0x88)
	struct TArray<struct FName> BonesToSimulatPhysics; // 0x468(0x10)

	void ReceiveBeginPlay(); // Function PRJ_BreederEgg.PRJ_BreederEgg_C.ReceiveBeginPlay
	void ESpawnJellies(); // Function PRJ_BreederEgg.PRJ_BreederEgg_C.ESpawnJellies
	void BndEvt__EnemyHealth_K2Node_ComponentBoundEvent_3_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function PRJ_BreederEgg.PRJ_BreederEgg_C.BndEvt__EnemyHealth_K2Node_ComponentBoundEvent_3_DeathSig__DelegateSignature
	void DestroyEgg(); // Function PRJ_BreederEgg.PRJ_BreederEgg_C.DestroyEgg
	void ExecuteUbergraph_PRJ_BreederEgg(int32_t EntryPoint); // Function PRJ_BreederEgg.PRJ_BreederEgg_C.ExecuteUbergraph_PRJ_BreederEgg
};

