// BlueprintGeneratedClass BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C
// Size: 0x590 (Inherited: 0x4b0)
struct ABP_SentryGun_Redeployable_C : ARedeployableSentryGun {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b0(0x08)
	struct UBoxComponent* SpecialAttackCollider; // 0x4b8(0x08)
	struct UParticleSystemComponent* SpecialAttackParticleSystem; // 0x4c0(0x08)
	struct UWidgetComponent* AmmoCountWidget; // 0x4c8(0x08)
	struct UStaticMeshComponent* BarrelsMesh; // 0x4d0(0x08)
	struct USceneComponent* SpotlightBase; // 0x4d8(0x08)
	struct UStaticMeshComponent* LightCone; // 0x4e0(0x08)
	struct UPointLightComponent* PointLight; // 0x4e8(0x08)
	struct USpotLightComponent* SpotLight; // 0x4f0(0x08)
	struct UProjectileLauncherComponent* ProjectileLauncher; // 0x4f8(0x08)
	struct USimpleHealthComponent* SimpleHealth; // 0x500(0x08)
	struct UDamageComponent* DamageComponent; // 0x508(0x08)
	struct UPointLightComponent* PointLight1; // 0x510(0x08)
	struct UReloadSentryUsableComponent* ReloadSentryUsable; // 0x518(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x520(0x08)
	struct USingleUsableComponent* DeployUsable; // 0x528(0x08)
	struct UWidgetComponent* BuildWidget; // 0x530(0x08)
	struct UStaticMeshComponent* SpotLight2; // 0x538(0x08)
	struct USphereComponent* UsableCollision; // 0x540(0x08)
	struct UHitscanComponent* HitScan; // 0x548(0x08)
	float Timeline_0_Translate_BarrelOverchargeShot_4853B22243389D0916A3E09304615D5D; // 0x550(0x04)
	char Timeline_0__Direction_4853B22243389D0916A3E09304615D5D; // 0x554(0x01)
	char UnknownData_555[0x3]; // 0x555(0x03)
	struct UTimelineComponent* Timeline_1; // 0x558(0x08)
	float DismantleDuration; // 0x560(0x04)
	bool Building; // 0x564(0x01)
	char UnknownData_565[0x3]; // 0x565(0x03)
	float OldShotCooldown; // 0x568(0x04)
	int32_t SpecialAttackAmmoCost; // 0x56c(0x04)
	float BuildProgress; // 0x570(0x04)
	int32_t MuzzleIndex; // 0x574(0x04)
	struct TArray<struct FName> MuzzleNames; // 0x578(0x10)
	struct UMaterialInstanceDynamic* IndicatorMaterial; // 0x588(0x08)

	void UpdateIndicatorLight(bool FiredShot); // Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.UpdateIndicatorLight
	void ConditionallyEnableShadows(); // Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ConditionallyEnableShadows
	float GetDeployProgress(); // Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.GetDeployProgress
	void ToggleBuildMode(bool InBuilding); // Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ToggleBuildMode
	void UserConstructionScript(); // Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.UserConstructionScript
	void Timeline_0__FinishedFunc(); // Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.Timeline_0__FinishedFunc
	void Timeline_0__UpdateFunc(); // Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.Timeline_0__UpdateFunc
	void ReceiveOnDeploy(); // Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ReceiveOnDeploy
	void ReceiveOnDismantle(); // Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ReceiveOnDismantle
	void ReceiveOnDismantled(); // Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ReceiveOnDismantled
	void ReceiveOnDeployed(); // Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ReceiveOnDeployed
	void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
	void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_ProgressSignature__DelegateSignature(float Progress); // Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_ProgressSignature__DelegateSignature
	void ReceiveBeginPlay(); // Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ReceiveBeginPlay
	void ReceiveOnSentryGunOwnerChanged(); // Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ReceiveOnSentryGunOwnerChanged
	void ActivateSpecialAttack(); // Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ActivateSpecialAttack
	void Multicast Special Attack GFX(); // Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.Multicast Special Attack GFX
	void Reset Special Attack(); // Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.Reset Special Attack
	void UpdateShadows(); // Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.UpdateShadows
	void BndEvt__Hitscan_K2Node_ComponentBoundEvent_2_WeaponFiredDelegate__DelegateSignature(struct FVector Location); // Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.BndEvt__Hitscan_K2Node_ComponentBoundEvent_2_WeaponFiredDelegate__DelegateSignature
	void ReceiveAmmoChanged(int32_t Delta, int32_t currentAmount); // Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ReceiveAmmoChanged
	void ExecuteUbergraph_BP_SentryGun_Redeployable(int32_t EntryPoint); // Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ExecuteUbergraph_BP_SentryGun_Redeployable
};

