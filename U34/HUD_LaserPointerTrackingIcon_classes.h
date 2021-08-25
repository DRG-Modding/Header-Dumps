// WidgetBlueprintGeneratedClass HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C
// Size: 0x2e8 (Inherited: 0x278)
struct UHUD_LaserPointerTrackingIcon_C : UActorTrackingWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	struct UWidgetAnimation* FadeIn; // 0x280(0x08)
	struct UWidgetAnimation* AnimIcon; // 0x288(0x08)
	struct UImage* Arrow; // 0x290(0x08)
	struct UBasic_HUD_BracketWindowSmall_C* Basic_HUD_BracketWindowSmall; // 0x298(0x08)
	struct UTextBlock* DistanceLabel; // 0x2a0(0x08)
	struct UTextBlock* NameLabel; // 0x2a8(0x08)
	struct UTextBlock* PlayerName; // 0x2b0(0x08)
	struct UCanvasPanel* RootCanvas; // 0x2b8(0x08)
	struct UImage* WarningIcon; // 0x2c0(0x08)
	float ArrowRotation; // 0x2c8(0x04)
	float ArrowRadius; // 0x2cc(0x04)
	float ArrowAngle; // 0x2d0(0x04)
	char UnknownData_2D4[0x4]; // 0x2d4(0x04)
	struct ALaserPointerMarker* Marker; // 0x2d8(0x08)
	bool IsCanvasVisible; // 0x2e0(0x01)
	char UnknownData_2E1[0x3]; // 0x2e1(0x03)
	float TimeNotLookingAt; // 0x2e4(0x04)

	void UpdateVisibility(); // Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.UpdateVisibility
	void UpdatePixelOffset(); // Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.UpdatePixelOffset
	void OnInViewChanged(bool inView, float Angle); // Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.OnInViewChanged
	void PreConstruct(bool IsDesignTime); // Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.PreConstruct
	void UpdateArrow(bool inView, float Angle); // Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.UpdateArrow
	void OnShow(); // Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.OnShow
	void OnTargetDistanceChanged(float Distance); // Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.OnTargetDistanceChanged
	void OnTargetSet(struct AActor* NewTarget); // Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.OnTargetSet
	void ExecuteUbergraph_HUD_LaserPointerTrackingIcon(int32_t EntryPoint); // Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.ExecuteUbergraph_HUD_LaserPointerTrackingIcon
};

