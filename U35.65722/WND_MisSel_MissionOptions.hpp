#ifndef UE4SS_SDK_WND_MisSel_MissionOptions_HPP
#define UE4SS_SDK_WND_MisSel_MissionOptions_HPP

class UWND_MisSel_MissionOptions_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBlurBackground_C* BlurBackground;
    class UITM_BigButton_C* BTN_ConfirmMission2;
    class UTextBlock* DataHazardBonus;
    class UTextBlock* DATAJoinModeDescription;
    class UTextBlock* DATAJoinModeHeader;
    class URichTextBlock* DATALockMessage;
    class UTextBlock* DATASoloModeDescription;
    class UTextBlock* DATASoloModeHeader;
    class UTextBlock* DATATeamModeDescription;
    class UTextBlock* DATATeamModeHeader;
    class UImage* Icon_SoloMode;
    class UImage* Icon_TeamMode;
    class UImage* Image_JoinMode;
    class UITM_OnlineRestricted_C* ITM_OnlineRestricted;
    class UBorder* JoinMode;
    class UHorizontalBox* LockedBar;
    class UBorder* LockedBarHolder;
    class UTextBlock* MissionConfigTxt;
    class UBasic_PasswordField_C* ServerPassword;
    class UBorder* SoloMode;
    class UBorder* TeamMode;
    class UTextBlock* TXTWorkEnvironment;
    class UVerticalBox* VerticalBox_StartMission;
    class UBasic_OptionSwitcher_C* WorkEnvironmentSelector;
    FWND_MisSel_MissionOptions_COnStartMission OnStartMission;
    void OnStartMission();
    class UGeneratedMission* mission;
    TEnumAsByte<EMissionSelection_Mode::Type> Mode;
    FWND_MisSel_MissionOptions_COnJoinMission OnJoinMission;
    void OnJoinMission();
    bool FriendsOnly;
    FWND_MisSel_MissionOptions_COnDifficultyChanged OnDifficultyChanged;
    void OnDifficultyChanged(class UDifficultySetting* NewDifficulty, class UGeneratedMission* mission);
    FWND_MisSel_MissionOptions_COnStartSoloMission OnStartSoloMission;
    void OnStartSoloMission();

    void HandleKeyDown(const FKeyEvent& KeyEvent, bool& OutHandled, FEventReply& OutReply, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_IsVisible_ReturnValue, FEventReply CallFunc_Unhandled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Handle_Key_Down_OutHandled, FEventReply CallFunc_Handle_Key_Down_OutReply);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEventbool CallFunc_HandleKeyDown_OutHandled, FEventReply CallFunc_HandleKeyDown_OutReply);
    class UDifficultySetting* GetSelectedDifficulty(class UGameData* CallFunc_GetFSDGameData_ReturnValue, int32 CallFunc_GetSelectedIndex_Index, class UDifficultySetting* CallFunc_GetDifficultySetting_ReturnValue);
    void UpdateConfirmButton(class UDifficultySetting* Difficulty, FText UnlockText, bool IsLocked, class UDifficultySetting* CallFunc_GetSelectedDifficulty_ReturnValue, bool CallFunc_IsUnLocked_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
    void SetMissionLocked(bool IsLocked, FText Explanation, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void HandleModeChange(TEnumAsByte<EMissionSelection_Mode::Type> Selection, ESlateVisibility Temp_byte_Variable, bool K2Node_SwitchEnum_CmpSuccess, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_3, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5, EFSDTargetPlatform Temp_byte_Variable_6, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue);
    void GetPassword(FText& Password, bool& HasPassword, FText CallFunc_GetPassword_Password, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
    bool IsFriendsOnly();
    void UpdateHazardBonus(bool Temp_bool_Variable, FText Temp_text_Variable, int32 CallFunc_GetSelectedIndex_Index, class UGameData* CallFunc_GetFSDGameData_ReturnValue, class UDifficultySetting* CallFunc_GetDifficultySetting_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, FText CallFunc_Conv_FloatToText_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, FText K2Node_Select_Default);
    void OnFailure_E07C54DA4555FCCB80821BA994BEDE78();
    void OnSuccess_E07C54DA4555FCCB80821BA994BEDE78();
    void OnFailure_E07C54DA4555FCCB80821BA9DC34619D();
    void OnSuccess_E07C54DA4555FCCB80821BA9DC34619D();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ShowMode(TEnumAsByte<EMissionSelection_Mode::Type> Mode);
    void SetMission(class UGeneratedMission* mission);
    void BndEvt__Basic_InputField_K2Node_ComponentBoundEvent_13_OnTextChanged__DelegateSignature(FText Text);
    void BndEvt__Basic_InputField_K2Node_ComponentBoundEvent_14_OnTextCommitted__DelegateSignature(FText Text, uint8 CommitMethod);
    void BndEvt__WorkEnvironmentSelector_K2Node_ComponentBoundEvent_27_OnSelectionChanged__DelegateSignature(FText Value, int32 Index);
    void ResetSelectedDifficulty();
    void BndEvt__BTN_ConfirmMission2_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void ExecuteUbergraph_WND_MisSel_MissionOptions(int32 EntryPoint, FExecuteUbergraph_WND_MisSel_MissionOptionsK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, EFSDTargetPlatform Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5, uint8 CallFunc_MakeLiteralByte_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, FExecuteUbergraph_WND_MisSel_MissionOptionsK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue, bool CallFunc_IsInActiveSession_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue_1, bool CallFunc_IsInActiveSession_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, FExecuteUbergraph_WND_MisSel_MissionOptionsK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, bool K2Node_Event_IsDesignTime, TEnumAsByte<EMissionSelection_Mode::Type> K2Node_CustomEvent_Mode, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor, class UGeneratedMission* K2Node_CustomEvent_Mission, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, FText K2Node_ComponentBoundEvent_Text_1, ESlateVisibility K2Node_Select_Default, FText K2Node_ComponentBoundEvent_Text, uint8 K2Node_ComponentBoundEvent_CommitMethod, FText K2Node_ComponentBoundEvent_Value, int32 K2Node_ComponentBoundEvent_Index, class UGameData* CallFunc_GetFSDGameData_ReturnValue, class UDifficultySetting* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_Option_Index, bool K2Node_SwitchEnum_CmpSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, class AFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue_2, bool CallFunc_IsLocked_ReturnValue, class UDifficultyManager* CallFunc_GetDifficultyManager_ReturnValue, int32 CallFunc_GetSelectedIndex_Index, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, class UDifficultySetting* CallFunc_SelectDifficulty_ReturnValue, class UDifficultySetting* CallFunc_GetSelectedDifficulty_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_2, FSlateColor K2Node_MakeStruct_SlateColor_1, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue_3, class UDifficultyManager* CallFunc_GetDifficultyManager_ReturnValue_1, int32 CallFunc_GetSelectedIndex_Index_1, class UDifficultySetting* CallFunc_SelectDifficulty_ReturnValue_1, bool CallFunc_Should_Show_Online_Restriction_Should_Show, bool CallFunc_SetVisibilityIf_IsVisible, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_2, FExecuteUbergraph_WND_MisSel_MissionOptionsK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, FText CallFunc_Conv_StringToText_ReturnValue);
    void OnStartSoloMission__DelegateSignature();
    void OnDifficultyChanged__DelegateSignature(class UDifficultySetting* NewDifficulty, class UGeneratedMission* mission);
    void OnJoinMission__DelegateSignature();
    void OnStartMission__DelegateSignature();
};

#endif
