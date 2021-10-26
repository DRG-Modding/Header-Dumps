// BlueprintGeneratedClass WPN_GrapplingGun.WPN_GrapplingGun_C
// Size: 0x464 (Inherited: 0x3d8)
struct AWPN_GrapplingGun_C : AGrapplingHookGun {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	UFSDAudioComponent* AudioMoving; // 0x3e0(0x08)
	UFirstPersonStaticMeshComponent* FirstPersonStaticMesh; // 0x3e8(0x08)
	UFirstPersonWidgetComponent* CoolDownWidgetFirstPerson; // 0x3f0(0x08)
	UCrosshairAggregator* CrosshairAggregator; // 0x3f8(0x08)
	USkeletalMeshComponent* Projectile; // 0x400(0x08)
	USceneComponent* TP_Muzzle; // 0x408(0x08)
	USceneComponent* FP_Muzzle; // 0x410(0x08)
	UCableComponent* Cable; // 0x418(0x08)
	float ProjectileMovement_Lerp_t_87ACE2EC4276B8AA3B88169B28949E3A; // 0x420(0x04)
	enum class ETimelineDirection ProjectileMovement__Direction_87ACE2EC4276B8AA3B88169B28949E3A; // 0x424(0x01)
	UTimelineComponent* ProjectileMovement; // 0x428(0x08)
	bool Pulling; // 0x430(0x01)
	FVector PullTowards; // 0x434(0x0c)
	float RopeTime; // 0x440(0x04)
	FRotator PullRotation; // 0x444(0x0c)
	UHUD_CroNew_GrapplingGun_C* Crosshair; // 0x450(0x08)
	bool Recharge; // 0x458(0x01)
	float MaxReleaseSpeed; // 0x45c(0x04)
	float OnReleaseSpeedMod; // 0x460(0x04)

	void GetGearStatEntry(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void CalculateRelaseVelocty();
	void OnRep_Pulling();
	FTransform GetCableTransform();
	void SetCableEndPoint(FVector Location);
	void GetCableParent(USceneComponent* Muzzle);
	void ToggleCable(bool bNewVisibility);
	void GetAimView(FVector Location, FVector Forward);
	void UserConstructionScript();
	void ProjectileMovement__FinishedFunc();
	void ProjectileMovement__UpdateFunc();
	void ReceiveTick(float DeltaSeconds);
	void Multicast Shoot(FVector Point);
	void RecieveStartUsing();
	void RecieveUnequipped();
	void RecieveStopUsing();
	void Stop Pulling();
	void ServerShoot(FVector Point);
	void AddedToInventory(APlayerCharacter* ItemOwner);
	void ReceiveBeginPlay();
	void Init Character();
	void OnDeath(UHealthComponentBase* HealthComponent);
	void RecieveCycledItem();
	void Gunsling();
	void Try Equip Previous Item();
	void StopPullingLocal();
	void UpdateMovingAudio();
	void BndEvt__ZiplineLauncher_K2Node_ComponentBoundEvent_1_WeaponFiredDelegate__DelegateSignature(FVector Location);
	void ExecuteUbergraph_WPN_GrapplingGun(int32_t EntryPoint);
};

