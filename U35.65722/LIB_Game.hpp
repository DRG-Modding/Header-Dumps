#ifndef UE4SS_SDK_LIB_Game_HPP
#define UE4SS_SDK_LIB_Game_HPP

class ULIB_Game_C : public UBlueprintFunctionLibrary
{

    void SetTextureAndColor(class UImage* Target, class UTexture2D* Texture, bool bMatchSize, FLinearColor InColorAndOpacity, class UObject* __WorldContext);
    void IsFlaggedVisible(class UWidget* InWidget, class UObject* __WorldContext, bool& IsFlaggedVisible, ESlateVisibility Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool K2Node_Select_Default);
    void SetSoftTextureAndTint(class UImage* Target, TSoftObjectPtr<UTexture2D> Texture, bool bMatchSize, FLinearColor Tint, class UObject* __WorldContext, FSlateColor K2Node_MakeStruct_SlateColor);
    void SetTextureAndTint(class UImage* Target, class UTexture2D* Texture, bool bMatchSize, FLinearColor Tint, class UObject* __WorldContext, FSlateColor K2Node_MakeStruct_SlateColor);
    void UpdateBool(bool& Variable, bool InValue, class UObject* __WorldContext, bool& ValueChanged, bool& OutValue, bool Changed, bool CallFunc_NotEqual_BoolBool_ReturnValue);
    void SetVisibilityIf(class UWidget* Widget, ESlateVisibility Visibility, bool Condition, class UObject* __WorldContext, bool& IsVisible, ESlateVisibility Previous, bool CallFunc_IsVisible_ReturnValue);
    void LoadMission(FSoftObjectPath NewParam, class UObject* __WorldContext);
    void SelectVisibility(class UWidget* Widget, ESlateVisibility FALSE, ESlateVisibility TRUE, bool Index, class UObject* __WorldContext, bool& IsVisible, bool& VisibilityChanged, ESlateVisibility& New Visibility, ESlateVisibility Previous, bool Temp_bool_Variable, ESlateVisibility CallFunc_GetVisibility_ReturnValue, ESlateVisibility CallFunc_GetVisibility_ReturnValue_1, ESlateVisibility CallFunc_GetVisibility_ReturnValue_2, bool CallFunc_NotEqual_ByteByte_ReturnValue, ESlateVisibility K2Node_Select_Default, bool CallFunc_IsFlaggedVisible_IsFlaggedVisible);
    void IsOnSpaceRig(class UObject* __WorldContext, bool& OnSpaceRig, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue);
    void IsKickReason(EDisconnectReason DisconnectReason, class UObject* __WorldContext, bool& Kicked, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
};

#endif
