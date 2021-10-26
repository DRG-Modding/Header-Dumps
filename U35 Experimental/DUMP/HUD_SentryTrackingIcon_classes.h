// WidgetBlueprintGeneratedClass HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C
// Size: 0x2e8 (Inherited: 0x278)
struct UHUD_SentryTrackingIcon_C : UActorTrackingWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	UWidgetAnimation* Shots Fired; // 0x280(0x08)
	UProgressBar* AmmoProgress; // 0x288(0x08)
	UImage* Arrow; // 0x290(0x08)
	UBasic_HUD_BracketWindowSmall_C* Basic_HUD_BracketWindowSmall; // 0x298(0x08)
	UImage* DataImage; // 0x2a0(0x08)
	UHUD_DefaultLabel_C* Distance; // 0x2a8(0x08)
	UHUD_DefaultLabel_C* Name; // 0x2b0(0x08)
	UHUD_DefaultLabel_C* StateLabel; // 0x2b8(0x08)
	float ArrowRotation; // 0x2c0(0x04)
	float ArrowRadius; // 0x2c4(0x04)
	float ArrowAngle; // 0x2c8(0x04)
	ARecallableSentryGun* RecallableActor; // 0x2d0(0x08)
	ARedeployableSentryGun* SentryGun; // 0x2d8(0x08)
	ARecallableSentryGunItem* Item; // 0x2e0(0x08)

	void SetInfo(FText InText, UTexture2D* Texture);
	void PreConstruct(bool IsDesignTime);
	void UpdateArrow(bool inView, float Angle);
	void OnShow();
	void Construct();
	void OnItemEquipped(AItem* Item);
	void Update State();
	void OnSentryIndexChanged(int32_t Index);
	void OnInViewChanged(bool inView, float Angle);
	void OnAmmoCountChanged(int32_t AmmoCount, int32_t Change);
	void OnTargetSet(AActor* NewTarget);
	void OnSelectedItemChanged_Event(ARecallableSentryGun* SentryGun);
	void OnDeployProgress_Event(float Progress);
	void OnSentryGunStateChanged(ARedeployableSentryGun* Sender, enum class ERedeployableSentryGunState NewState);
	void OnTargetDistanceChanged(float Distance);
	void OnRecallableStateChanged(ARecallableActor* Sender, enum class ERecallableActorState State);
	void ExecuteUbergraph_HUD_SentryTrackingIcon(int32_t EntryPoint);
};

