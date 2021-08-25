// WidgetBlueprintGeneratedClass HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C
// Size: 0x2c8 (Inherited: 0x240)
struct UHUD_PlayerPerks_Icon_C : UPerkHUDIconWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x240(0x08)
	struct UWidgetAnimation* AnimCoolingDown; // 0x248(0x08)
	struct UWidgetAnimation* AnimCoolDownFinished; // 0x250(0x08)
	struct UImage* BackgroundImage; // 0x258(0x08)
	struct UBorder* CounterBorder; // 0x260(0x08)
	struct UUI_GenericLabel_C* CounterLabel; // 0x268(0x08)
	struct UImage* FlashOverlay; // 0x270(0x08)
	struct UOverlay* OverlayTexture; // 0x278(0x08)
	struct UOverlay* OverlayWidget; // 0x280(0x08)
	struct UImage* PerkIcon; // 0x288(0x08)
	struct UImage* PerkShadow; // 0x290(0x08)
	struct UProgressBar* ProgressBarCoolDown; // 0x298(0x08)
	struct UImage* Ring_2; // 0x2a0(0x08)
	struct UImage* Ring_3; // 0x2a8(0x08)
	struct UImage* Ring_4; // 0x2b0(0x08)
	struct UUI_RoundedCanvas_C* UI_RoundedCanvas; // 0x2b8(0x08)
	struct FTimerHandle RefreshHandle; // 0x2c0(0x08)

	float GetCooldownDuration(); // Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.GetCooldownDuration
	float GetCoolDownProgress(); // Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.GetCoolDownProgress
	int32_t GetMaxUseCharges(); // Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.GetMaxUseCharges
	int32_t GetRemainingUseCharges(); // Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.GetRemainingUseCharges
	void RefreshCounterAndProgress(bool CoolDownActive); // Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.RefreshCounterAndProgress
	void SetCounter(int32_t InCount); // Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.SetCounter
	void SetProgress(float InProgress, float OutProgress); // Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.SetProgress
	void OnTick_64B6D09E4CB7705CDF68E9949787003B(float DeltaTime, float NormalizedTime); // Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.OnTick_64B6D09E4CB7705CDF68E9949787003B
	void Completed_64B6D09E4CB7705CDF68E9949787003B(float DeltaTime, float NormalizedTime); // Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.Completed_64B6D09E4CB7705CDF68E9949787003B
	void ReceivePerkAssetChanged(); // Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.ReceivePerkAssetChanged
	void Construct(); // Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.Construct
	void OnAnimCoolDownFinished(); // Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.OnAnimCoolDownFinished
	void Begin Cool Down(float Duration); // Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.Begin Cool Down
	void PreConstruct(bool IsDesignTime); // Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.PreConstruct
	void RefreshUseCharges(struct UPerkAsset* Perk, int32_t Value); // Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.RefreshUseCharges
	void CoolDownTick(); // Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.CoolDownTick
	void ExecuteUbergraph_HUD_PlayerPerks_Icon(int32_t EntryPoint); // Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.ExecuteUbergraph_HUD_PlayerPerks_Icon
};

