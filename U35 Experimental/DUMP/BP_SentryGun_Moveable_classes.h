// BlueprintGeneratedClass BP_SentryGun_Moveable.BP_SentryGun_Moveable_C
// Size: 0x471 (Inherited: 0x440)
struct ABP_SentryGun_Moveable_C : ARecallableSentryGun {
	FPointerToUberGraphFrame UberGraphFrame; // 0x440(0x08)
	UParticleSystemComponent* P_SentryGunMovementTrail; // 0x448(0x08)
	UAudioComponent* AudioMoving; // 0x450(0x08)
	UChildActorComponent* SentryGunActor; // 0x458(0x08)
	bool ReturnOnNoAmmo; // 0x460(0x01)
	ARecallableSentryGunItem* Item; // 0x468(0x08)
	bool ShowAllOutlines; // 0x470(0x01)

	void GetStateDescription(FText Description);
	void SpawnAudioOnPlayer(USoundBase* Audio);
	ASentryGun* GetSentryGunClass();
	void GetSentryOwner(APlayerCharacter* AsPlayer Character);
	ASentryGun* GetSentryGun();
	void ReceiveBeginPlay();
	void OnMoveRequested();
	void OnStateChanged_Event(ARedeployableSentryGun* Sender, enum class ERedeployableSentryGunState NewState);
	void ReceiveOnSentryReady(ASentryGun* SentryGun, APlayerCharacter* PlayerCharacter);
	void OnAmmoCountChanged_Event_1(int32_t AmmoCount, int32_t Change);
	void AudioReadyToBuild();
	void OnMoving();
	void OnMoveFinished(bool returnedHome);
	void AudioBeginMove();
	void AudioMoveFinished();
	void AudioReturnedHome();
	void ReceiveOnStateChanged();
	void Update Outline And Icon();
	void OnSentryStateChanged(ARedeployableSentryGun* Sender, enum class ERedeployableSentryGunState NewState);
	void OnToggleOutline_Event(bool Visible);
	void OnItemEquipped_Event(AItem* Item);
	void OnSelectedItemChanged(ARecallableSentryGun* SentryGun);
	void ExecuteUbergraph_BP_SentryGun_Moveable(int32_t EntryPoint);
};

