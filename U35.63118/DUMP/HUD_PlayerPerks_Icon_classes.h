// WidgetBlueprintGeneratedClass HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C
// Size: 0x2c8 (Inherited: 0x240)
struct UHUD_PlayerPerks_Icon_C : UPerkHUDIconWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x240(0x08)
	UWidgetAnimation* AnimCoolingDown; // 0x248(0x08)
	UWidgetAnimation* AnimCoolDownFinished; // 0x250(0x08)
	UImage* BackgroundImage; // 0x258(0x08)
	UBorder* CounterBorder; // 0x260(0x08)
	UBasic_Label_C* CounterLabel; // 0x268(0x08)
	UImage* FlashOverlay; // 0x270(0x08)
	UOverlay* OverlayTexture; // 0x278(0x08)
	UOverlay* OverlayWidget; // 0x280(0x08)
	UImage* PerkIcon; // 0x288(0x08)
	UImage* PerkShadow; // 0x290(0x08)
	UProgressBar* ProgressBarCoolDown; // 0x298(0x08)
	UImage* Ring_2; // 0x2a0(0x08)
	UImage* Ring_3; // 0x2a8(0x08)
	UImage* Ring_4; // 0x2b0(0x08)
	UUI_RoundedCanvas_C* UI_RoundedCanvas; // 0x2b8(0x08)
	FTimerHandle RefreshHandle; // 0x2c0(0x08)

	float GetCooldownDuration();
	float GetCoolDownProgress();
	int32_t GetMaxUseCharges();
	int32_t GetRemainingUseCharges();
	void RefreshCounterAndProgress(bool CoolDownActive);
	void SetCounter(int32_t InCount);
	void SetProgress(float InProgress, float OutProgress);
	void OnTick_64B6D09E4CB7705CDF68E9949787003B(float DeltaTime, float NormalizedTime);
	void Completed_64B6D09E4CB7705CDF68E9949787003B(float DeltaTime, float NormalizedTime);
	void ReceivePerkAssetChanged();
	void Construct();
	void OnAnimCoolDownFinished();
	void Begin Cool Down(float Duration);
	void PreConstruct(bool IsDesignTime);
	void RefreshUseCharges(UPerkAsset* Perk, int32_t Value);
	void CoolDownTick();
	void ExecuteUbergraph_HUD_PlayerPerks_Icon(int32_t EntryPoint);
};

