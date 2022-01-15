#ifndef UE4SS_SDK_ITEM_SpaceRig_PlayerRank_HPP
#define UE4SS_SDK_ITEM_SpaceRig_PlayerRank_HPP

class UITEM_SpaceRig_PlayerRank_C : UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBorder* Border_NameDivider2;
    UBorder* Border_PlayerName;
    UBorder* Border_PlayerRank;
    UTextBlock* DataCredits;
    UICON_Rank_C* ICON_Rank;
    UImage* Image_139;
    UITM_TopBar_ResourceCounter_C* ITM_TopBar_ResourceCounter;
    UTextBlock* PlayerRank;
    UTextBlock* TXT_PlayerName;
    UUI_NameTags_C* UI_NameTags;

    void SetPlayerName(FText Temp_text_Variable, EFSDTargetPlatform Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, UFSDPlayerState* CallFunc_GetFSDPlayerState_ReturnValue, bool CallFunc_GetGameOwnerStatus_ReturnValue, UFSDPlayerState* CallFunc_GetFSDPlayerState_ReturnValue_1, UFSDPlayerState* CallFunc_GetFSDPlayerState_ReturnValue_2, FString CallFunc_GetPlayerName_ReturnValue, FString CallFunc_GetPlayerName_ReturnValue_1, FText CallFunc_Conv_StringToText_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FText Temp_text_Variable_1, UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_Select_Default, bool Temp_bool_Variable_5, FText K2Node_Select_Default_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    void Construct();
    void Update();
    void OnCreditsChanged_Event();
    void OnPlayerProgressChanged(UFSDPlayerState* PlayerState, FPlayerProgress Progress);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITEM_SpaceRig_PlayerRank(int32 EntryPoint, CreditsChangedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, PlayerProgressChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UFSDPlayerState* CallFunc_GetFSDPlayerState_ReturnValue, UFSDPlayerState* CallFunc_GetFSDPlayerState_ReturnValue_1, FText CallFunc_Conv_IntToText_ReturnValue, UFSDPlayerState* K2Node_CustomEvent_PlayerState, FPlayerProgress K2Node_CustomEvent_progress, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor CallFunc_MenuColors_OutputColor_2, FLinearColor CallFunc_MenuColors_OutputColor_3, UGameData* CallFunc_GetFSDGameData_ReturnValue, const FText CallFunc_GetPlayerRankName_ReturnValue, FText CallFunc_TextToUpper_ReturnValue);
}

#endif
