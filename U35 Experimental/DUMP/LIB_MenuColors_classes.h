// BlueprintGeneratedClass LIB_MenuColors.LIB_MenuColors_C
// Size: 0x28 (Inherited: 0x28)
struct ULIB_MenuColors_C : UBlueprintFunctionLibrary {

	void WindowColors(enum class ENUM_WindowColors InColor, UObject* __WorldContext, FLinearColor Color1, FLinearColor Color2);
	void SelectTextColor(UTextBlock* Text, enum class ENUM_MenuColors FALSE, enum class ENUM_MenuColors TRUE, bool Condition, UObject* __WorldContext);
	void SetTextColor(UTextBlock* Text, enum class ENUM_MenuColors Color, UObject* __WorldContext);
	void SelectMenuColor(enum class ENUM_MenuColors FALSE, enum class ENUM_MenuColors TRUE, bool Condition, UObject* __WorldContext, FLinearColor OutputColor);
	void MenuColorsAndOpacity(enum class ENUM_MenuColors ColorSelector, float Opacity, UObject* __WorldContext, FLinearColor OutputColor);
	void MenuColors(enum class ENUM_MenuColors ColorSelector, UObject* __WorldContext, FLinearColor OutputColor);
};

