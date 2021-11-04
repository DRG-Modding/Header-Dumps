// WidgetBlueprintGeneratedClass HUD_CooldownWidget.HUD_CooldownWidget_C
// Size: 0x2e4 (Inherited: 0x280)
struct UHUD_CooldownWidget_C : UCoolDownProgressWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	UWidgetAnimation* AnimFinished; // 0x288(0x08)
	UWidgetAnimation* AnimBegin; // 0x290(0x08)
	UImage* CoolDownImage; // 0x298(0x08)
	USizeBox* Sizer; // 0x2a0(0x08)
	UImage* SplashImage; // 0x2a8(0x08)
	float Size; // 0x2b0(0x04)
	float CurrentProgress; // 0x2b4(0x04)
	UMaterialInstanceDynamic* ProgressMaterial; // 0x2b8(0x08)
	float HeightScale; // 0x2c0(0x04)
	FLinearColor FillTint; // 0x2c4(0x10)
	FLinearColor BackgroundTint; // 0x2d4(0x10)

	void SetBackgroundTint(FLinearColor Value);
	void SetFillTint(FLinearColor Value);
	void SetPercent(float InPercent);
	void ReceiveInitWidget();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void SetHeightScale(float Scale);
	void OnAnimFadeoutFinished();
	void ReceiveUpdateProgress(float InProgress);
	void ExecuteUbergraph_HUD_CooldownWidget(int32_t EntryPoint);
};

