// WidgetBlueprintGeneratedClass HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C
// Size: 0x2e8 (Inherited: 0x278)
struct UHUD_LaserPointerTrackingIcon_C : UActorTrackingWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	UWidgetAnimation* FadeIn; // 0x280(0x08)
	UWidgetAnimation* AnimIcon; // 0x288(0x08)
	UImage* Arrow; // 0x290(0x08)
	UBasic_HUD_BracketWindowSmall_C* Basic_HUD_BracketWindowSmall; // 0x298(0x08)
	UTextBlock* DistanceLabel; // 0x2a0(0x08)
	UTextBlock* NameLabel; // 0x2a8(0x08)
	UTextBlock* PlayerName; // 0x2b0(0x08)
	UCanvasPanel* RootCanvas; // 0x2b8(0x08)
	UImage* WarningIcon; // 0x2c0(0x08)
	float ArrowRotation; // 0x2c8(0x04)
	float ArrowRadius; // 0x2cc(0x04)
	float ArrowAngle; // 0x2d0(0x04)
	ALaserPointerMarker* Marker; // 0x2d8(0x08)
	bool IsCanvasVisible; // 0x2e0(0x01)
	float TimeNotLookingAt; // 0x2e4(0x04)

	void UpdateVisibility();
	void UpdatePixelOffset();
	void OnInViewChanged(bool inView, float Angle);
	void PreConstruct(bool IsDesignTime);
	void UpdateArrow(bool inView, float Angle);
	void OnShow();
	void OnTargetDistanceChanged(float Distance);
	void OnTargetSet(AActor* NewTarget);
	void ExecuteUbergraph_HUD_LaserPointerTrackingIcon(int32_t EntryPoint);
};

