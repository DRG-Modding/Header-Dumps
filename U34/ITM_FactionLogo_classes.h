// WidgetBlueprintGeneratedClass ITM_FactionLogo.ITM_FactionLogo_C
// Size: 0x289 (Inherited: 0x250)
struct UITM_FactionLogo_C : UFSDUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UWidgetAnimation* Animation; // 0x258(0x08)
	struct UImage* Image_233; // 0x260(0x08)
	struct USizeBox* SizeBox_18; // 0x268(0x08)
	struct UUI_ImageTinted_C* UI_ImageTinted; // 0x270(0x08)
	struct FVector2D Size; // 0x278(0x08)
	struct UCommunityGoalFaction* Faction; // 0x280(0x08)
	bool animate; // 0x288(0x01)

	void PreConstruct(bool IsDesignTime); // Function ITM_FactionLogo.ITM_FactionLogo_C.PreConstruct
	void ExecuteUbergraph_ITM_FactionLogo(int32_t EntryPoint); // Function ITM_FactionLogo.ITM_FactionLogo_C.ExecuteUbergraph_ITM_FactionLogo
};

