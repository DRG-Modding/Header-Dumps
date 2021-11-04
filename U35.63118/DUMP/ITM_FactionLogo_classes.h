// WidgetBlueprintGeneratedClass ITM_FactionLogo.ITM_FactionLogo_C
// Size: 0x289 (Inherited: 0x250)
struct UITM_FactionLogo_C : UFSDUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UWidgetAnimation* Animation; // 0x258(0x08)
	UImage* Image_233; // 0x260(0x08)
	USizeBox* SizeBox_18; // 0x268(0x08)
	UUI_ImageTinted_C* UI_ImageTinted; // 0x270(0x08)
	FVector2D Size; // 0x278(0x08)
	UCommunityGoalFaction* Faction; // 0x280(0x08)
	bool animate; // 0x288(0x01)

	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ITM_FactionLogo(int32_t EntryPoint);
};

