// BlueprintGeneratedClass BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C
// Size: 0x590 (Inherited: 0x4b0)
struct ABP_SentryGun_Redeployable_C : ARedeployableSentryGun {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4b0(0x08)
	UBoxComponent* SpecialAttackCollider; // 0x4b8(0x08)
	UParticleSystemComponent* SpecialAttackParticleSystem; // 0x4c0(0x08)
	UWidgetComponent* AmmoCountWidget; // 0x4c8(0x08)
	UStaticMeshComponent* BarrelsMesh; // 0x4d0(0x08)
	USceneComponent* SpotLightBase; // 0x4d8(0x08)
	UStaticMeshComponent* LightCone; // 0x4e0(0x08)
	UPointLightComponent* PointLight; // 0x4e8(0x08)
	USpotLightComponent* SpotLight; // 0x4f0(0x08)
	UProjectileLauncherComponent* ProjectileLauncher; // 0x4f8(0x08)
	USimpleHealthComponent* SimpleHealth; // 0x500(0x08)
	UDamageComponent* DamageComponent; // 0x508(0x08)
	UPointLightComponent* PointLight1; // 0x510(0x08)
	UReloadSentryUsableComponent* ReloadSentryUsable; // 0x518(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x520(0x08)
	USingleUsableComponent* DeployUsable; // 0x528(0x08)
	UWidgetComponent* BuildWidget; // 0x530(0x08)
	UStaticMeshComponent* SpotLight2; // 0x538(0x08)
	USphereComponent* UsableCollision; // 0x540(0x08)
	UHitscanComponent* HitScan; // 0x548(0x08)
	float Timeline_0_Translate_BarrelOverchargeShot_4853B22243389D0916A3E09304615D5D; // 0x550(0x04)
	enum class ETimelineDirection Timeline_0__Direction_4853B22243389D0916A3E09304615D5D; // 0x554(0x01)
	UTimelineComponent* Timeline_1; // 0x558(0x08)
	float DismantleDuration; // 0x560(0x04)
	bool Building; // 0x564(0x01)
	float OldShotCooldown; // 0x568(0x04)
	int32_t SpecialAttackAmmoCost; // 0x56c(0x04)
	float BuildProgress; // 0x570(0x04)
	int32_t MuzzleIndex; // 0x574(0x04)
	TArray<FName> MuzzleNames; // 0x578(0x10)
	UMaterialInstanceDynamic* IndicatorMaterial; // 0x588(0x08)

	void UpdateIndicatorLight(bool FiredShot);
	void ConditionallyEnableShadows();
	float GetDeployProgress();
	void ToggleBuildMode(bool InBuilding);
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveOnDeploy();
	void ReceiveOnDismantle();
	void ReceiveOnDismantled();
	void ReceiveOnDeployed();
	void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(APlayerCharacter* User, enum class EInputKeys Key);
	void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_ProgressSignature__DelegateSignature(float Progress);
	void ReceiveBeginPlay();
	void ReceiveOnSentryGunOwnerChanged();
	void ActivateSpecialAttack();
	void Multicast Special Attack GFX();
	void Reset Special Attack();
	void UpdateShadows();
	void BndEvt__Hitscan_K2Node_ComponentBoundEvent_2_WeaponFiredDelegate__DelegateSignature(FVector Location);
	void ReceiveAmmoChanged(int32_t Delta, int32_t currentAmount);
	void ExecuteUbergraph_BP_SentryGun_Redeployable(int32_t EntryPoint);
};

