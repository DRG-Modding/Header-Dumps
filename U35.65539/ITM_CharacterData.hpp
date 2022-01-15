#ifndef UE4SS_SDK_ITM_CharacterData_HPP
#define UE4SS_SDK_ITM_CharacterData_HPP

class UITM_CharacterData_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* DATA_CharacterLevel;
    UTextBlock* DATA_CharName;
    UTextBlock* DATA_PlayerName;
    UTextBlock* DATA_PlayerRank;
    UTextBlock* DATA_xp;
    UBorder* Holder_CharLevel;
    UBorder* Holder_CharName;
    UBorder* Holder_PlayerName;
    UBorder* Holder_PlayerRank;
    UVerticalBox* Holder_XP;
    USizeBox* Holder_XPbar;
    UImage* ICON_CharacterLevel;
    UImage* Image_2;
    UImage* Image_6;
    UBorder* OuterBorder;
    USizeBox* SizeBox_1;
    USizeBox* SizeBox_4;
    USizeBox* SizeBox_5;
    USpacer* Spacer_0;
    UUI_Character_Supplies_C* UI_Character_Supplies;
    UProgressBar* XPbar_Base;
    UProgressBar* XPbar_Edge;
    float Width;
    bool ShowPlayerName;
    bool ShowPlayerRank;
    bool ShowCharacterName;
    bool ShowCharacterLevel;
    bool ShowXPbar;
    bool ShowXPcounter;
    bool ShowSupplies;
    bool ShowHealth;

    void FromPlayerState(UFSDPlayerState* InPlayerState, UPlayerCharacterID* OptionalCharacterClass, UPlayerCharacterID* CharacterClass, FText HeroName, UFSDPlayerState* PlayerState, bool CallFunc_IsValid_ReturnValue, const FText CallFunc_GetName_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_Variable, UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue, UPlayerCharacterID* K2Node_Select_Default, FString CallFunc_GetPlayerName_ReturnValue, FCharacterProgress CallFunc_GetCharacterProgress_ReturnValue, int32 CallFunc_GetPlayerRank_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, int32 CallFunc_GetRequiredXPForLevel_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_2);
    void FromPlayerCharacter(UPlayerCharacter* SetCharacter, UFSDPlayerState* PlayerState, UFSDPlayerState* CallFunc_GetPlayerState_ReturnValue);
    void SetData(FString PlayerName, const FText& HeroName, int32 PlayerRank, int32 CharacterLevel, float LevelProgress, int32 CurrentXP, int32 RequiredXP, UFSDPlayerState* PlayerState, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, FText Temp_text_Variable, bool CallFunc_Not_PreBool_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, float CallFunc_Add_FloatFloat_ReturnValue, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue_1, FText CallFunc_TextToUpper_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, FText K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1);
    void SetToggles(bool PlayerName, bool PlayerRank, bool CharacterName, bool CharacterLevel, bool XPcounter, bool XPbar, bool Supplies, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1, ESlateVisibility K2Node_Select_Default, bool CallFunc_SelectVisibility_IsVisible_2, bool CallFunc_SelectVisibility_VisibilityChanged_2, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_2, bool CallFunc_SelectVisibility_IsVisible_3, bool CallFunc_SelectVisibility_VisibilityChanged_3, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_3, bool CallFunc_SelectVisibility_IsVisible_4, bool CallFunc_SelectVisibility_VisibilityChanged_4, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_4, bool CallFunc_SelectVisibility_IsVisible_5, bool CallFunc_SelectVisibility_VisibilityChanged_5, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_5);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_CharacterData(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor_1, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor_2, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor_3);
}

#endif
