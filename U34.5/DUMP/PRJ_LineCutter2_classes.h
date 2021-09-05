// BlueprintGeneratedClass PRJ_LineCutter2.PRJ_LineCutter2_C
// Size: 0x5c0 (Inherited: 0x4e0)
struct APRJ_LineCutter2_C : ALineCutterProjectile {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	UParticleSystemComponent* P_Plasma_Projectile3; // 0x4e8(0x08)
	UStaticMeshComponent* SM_Linecutter_Projectile_A_Right3; // 0x4f0(0x08)
	USphereComponent* SphereRight3; // 0x4f8(0x08)
	UStaticMeshComponent* SM_Linecutter_Projectile_A_Left3; // 0x500(0x08)
	USphereComponent* SphereLeft3; // 0x508(0x08)
	USphereComponent* SphereRight; // 0x510(0x08)
	USphereComponent* SphereLeft; // 0x518(0x08)
	USphereComponent* SphereRight2; // 0x520(0x08)
	USphereComponent* SphereLeft2; // 0x528(0x08)
	UParticleSystemComponent* P_Plasma_Projectile2; // 0x530(0x08)
	UParticleSystemComponent* P_Plasma_Projectile; // 0x538(0x08)
	UPointLightComponent* PointLight; // 0x540(0x08)
	UStaticMeshComponent* SM_Linecutter_Projectile_A_Right2; // 0x548(0x08)
	UStaticMeshComponent* SM_Linecutter_Projectile_A_Left2; // 0x550(0x08)
	UDamageComponent* DamageExplosion; // 0x558(0x08)
	UProjectileExplosion* ProjectileExplosion; // 0x560(0x08)
	UStaticMeshComponent* SM_Linecutter_Projectile_A_Left; // 0x568(0x08)
	UStaticMeshComponent* SM_Linecutter_Projectile_A_Right; // 0x570(0x08)
	float ProjectileSlowdown_Velocity_3314D5764A0652510BE0E38ABA90D3FC; // 0x578(0x04)
	enum class ETimelineDirection ProjectileSlowdown__Direction_3314D5764A0652510BE0E38ABA90D3FC; // 0x57c(0x01)
	UTimelineComponent* ProjectileSlowdown; // 0x580(0x08)
	FTimerHandle ExpandLineTimerHandle; // 0x588(0x08)
	int32_t TimerHandleExecutions; // 0x590(0x04)
	float VisualMaxSize; // 0x594(0x04)
	FTimerHandle FireTimerHandle; // 0x598(0x08)
	FTimerHandle DestructionByTerrainTimerHandle; // 0x5a0(0x08)
	float TerrainCallTime; // 0x5a8(0x04)
	int32_t TerrainIndex; // 0x5ac(0x04)
	FTimerHandle ReduceLineTimerHandle; // 0x5b0(0x08)
	AActor* PersistantExplosion; // 0x5b8(0x08)

	void AdjustLineSize();
	void UserConstructionScript();
	void ProjectileSlowdown__FinishedFunc();
	void ProjectileSlowdown__UpdateFunc();
	void DisableProjectile();
	void ExpandLine();
	void DoDamage();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void StartLineExpansion();
	void CheckTerrainCall();
	void K2_OnReset();
	void LinelifespanDestroy();
	void Explode();
	void LineReducing();
	void ThereCanBeOnlyOne();
	void OnLineDestroyed(FHitResult Result);
	void SetExtraBeamVisibility(bool IsVisible);
	void LeaveTrail();
	void StartSpawningTrail();
	void OnInitialized();
	void ExecuteUbergraph_PRJ_LineCutter2(int32_t EntryPoint);
};

