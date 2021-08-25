// BlueprintGeneratedClass PRJ_LineCutter2.PRJ_LineCutter2_C
// Size: 0x5c0 (Inherited: 0x4e0)
struct APRJ_LineCutter2_C : ALineCutterProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UParticleSystemComponent* P_Plasma_Projectile3; // 0x4e8(0x08)
	struct UStaticMeshComponent* SM_Linecutter_Projectile_A_Right3; // 0x4f0(0x08)
	struct USphereComponent* SphereRight3; // 0x4f8(0x08)
	struct UStaticMeshComponent* SM_Linecutter_Projectile_A_Left3; // 0x500(0x08)
	struct USphereComponent* SphereLeft3; // 0x508(0x08)
	struct USphereComponent* SphereRight; // 0x510(0x08)
	struct USphereComponent* SphereLeft; // 0x518(0x08)
	struct USphereComponent* SphereRight2; // 0x520(0x08)
	struct USphereComponent* SphereLeft2; // 0x528(0x08)
	struct UParticleSystemComponent* P_Plasma_Projectile2; // 0x530(0x08)
	struct UParticleSystemComponent* P_Plasma_Projectile; // 0x538(0x08)
	struct UPointLightComponent* PointLight; // 0x540(0x08)
	struct UStaticMeshComponent* SM_Linecutter_Projectile_A_Right2; // 0x548(0x08)
	struct UStaticMeshComponent* SM_Linecutter_Projectile_A_Left2; // 0x550(0x08)
	struct UDamageComponent* DamageExplosion; // 0x558(0x08)
	struct UProjectileExplosion* ProjectileExplosion; // 0x560(0x08)
	struct UStaticMeshComponent* SM_Linecutter_Projectile_A_Left; // 0x568(0x08)
	struct UStaticMeshComponent* SM_Linecutter_Projectile_A_Right; // 0x570(0x08)
	float ProjectileSlowdown_Velocity_3314D5764A0652510BE0E38ABA90D3FC; // 0x578(0x04)
	char ProjectileSlowdown__Direction_3314D5764A0652510BE0E38ABA90D3FC; // 0x57c(0x01)
	char UnknownData_57D[0x3]; // 0x57d(0x03)
	struct UTimelineComponent* ProjectileSlowdown; // 0x580(0x08)
	struct FTimerHandle ExpandLineTimerHandle; // 0x588(0x08)
	int32_t TimerHandleExecutions; // 0x590(0x04)
	float VisualMaxSize; // 0x594(0x04)
	struct FTimerHandle FireTimerHandle; // 0x598(0x08)
	struct FTimerHandle DestructionByTerrainTimerHandle; // 0x5a0(0x08)
	float TerrainCallTime; // 0x5a8(0x04)
	int32_t TerrainIndex; // 0x5ac(0x04)
	struct FTimerHandle ReduceLineTimerHandle; // 0x5b0(0x08)
	struct AActor* PersistantExplosion; // 0x5b8(0x08)

	void AdjustLineSize(); // Function PRJ_LineCutter2.PRJ_LineCutter2_C.AdjustLineSize
	void UserConstructionScript(); // Function PRJ_LineCutter2.PRJ_LineCutter2_C.UserConstructionScript
	void ProjectileSlowdown__FinishedFunc(); // Function PRJ_LineCutter2.PRJ_LineCutter2_C.ProjectileSlowdown__FinishedFunc
	void ProjectileSlowdown__UpdateFunc(); // Function PRJ_LineCutter2.PRJ_LineCutter2_C.ProjectileSlowdown__UpdateFunc
	void DisableProjectile(); // Function PRJ_LineCutter2.PRJ_LineCutter2_C.DisableProjectile
	void ExpandLine(); // Function PRJ_LineCutter2.PRJ_LineCutter2_C.ExpandLine
	void DoDamage(); // Function PRJ_LineCutter2.PRJ_LineCutter2_C.DoDamage
	void ReceiveEndPlay(char EndPlayReason); // Function PRJ_LineCutter2.PRJ_LineCutter2_C.ReceiveEndPlay
	void StartLineExpansion(); // Function PRJ_LineCutter2.PRJ_LineCutter2_C.StartLineExpansion
	void CheckTerrainCall(); // Function PRJ_LineCutter2.PRJ_LineCutter2_C.CheckTerrainCall
	void K2_OnReset(); // Function PRJ_LineCutter2.PRJ_LineCutter2_C.K2_OnReset
	void LinelifespanDestroy(); // Function PRJ_LineCutter2.PRJ_LineCutter2_C.LinelifespanDestroy
	void Explode(); // Function PRJ_LineCutter2.PRJ_LineCutter2_C.Explode
	void LineReducing(); // Function PRJ_LineCutter2.PRJ_LineCutter2_C.LineReducing
	void ThereCanBeOnlyOne(); // Function PRJ_LineCutter2.PRJ_LineCutter2_C.ThereCanBeOnlyOne
	void OnLineDestroyed(struct FHitResult Result); // Function PRJ_LineCutter2.PRJ_LineCutter2_C.OnLineDestroyed
	void SetExtraBeamVisibility(bool IsVisible); // Function PRJ_LineCutter2.PRJ_LineCutter2_C.SetExtraBeamVisibility
	void LeaveTrail(); // Function PRJ_LineCutter2.PRJ_LineCutter2_C.LeaveTrail
	void StartSpawningTrail(); // Function PRJ_LineCutter2.PRJ_LineCutter2_C.StartSpawningTrail
	void OnInitialized(); // Function PRJ_LineCutter2.PRJ_LineCutter2_C.OnInitialized
	void ExecuteUbergraph_PRJ_LineCutter2(int32_t EntryPoint); // Function PRJ_LineCutter2.PRJ_LineCutter2_C.ExecuteUbergraph_PRJ_LineCutter2
};

