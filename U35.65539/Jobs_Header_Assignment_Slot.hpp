#ifndef UE4SS_SDK_Jobs_Header_Assignment_Slot_HPP
#define UE4SS_SDK_Jobs_Header_Assignment_Slot_HPP

class UJobs_Header_Assignment_Slot_C : UWND_Jobs_Entry_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_ButtonCutCorner_C* B_StopAssignment;
    UButton* Button_Outer;
    UTextBlock* DATA_RewardBrief;
    UImage* I_BG2;
    UImage* I_BG2_1;
    UImage* I_BG2_2;
    UImage* I_BG2_3;
    UImage* I_BG2_4;
    UImage* I_BG_Glow;
    UImage* I_CampaignIcon;
    UImage* I_CampaignIcon_1;
    UImage* I_O2;
    UImage* I_O2_1;
    UImage* Image_Assignment;
    UImage* Image_Assignment_1;
    UWidgetSwitcher* IsActive_WidgetSwitcher;
    UITM_CampaignProgress_NoBrackets_C* ITM_CampaignProgress_NoBrackets;
    UJobs_List_Element_BG_CutCorner_C* Jobs_List_Element_BG_CutCorner;
    UImage* outline;
    UImage* outline_1;
    UTextBlock* Text_AssignmentName;
    UTextBlock* Text_AssignmentName_1;
    UTextBlock* Text_MissionDescription;
    UTextBlock* Text_MissionDescription_1;
    UTextBlock* Text_PrefixName;
    UTextBlock* TextBlock_MainHeader;
    UTextBlock* TextBlock_MainHeader_2;
    UCampaign* Campaign;
    int32 MaxCharacters;

    void BndEvt__B_StopAssignment_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(UBasic_ButtonCutCorner_C* Button);
    void OnAnswer(bool Yes);
    void SetData(UCampaign* Campaign);
    void Refresh();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void Event_Updated();
    void ExecuteUbergraph_Jobs_Header_Assignment_Slot(int32 EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, UBasic_ButtonCutCorner_C* K2Node_ComponentBoundEvent_Button, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, UWindowManager* CallFunc_GetWindowManager_ReturnValue, FText CallFunc_Format_ReturnValue, UBasic_Popup_YesNoPrompt_C* CallFunc_OpenSingleUseWindow_ReturnValue, UCampaignManager* CallFunc_GetCampaingManager_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, bool K2Node_CustomEvent_Yes, UCampaign* K2Node_Event_Campaign, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, UTexture2D* CallFunc_GetPicture_ReturnValue, UWindowManager* CallFunc_GetWindowManager_ReturnValue_1, UWND_Assignment_Popup_C* CallFunc_OpenWindowFromClass_ReturnValue, Updated__DelegateSignature K2Node_CreateDelegate_OutputDelegate, OnYesNoClickedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FText CallFunc_TextToUpper_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor, ESlateVisibility K2Node_Select_Default, FString CallFunc_Conv_TextToString_ReturnValue, FString CallFunc_GetSubstring_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue);
}

#endif
