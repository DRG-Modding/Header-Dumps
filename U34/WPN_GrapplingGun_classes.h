// BlueprintGeneratedClass WPN_GrapplingGun.WPN_GrapplingGun_C
// Size: 0x444 (Inherited: 0x3b8)
struct AWPN_GrapplingGun_C : AGrapplingHookGun {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b8(0x08)
	struct UAudioComponent* AudioMoving; // 0x3c0(0x08)
	struct UFirstPersonStaticMeshComponent* FirstPersonStaticMesh; // 0x3c8(0x08)
	struct UFirstPersonWidgetComponent* CoolDownWidgetFirstPerson; // 0x3d0(0x08)
	struct UCrosshairAggregator* CrosshairAggregator; // 0x3d8(0x08)
	struct USkeletalMeshComponent* Projectile; // 0x3e0(0x08)
	struct USceneComponent* TP_Muzzle; // 0x3e8(0x08)
	struct USceneComponent* FP_Muzzle; // 0x3f0(0x08)
	struct UCableComponent* Cable; // 0x3f8(0x08)
	float ProjectileMovement_Lerp_t_87ACE2EC4276B8AA3B88169B28949E3A; // 0x400(0x04)
	char ProjectileMovement__Direction_87ACE2EC4276B8AA3B88169B28949E3A; // 0x404(0x01)
	char UnknownData_405[0x3]; // 0x405(0x03)
	struct UTimelineComponent* ProjectileMovement; // 0x408(0x08)
	bool Pulling; // 0x410(0x01)
	char UnknownData_411[0x3]; // 0x411(0x03)
	struct FVector PullTowards; // 0x414(0x0c)
	float RopeTime; // 0x420(0x04)
	struct FRotator PullRotation; // 0x424(0x0c)
	struct UHUD_CroNew_GrapplingGun_C* Crosshair; // 0x430(0x08)
	bool Recharge; // 0x438(0x01)
	char UnknownData_439[0x3]; // 0x439(0x03)
	float MaxReleaseSpeed; // 0x43c(0x04)
	float OnReleaseSpeedMod; // 0x440(0x04)

	void GetGearStatEntry(struct AFSDPlayerState* PlayerState, struct TArray<struct FGearStatEntry> Stats); // Function WPN_GrapplingGun.WPN_GrapplingGun_C.GetGearStatEntry
	void CalculateRelaseVelocty(); // Function WPN_GrapplingGun.WPN_GrapplingGun_C.CalculateRelaseVelocty
	void OnRep_Pulling(); // Function WPN_GrapplingGun.WPN_GrapplingGun_C.OnRep_Pulling
	struct FTransform GetCableTransform(); // Function WPN_GrapplingGun.WPN_GrapplingGun_C.GetCableTransform
	void SetCableEndPoint(struct FVector Location); // Function WPN_GrapplingGun.WPN_GrapplingGun_C.SetCableEndPoint
	void GetCableParent(struct USceneComponent* Muzzle); // Function WPN_GrapplingGun.WPN_GrapplingGun_C.GetCableParent
	void ToggleCable(bool bNewVisibility); // Function WPN_GrapplingGun.WPN_GrapplingGun_C.ToggleCable
	void GetAimView(struct FVector Location, struct FVector Forward); // Function WPN_GrapplingGun.WPN_GrapplingGun_C.GetAimView
	void UserConstructionScript(); // Function WPN_GrapplingGun.WPN_GrapplingGun_C.UserConstructionScript
	void ProjectileMovement__FinishedFunc(); // Function WPN_GrapplingGun.WPN_GrapplingGun_C.ProjectileMovement__FinishedFunc
	void ProjectileMovement__UpdateFunc(); // Function WPN_GrapplingGun.WPN_GrapplingGun_C.ProjectileMovement__UpdateFunc
	void ReceiveTick(float DeltaSeconds); // Function WPN_GrapplingGun.WPN_GrapplingGun_C.ReceiveTick
	void Multicast Shoot(struct FVector Point); // Function WPN_GrapplingGun.WPN_GrapplingGun_C.Multicast Shoot
	void RecieveStartUsing(); // Function WPN_GrapplingGun.WPN_GrapplingGun_C.RecieveStartUsing
	void RecieveUnequipped(); // Function WPN_GrapplingGun.WPN_GrapplingGun_C.RecieveUnequipped
	void RecieveStopUsing(); // Function WPN_GrapplingGun.WPN_GrapplingGun_C.RecieveStopUsing
	void Stop Pulling(); // Function WPN_GrapplingGun.WPN_GrapplingGun_C.Stop Pulling
	void ServerShoot(struct FVector Point); // Function WPN_GrapplingGun.WPN_GrapplingGun_C.ServerShoot
	void AddedToInventory(struct APlayerCharacter* ItemOwner); // Function WPN_GrapplingGun.WPN_GrapplingGun_C.AddedToInventory
	void ReceiveBeginPlay(); // Function WPN_GrapplingGun.WPN_GrapplingGun_C.ReceiveBeginPlay
	void Init Character(); // Function WPN_GrapplingGun.WPN_GrapplingGun_C.Init Character
	void OnDeath(struct UHealthComponentBase* HealthComponent); // Function WPN_GrapplingGun.WPN_GrapplingGun_C.OnDeath
	void RecieveCycledItem(); // Function WPN_GrapplingGun.WPN_GrapplingGun_C.RecieveCycledItem
	void Gunsling(); // Function WPN_GrapplingGun.WPN_GrapplingGun_C.Gunsling
	void Try Equip Previous Item(); // Function WPN_GrapplingGun.WPN_GrapplingGun_C.Try Equip Previous Item
	void StopPullingLocal(); // Function WPN_GrapplingGun.WPN_GrapplingGun_C.StopPullingLocal
	void UpdateMovingAudio(); // Function WPN_GrapplingGun.WPN_GrapplingGun_C.UpdateMovingAudio
	void BndEvt__ZiplineLauncher_K2Node_ComponentBoundEvent_1_WeaponFiredDelegate__DelegateSignature(struct FVector Location); // Function WPN_GrapplingGun.WPN_GrapplingGun_C.BndEvt__ZiplineLauncher_K2Node_ComponentBoundEvent_1_WeaponFiredDelegate__DelegateSignature
	void ExecuteUbergraph_WPN_GrapplingGun(int32_t EntryPoint); // Function WPN_GrapplingGun.WPN_GrapplingGun_C.ExecuteUbergraph_WPN_GrapplingGun
};

