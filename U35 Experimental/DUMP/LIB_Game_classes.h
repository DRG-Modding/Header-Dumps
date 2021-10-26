// BlueprintGeneratedClass LIB_Game.LIB_Game_C
// Size: 0x28 (Inherited: 0x28)
struct ULIB_Game_C : UBlueprintFunctionLibrary {

	void SetTextureAndColor(UImage* Target, UTexture2D* Texture, bool bMatchSize, FLinearColor InColorAndOpacity, UObject* __WorldContext);
	void IsFlaggedVisible(UWidget* InWidget, UObject* __WorldContext, bool IsFlaggedVisible);
	void SetSoftTextureAndTint(UImage* Target, TSoftObjectPtr<UTexture2D> Texture, bool bMatchSize, FLinearColor Tint, UObject* __WorldContext);
	void SetTextureAndTint(UImage* Target, UTexture2D* Texture, bool bMatchSize, FLinearColor Tint, UObject* __WorldContext);
	void UpdateBool(bool Variable, bool InValue, UObject* __WorldContext, bool ValueChanged, bool OutValue);
	void SetVisibilityIf(UWidget* Widget, enum class ESlateVisibility Visibility, bool Condition, UObject* __WorldContext, bool IsVisible);
	void LoadMission(FSoftObjectPath NewParam, UObject* __WorldContext);
	void SelectVisibility(UWidget* Widget, enum class ESlateVisibility FALSE, enum class ESlateVisibility TRUE, bool Index, UObject* __WorldContext, bool IsVisible, bool VisibilityChanged, enum class ESlateVisibility New Visibility);
	void IsOnSpaceRig(UObject* __WorldContext, bool OnSpaceRig);
	void IsKickReason(enum class EDisconnectReason DisconnectReason, UObject* __WorldContext, bool Kicked);
};

