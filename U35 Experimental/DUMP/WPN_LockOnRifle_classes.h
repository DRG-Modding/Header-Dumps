// BlueprintGeneratedClass WPN_LockOnRifle.WPN_LockOnRifle_C
// Size: 0x8d0 (Inherited: 0x858)
struct AWPN_LockOnRifle_C : ALockOnWeapon {
	FPointerToUberGraphFrame UberGraphFrame; // 0x858(0x08)
	UFirstPersonStaticMeshComponent* Mag_FP; // 0x860(0x08)
	UStaticMeshComponent* Mag_TP; // 0x868(0x08)
	USceneComponent* BeamStart; // 0x870(0x08)
	UAudioComponent* LockOnRifleHUDDeActivated_Cue; // 0x878(0x08)
	UAudioComponent* LockOnRifleHUDActivated_Cue; // 0x880(0x08)
	UAudioComponent* LockOnRifleLocked_Cue; // 0x888(0x08)
	UCrosshairAggregator* CrosshairAggregator; // 0x890(0x08)
	UDamageComponent* Damage; // 0x898(0x08)
	UHitscanComponent* HitScan; // 0x8a0(0x08)
	UFirstPersonWidgetComponent* FirstPersonWidget; // 0x8a8(0x08)
	TArray<UABP_LockOnRifle_A_C*> ABPs; // 0x8b0(0x10)
	bool WideAngle; // 0x8c0(0x01)
	bool SpeedBoost; // 0x8c1(0x01)
	UStatusEffect* SpeedBoostSTE; // 0x8c8(0x08)

	void GetGearStatEntry(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void RecieveEquipped();
	void Recieve_UpdateMeshses(bool IsFirstPerson);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OnRep_AimTarget();
	void LockingStarted_Event();
	void LockingStopped_Event();
	void CustomEvent1(UItemUpgrade* Event);
	void ExecuteUbergraph_WPN_LockOnRifle(int32_t EntryPoint);
};

