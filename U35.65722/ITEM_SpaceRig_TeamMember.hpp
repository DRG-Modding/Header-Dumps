#ifndef UE4SS_SDK_ITEM_SpaceRig_TeamMember_HPP
#define UE4SS_SDK_ITEM_SpaceRig_TeamMember_HPP

class UITEM_SpaceRig_TeamMember_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border_CharacterLevel;
    class UBorder* Border_CharacterName;
    class UBorder* Border_PlayerName;
    class UBorder* Border_PlayerRank;
    class UUI_MaskedImage_C* CharIcon;
    class UTextBlock* ClassLevel;
    class UImage* ICON_CharacterLevel;
    class UImage* Icon_Host;
    class UImage* Icon_PlayerRank;
    class UImage* Icon_SonyTeamLeader;
    class UImage* Image_0;
    class UTextBlock* IncomingPlayerNameTxt;
    class UITM_RetirementBadge_C* ITM_RetirementBadge;
    class UOverlay* Overlay_0;
    class UImage* PlayerIconBG;
    class UImage* PlayerIconBorder;
    class UCircularThrobber* PlayerOnHisWayIndicator;
    class UTextBlock* PlayerRank;
    class UUI_PlayerSpeaking_C* PlayerSpeaking_Incoming;
    class UUI_PlayerSpeaking_C* PlayerSpeaking_Normal;
    class UWidgetSwitcher* StateSwitcher;
    class UTextBlock* TXT_CharacterName;
    class UTextBlock* TXT_PlayerName;
    class UUI_NameTags_C* UI_NameTags;
    class UUI_NameTags_C* UI_NameTags_C_0;
    class APlayerCharacter* PlayerCharacter;
    class AFSDPlayerState* PlayerState;

    void SetPlayerName(FText Temp_text_Variable, EFSDTargetPlatform Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, class UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue, bool CallFunc_IsValid_ReturnValue, FText Temp_text_Variable_1, FString CallFunc_GetPlayerName_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_GetGameOwnerStatus_ReturnValue, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, bool Temp_bool_Variable_5, bool K2Node_Select_Default, FText K2Node_Select_Default_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FString CallFunc_GetPlayerName_ReturnValue_1, FText CallFunc_Conv_StringToText_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    void Update(class APlayerCharacter* Character, class AFSDPlayerState* Player);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_ITEM_SpaceRig_TeamMember(int32 EntryPoint, int32 Temp_int_Variable, bool Temp_bool_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, class APlayerCharacter* K2Node_CustomEvent_character, class AFSDPlayerState* K2Node_CustomEvent_player, const FText CallFunc_GetHeroName_ReturnValue, class UTexture2D* CallFunc_GetHeroIcon_ReturnValue, bool Temp_bool_Variable_2, FText CallFunc_Conv_IntToText_ReturnValue, ESlateVisibility Temp_byte_Variable_2, int32 CallFunc_GetSelectedCharacterLevel_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue_1, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor, ESlateVisibility Temp_byte_Variable_3, FLinearColor CallFunc_MenuColors_OutputColor_2, FLinearColor CallFunc_MenuColors_OutputColor_3, FLinearColor CallFunc_MenuColors_OutputColor_4, FLinearColor CallFunc_MenuColors_OutputColor_5, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, FString CallFunc_GetPlayerName_ReturnValue, int32 K2Node_Select_Default, FText CallFunc_Conv_StringToText_ReturnValue, int32 K2Node_Select_Default_1, const FLinearColor CallFunc_GetHeroColor_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_6, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool Temp_bool_Variable_3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, ESlateVisibility K2Node_Select_Default_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, ESlateVisibility K2Node_Select_Default_3);
};

#endif
