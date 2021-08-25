// BlueprintGeneratedClass LIB_MenuColors.LIB_MenuColors_C
// Size: 0x28 (Inherited: 0x28)
struct ULIB_MenuColors_C : UBlueprintFunctionLibrary {

	void WindowColors(char InColor, struct UObject* __WorldContext, struct FLinearColor Color1, struct FLinearColor Color2); // Function LIB_MenuColors.LIB_MenuColors_C.WindowColors
	void SelectTextColor(struct UTextBlock* Text, char FALSE, char TRUE, bool Condition, struct UObject* __WorldContext); // Function LIB_MenuColors.LIB_MenuColors_C.SelectTextColor
	void SetTextColor(struct UTextBlock* Text, char Color, struct UObject* __WorldContext); // Function LIB_MenuColors.LIB_MenuColors_C.SetTextColor
	void SelectMenuColor(char FALSE, char TRUE, bool Condition, struct UObject* __WorldContext, struct FLinearColor OutputColor); // Function LIB_MenuColors.LIB_MenuColors_C.SelectMenuColor
	void MenuColorsAndOpacity(char ColorSelector, float Opacity, struct UObject* __WorldContext, struct FLinearColor OutputColor); // Function LIB_MenuColors.LIB_MenuColors_C.MenuColorsAndOpacity
	void MenuColors(char ColorSelector, struct UObject* __WorldContext, struct FLinearColor OutputColor); // Function LIB_MenuColors.LIB_MenuColors_C.MenuColors
};

