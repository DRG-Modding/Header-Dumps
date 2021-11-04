// WidgetBlueprintGeneratedClass ITM_Community_Console_ClaimReward.ITM_Community_Console_ClaimReward_C
// Size: 0x338 (Inherited: 0x250)
struct UITM_Community_Console_ClaimReward_C : UFSDUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UWidgetAnimation* LogoAnimation; // 0x258(0x08)
	UImage* Image_Faction; // 0x260(0x08)
	USizeBox* SydicateLogoBox; // 0x268(0x08)
	UUI_ImageTinted_C* SyndicateLogo; // 0x270(0x08)
	UBorder* TextBackground; // 0x278(0x08)
	UBorder* TextBorder; // 0x280(0x08)
	UUI_ImageTinted_C* UI_ImageTinted_C_1; // 0x288(0x08)
	UUI_ImageTinted_C* UI_ImageTinted_C_3; // 0x290(0x08)
	UUI_ImageTinted_C* UI_ImageTinted_C_4; // 0x298(0x08)
	UUI_ImageTinted_C* UI_ImageTinted_C_5; // 0x2a0(0x08)
	enum class ENUM_MenuColors IconColor; // 0x2a8(0x01)
	FSlateBrush IconBrush; // 0x2b0(0x88)

	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ITM_Community_Console_ClaimReward(int32_t EntryPoint);
};

