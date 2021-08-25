// WidgetBlueprintGeneratedClass HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C
// Size: 0x2e8 (Inherited: 0x278)
struct UHUD_SentryTrackingIcon_C : UActorTrackingWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	struct UWidgetAnimation* Shots Fired; // 0x280(0x08)
	struct UProgressBar* AmmoProgress; // 0x288(0x08)
	struct UImage* Arrow; // 0x290(0x08)
	struct UBasic_HUD_BracketWindowSmall_C* Basic_HUD_BracketWindowSmall; // 0x298(0x08)
	struct UImage* DataImage; // 0x2a0(0x08)
	struct UHUD_DefaultLabel_C* Distance; // 0x2a8(0x08)
	struct UHUD_DefaultLabel_C* Name; // 0x2b0(0x08)
	struct UHUD_DefaultLabel_C* StateLabel; // 0x2b8(0x08)
	float ArrowRotation; // 0x2c0(0x04)
	float ArrowRadius; // 0x2c4(0x04)
	float ArrowAngle; // 0x2c8(0x04)
	char UnknownData_2CC[0x4]; // 0x2cc(0x04)
	struct ARecallableSentryGun* RecallableActor; // 0x2d0(0x08)
	struct ARedeployableSentryGun* SentryGun; // 0x2d8(0x08)
	struct ARecallableSentryGunItem* Item; // 0x2e0(0x08)

	void SetInfo(struct FText InText, struct UTexture2D* Texture); // Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.SetInfo
	void PreConstruct(bool IsDesignTime); // Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.PreConstruct
	void UpdateArrow(bool inView, float Angle); // Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.UpdateArrow
	void OnShow(); // Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnShow
	void Construct(); // Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.Construct
	void OnItemEquipped(struct AItem* Item); // Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnItemEquipped
	void Update State(); // Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.Update State
	void OnSentryIndexChanged(int32_t Index); // Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnSentryIndexChanged
	void OnInViewChanged(bool inView, float Angle); // Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnInViewChanged
	void OnAmmoCountChanged(int32_t AmmoCount, int32_t Change); // Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnAmmoCountChanged
	void OnTargetSet(struct AActor* NewTarget); // Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnTargetSet
	void OnSelectedItemChanged_Event(struct ARecallableSentryGun* SentryGun); // Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnSelectedItemChanged_Event
	void OnDeployProgress_Event(float Progress); // Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnDeployProgress_Event
	void OnSentryGunStateChanged(struct ARedeployableSentryGun* Sender, enum class ERedeployableSentryGunState NewState); // Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnSentryGunStateChanged
	void OnTargetDistanceChanged(float Distance); // Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnTargetDistanceChanged
	void OnRecallableStateChanged(struct ARecallableActor* Sender, enum class ERecallableActorState State); // Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnRecallableStateChanged
	void ExecuteUbergraph_HUD_SentryTrackingIcon(int32_t EntryPoint); // Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.ExecuteUbergraph_HUD_SentryTrackingIcon
};

