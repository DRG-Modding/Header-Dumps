// BlueprintGeneratedClass WPN_MicroMissileLauncher.WPN_MicroMissileLauncher_C
// Size: 0x7f8 (Inherited: 0x788)
struct AWPN_MicroMissileLauncher_C : AMicroMissileLauncher {
	FPointerToUberGraphFrame UberGraphFrame; // 0x788(0x08)
	UChargedProjectileLauncherComponent* ChargedProjectileLauncher; // 0x790(0x08)
	USceneComponent* HomingTarget; // 0x798(0x08)
	UFirstPersonWidgetComponent* FirstPersonWidget_Ammo; // 0x7a0(0x08)
	UCrosshairAggregator* CrosshairAggregator; // 0x7a8(0x08)
	TArray<enum class EObjectTypeQuery> LineTraceTargets; // 0x7b0(0x10)
	float TraceDistance; // 0x7c0(0x04)
	FVector TargetLocation; // 0x7c4(0x0c)
	bool NoHoming; // 0x7d0(0x01)
	bool JetFuelChosen; // 0x7d1(0x01)
	TArray<AActor*> HomingTargetIgnoreList; // 0x7d8(0x10)
	float LongestLifetime; // 0x7e8(0x04)
	APRJ_MicroMissile_C* OldestMissile; // 0x7f0(0x08)

	void SetUpgradeModifiers(UItemUpgrade* ItemUpgrade);
	void GetGearStatEntry(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void CustomEvent1(UItemUpgrade* Event);
	void ReceiveBeginPlay();
	void SetHomingTarget();
	void OnProjectileSpawned_Event_1(AProjectileBase* Projectile);
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__ProjectileLauncher_K2Node_ComponentBoundEvent_0_ProjectileSpawned__DelegateSignature(AProjectileBase* Projectile);
	void Server_SetHomingLocation(FVector_NetQuantize HomingLocation);
	void All_SetHomingLocation(FVector_NetQuantize HomingLocation);
	void ExecuteUbergraph_WPN_MicroMissileLauncher(int32_t EntryPoint);
};

