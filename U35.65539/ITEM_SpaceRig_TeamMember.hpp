#ifndef UE4SS_SDK_ITEM_SpaceRig_TeamMember_HPP
#define UE4SS_SDK_ITEM_SpaceRig_TeamMember_HPP

class UITEM_SpaceRig_TeamMember_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBorder* Border_CharacterLevel;
    UBorder* Border_CharacterName;
    UBorder* Border_PlayerName;
    UBorder* Border_PlayerRank;
    UUI_MaskedImage_C* CharIcon;
    UTextBlock* ClassLevel;
    UImage* ICON_CharacterLevel;
    UImage* Icon_Host;
    UImage* Icon_PlayerRank;
    UImage* Icon_SonyTeamLeader;
    UImage* Image_0;
    UTextBlock* IncomingPlayerNameTxt;
    UITM_RetirementBadge_C* ITM_RetirementBadge;
    UOverlay* Overlay_0;
    UImage* PlayerIconBG;
    UImage* PlayerIconBorder;
    UCircularThrobber* PlayerOnHisWayIndicator;
    UTextBlock* PlayerRank;
    UUI_PlayerSpeaking_C* PlayerSpeaking_Incoming;
    UUI_PlayerSpeaking_C* PlayerSpeaking_Normal;
    UWidgetSwitcher* StateSwitcher;
    UTextBlock* TXT_CharacterName;
    UTextBlock* TXT_PlayerName;
    UUI_NameTags_C* UI_NameTags;
    UUI_NameTags_C* UI_NameTags_C_0;
    APlayerCharacter* PlayerCharacter;
    AFSDPlayerState* PlayerState;

    void SetPlayerName(FText Temp_text_Variable, EFSDTargetPlatform Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue, bool CallFunc_IsValid_ReturnValue, FText Temp_text_Variable_1, FString CallFunc_GetPlayerName_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_GetGameOwnerStatus_ReturnValue, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, bool Temp_bool_Variable_5, bool K2Node_Select_Default, FText K2Node_Select_Default_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FString CallFunc_GetPlayerName_ReturnValue_1, FText CallFunc_Conv_StringToText_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    void Update(UPlayerCharacter* Character, UFSDPlayerState* Player);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_ITEM_SpaceRig_TeamMember(int32 EntryPoint, int32 Temp_int_Variable, bool Temp_bool_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, UPlayerCharacter* K2Node_CustomEvent_character, UFSDPlayerState* K2Node_CustomEvent_player, const FText CallFunc_GetHeroName_ReturnValue, UTexture2D* CallFunc_GetHeroIcon_ReturnValue, bool Temp_bool_Variable_2, FText CallFunc_Conv_IntToText_ReturnValue, ESlateVisibility Temp_byte_Variable_2, int32 CallFunc_GetSelectedCharacterLevel_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue_1, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor, ESlateVisibility Temp_byte_Variable_3, FLinearColor CallFunc_MenuColors_OutputColor_2, FLinearColor CallFunc_MenuColors_OutputColor_3, FLinearColor CallFunc_MenuColors_OutputColor_4, FLinearColor CallFunc_MenuColors_OutputColor_5, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, FString CallFunc_GetPlayerName_ReturnValue, int32 K2Node_Select_Default, FText CallFunc_Conv_StringToText_ReturnValue, int32 K2Node_Select_Default_1, const FLinearColor CallFunc_GetHeroColor_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_6, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool Temp_bool_Variable_3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, ESlateVisibility K2Node_Select_Default_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, ESlateVisibility K2Node_Select_Default_3);
}

#endif
