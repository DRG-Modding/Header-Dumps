// BlueprintGeneratedClass BP_SentryGun_Moveable.BP_SentryGun_Moveable_C
// Size: 0x471 (Inherited: 0x440)
struct ABP_SentryGun_Moveable_C : ARecallableSentryGun {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x440(0x08)
	struct UParticleSystemComponent* P_SentryGunMovementTrail; // 0x448(0x08)
	struct UAudioComponent* AudioMoving; // 0x450(0x08)
	struct UChildActorComponent* SentryGunActor; // 0x458(0x08)
	bool ReturnOnNoAmmo; // 0x460(0x01)
	char UnknownData_461[0x7]; // 0x461(0x07)
	struct ARecallableSentryGunItem* Item; // 0x468(0x08)
	bool ShowAllOutlines; // 0x470(0x01)

	void GetStateDescription(struct FText Description); // Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.GetStateDescription
	void SpawnAudioOnPlayer(struct USoundBase* Audio); // Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.SpawnAudioOnPlayer
	struct ASentryGun* GetSentryGunClass(); // Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.GetSentryGunClass
	void GetSentryOwner(struct APlayerCharacter* AsPlayer Character); // Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.GetSentryOwner
	struct ASentryGun* GetSentryGun(); // Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.GetSentryGun
	void ReceiveBeginPlay(); // Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.ReceiveBeginPlay
	void OnMoveRequested(); // Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnMoveRequested
	void OnStateChanged_Event(struct ARedeployableSentryGun* Sender, enum class ERedeployableSentryGunState NewState); // Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnStateChanged_Event
	void ReceiveOnSentryReady(struct ASentryGun* SentryGun, struct APlayerCharacter* PlayerCharacter); // Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.ReceiveOnSentryReady
	void OnAmmoCountChanged_Event_1(int32_t AmmoCount, int32_t Change); // Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnAmmoCountChanged_Event_1
	void AudioReadyToBuild(); // Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.AudioReadyToBuild
	void OnMoving(); // Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnMoving
	void OnMoveFinished(bool returnedHome); // Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnMoveFinished
	void AudioBeginMove(); // Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.AudioBeginMove
	void AudioMoveFinished(); // Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.AudioMoveFinished
	void AudioReturnedHome(); // Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.AudioReturnedHome
	void ReceiveOnStateChanged(); // Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.ReceiveOnStateChanged
	void Update Outline And Icon(); // Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.Update Outline And Icon
	void OnSentryStateChanged(struct ARedeployableSentryGun* Sender, enum class ERedeployableSentryGunState NewState); // Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnSentryStateChanged
	void OnToggleOutline_Event(bool Visible); // Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnToggleOutline_Event
	void OnItemEquipped_Event(struct AItem* Item); // Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnItemEquipped_Event
	void OnSelectedItemChanged(struct ARecallableSentryGun* SentryGun); // Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnSelectedItemChanged
	void ExecuteUbergraph_BP_SentryGun_Moveable(int32_t EntryPoint); // Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.ExecuteUbergraph_BP_SentryGun_Moveable
};

