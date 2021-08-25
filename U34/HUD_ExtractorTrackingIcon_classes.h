// WidgetBlueprintGeneratedClass HUD_ExtractorTrackingIcon.HUD_ExtractorTrackingIcon_C
// Size: 0x2c0 (Inherited: 0x278)
struct UHUD_ExtractorTrackingIcon_C : UActorTrackingWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	struct UWidgetAnimation* Shots Fired; // 0x280(0x08)
	struct UProgressBar* AmmoProgress; // 0x288(0x08)
	struct UImage* Arrow; // 0x290(0x08)
	struct UBasic_HUD_BracketWindowSmall_C* Basic_HUD_BracketWindowSmall; // 0x298(0x08)
	struct UImage* DataImage; // 0x2a0(0x08)
	struct UHUD_DefaultLabel_C* Distance; // 0x2a8(0x08)
	float ArrowRotation; // 0x2b0(0x04)
	float ArrowRadius; // 0x2b4(0x04)
	float ArrowAngle; // 0x2b8(0x04)
	float MaxCapacity; // 0x2bc(0x04)

	void SetInfo(struct FText InText, struct UTexture2D* Texture); // Function HUD_ExtractorTrackingIcon.HUD_ExtractorTrackingIcon_C.SetInfo
	void PreConstruct(bool IsDesignTime); // Function HUD_ExtractorTrackingIcon.HUD_ExtractorTrackingIcon_C.PreConstruct
	void UpdateArrow(bool inView, float Angle); // Function HUD_ExtractorTrackingIcon.HUD_ExtractorTrackingIcon_C.UpdateArrow
	void OnShow(); // Function HUD_ExtractorTrackingIcon.HUD_ExtractorTrackingIcon_C.OnShow
	void OnInViewChanged(bool inView, float Angle); // Function HUD_ExtractorTrackingIcon.HUD_ExtractorTrackingIcon_C.OnInViewChanged
	void OnTargetSet(struct AActor* NewTarget); // Function HUD_ExtractorTrackingIcon.HUD_ExtractorTrackingIcon_C.OnTargetSet
	void OnTargetDistanceChanged(float Distance); // Function HUD_ExtractorTrackingIcon.HUD_ExtractorTrackingIcon_C.OnTargetDistanceChanged
	void OnCurrentLoadChangedEvent(float FloatValue); // Function HUD_ExtractorTrackingIcon.HUD_ExtractorTrackingIcon_C.OnCurrentLoadChangedEvent
	void LoadChanged(float CurrentLoad); // Function HUD_ExtractorTrackingIcon.HUD_ExtractorTrackingIcon_C.LoadChanged
	void ExecuteUbergraph_HUD_ExtractorTrackingIcon(int32_t EntryPoint); // Function HUD_ExtractorTrackingIcon.HUD_ExtractorTrackingIcon_C.ExecuteUbergraph_HUD_ExtractorTrackingIcon
};

