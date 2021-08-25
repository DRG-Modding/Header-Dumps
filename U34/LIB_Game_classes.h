// BlueprintGeneratedClass LIB_Game.LIB_Game_C
// Size: 0x28 (Inherited: 0x28)
struct ULIB_Game_C : UBlueprintFunctionLibrary {

	void SetTextureAndColor(struct UImage* Target, struct UTexture2D* Texture, bool bMatchSize, struct FLinearColor InColorAndOpacity, struct UObject* __WorldContext); // Function LIB_Game.LIB_Game_C.SetTextureAndColor
	void IsFlaggedVisible(struct UWidget* InWidget, struct UObject* __WorldContext, bool IsFlaggedVisible); // Function LIB_Game.LIB_Game_C.IsFlaggedVisible
	void SetSoftTextureAndTint(struct UImage* Target, struct TSoftObjectPtr<struct UTexture2D> Texture, bool bMatchSize, struct FLinearColor Tint, struct UObject* __WorldContext); // Function LIB_Game.LIB_Game_C.SetSoftTextureAndTint
	void SetTextureAndTint(struct UImage* Target, struct UTexture2D* Texture, bool bMatchSize, struct FLinearColor Tint, struct UObject* __WorldContext); // Function LIB_Game.LIB_Game_C.SetTextureAndTint
	void UpdateBool(bool Variable, bool InValue, struct UObject* __WorldContext, bool ValueChanged, bool OutValue); // Function LIB_Game.LIB_Game_C.UpdateBool
	void SetVisibilityIf(struct UWidget* Widget, enum class ESlateVisibility Visibility, bool Condition, struct UObject* __WorldContext, bool IsVisible); // Function LIB_Game.LIB_Game_C.SetVisibilityIf
	void LoadMission(struct FSoftObjectPath NewParam, struct UObject* __WorldContext); // Function LIB_Game.LIB_Game_C.LoadMission
	void SelectVisibility(struct UWidget* Widget, enum class ESlateVisibility FALSE, enum class ESlateVisibility TRUE, bool Index, struct UObject* __WorldContext, bool IsVisible, bool VisibilityChanged, enum class ESlateVisibility New Visibility); // Function LIB_Game.LIB_Game_C.SelectVisibility
	void IsOnSpaceRig(struct UObject* __WorldContext, bool OnSpaceRig); // Function LIB_Game.LIB_Game_C.IsOnSpaceRig
	void IsKickReason(enum class EDisconnectReason DisconnectReason, struct UObject* __WorldContext, bool Kicked); // Function LIB_Game.LIB_Game_C.IsKickReason
};

