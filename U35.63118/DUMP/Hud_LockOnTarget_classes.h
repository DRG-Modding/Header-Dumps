// WidgetBlueprintGeneratedClass Hud_LockOnTarget.Hud_LockOnTarget_C
// Size: 0x2d4 (Inherited: 0x278)
struct UHud_LockOnTarget_C : ULockOnTrackingWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	UWidgetAnimation* SavedAmmoOutro; // 0x280(0x08)
	UWidgetAnimation* TargetLocked; // 0x288(0x08)
	UImage* Arrow; // 0x290(0x08)
	UImage* CrossHair_Base; // 0x298(0x08)
	UImage* CrossHair_Glow; // 0x2a0(0x08)
	UImage* CrossHair_Glow_2; // 0x2a8(0x08)
	USizeBox* CrosshairSize; // 0x2b0(0x08)
	UTextBlock* Text_LockOnCount; // 0x2b8(0x08)
	UVerticalBox* VerticalBox_Crosshair; // 0x2c0(0x08)
	float ArrowRadius; // 0x2c8(0x04)
	float ArrowRotation; // 0x2cc(0x04)
	float ArrowAngle; // 0x2d0(0x04)

	void OnTargetDistanceChanged(float Distance);
	void OnInViewChanged(bool inView, float Angle);
	void PreConstruct(bool IsDesignTime);
	void UpdateArrow(bool inView, float Angle);
	void OnLockOn(int32_t numberOfLockOnsOnThisTarget, int32_t totalNumberOfLockOns);
	void OnFireComplete(int32_t numberOfLockOnsOnThisTarget);
	void UpdateCount(int32_t NewCount);
	void OnShow();
	void CleanUpWidget(bool showFade);
	void Construct();
	void OutroFinished();
	void ExecuteUbergraph_Hud_LockOnTarget(int32_t EntryPoint);
};

