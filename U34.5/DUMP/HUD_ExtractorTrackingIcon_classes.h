// WidgetBlueprintGeneratedClass HUD_ExtractorTrackingIcon.HUD_ExtractorTrackingIcon_C
// Size: 0x2c0 (Inherited: 0x278)
struct UHUD_ExtractorTrackingIcon_C : UActorTrackingWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	UWidgetAnimation* Shots Fired; // 0x280(0x08)
	UProgressBar* AmmoProgress; // 0x288(0x08)
	UImage* Arrow; // 0x290(0x08)
	UBasic_HUD_BracketWindowSmall_C* Basic_HUD_BracketWindowSmall; // 0x298(0x08)
	UImage* DataImage; // 0x2a0(0x08)
	UHUD_DefaultLabel_C* Distance; // 0x2a8(0x08)
	float ArrowRotation; // 0x2b0(0x04)
	float ArrowRadius; // 0x2b4(0x04)
	float ArrowAngle; // 0x2b8(0x04)
	float MaxCapacity; // 0x2bc(0x04)

	void SetInfo(FText InText, UTexture2D* Texture);
	void PreConstruct(bool IsDesignTime);
	void UpdateArrow(bool inView, float Angle);
	void OnShow();
	void OnInViewChanged(bool inView, float Angle);
	void OnTargetSet(AActor* NewTarget);
	void OnTargetDistanceChanged(float Distance);
	void OnCurrentLoadChangedEvent(float FloatValue);
	void LoadChanged(float CurrentLoad);
	void ExecuteUbergraph_HUD_ExtractorTrackingIcon(int32_t EntryPoint);
};

