// WidgetBlueprintGeneratedClass WeaponDisplay_PlasmaCarbine_AmmoCounter.WeaponDisplay_PlasmaCarbine_AmmoCounter_C
// Size: 0x2c0 (Inherited: 0x250)
struct UWeaponDisplay_PlasmaCarbine_AmmoCounter_C : UWeaponDisplay_Base_AmmoCount_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UWidgetAnimation* Anim_ProgressColor; // 0x258(0x08)
	UWidgetAnimation* Anim_LowerBlink; // 0x260(0x08)
	UWidgetAnimation* Anim_Overheat; // 0x268(0x08)
	UWidgetAnimation* Anim_AmmoCritical; // 0x270(0x08)
	UTextBlock* DATA_AmmoCount; // 0x278(0x08)
	UTextBlock* DATA_AmmoLow; // 0x280(0x08)
	UImage* Image_Progress; // 0x288(0x08)
	UImage* Image_ProgressLowerBit; // 0x290(0x08)
	UOverlay* Overlay_AmmoLow; // 0x298(0x08)
	UOverlay* Overlay_Overheat; // 0x2a0(0x08)
	float Progress; // 0x2a8(0x04)
	bool Overheating; // 0x2ac(0x01)
	FLinearColor ProgressColor; // 0x2b0(0x10)

	void SetProgressColor(FLinearColor InColor);
	void Scrub Animation(UWidgetAnimation* InAnimation, float InProgress);
	void OverheatStatus(bool Condition);
	void SetProgress(float Value);
	void UpdateAmount(int32_t Value);
	void SetTotalCount(int32_t Value);
	void Max Ammo Changed(int32_t Amount);
	void Total Ammo left changed(int32_t Amount);
	void SetClipCount(int32_t Value);
	void PreConstruct(bool IsDesignTime);
	void SetHeatValue(float HeatPercentage, bool Overheated, float ThermalFeedbackLevel);
	void ExecuteUbergraph_WeaponDisplay_PlasmaCarbine_AmmoCounter(int32_t EntryPoint);
};

