#ifndef UE4SS_SDK_Jobs_Header_Assignment_Slot_HPP
#define UE4SS_SDK_Jobs_Header_Assignment_Slot_HPP

class UJobs_Header_Assignment_Slot_C : public UWND_Jobs_Entry_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_ButtonCutCorner_C* B_StopAssignment;
    class UButton* Button_Outer;
    class UTextBlock* DATA_RewardBrief;
    class UImage* I_BG2;
    class UImage* I_BG2_1;
    class UImage* I_BG2_2;
    class UImage* I_BG2_3;
    class UImage* I_BG2_4;
    class UImage* I_BG_Glow;
    class UImage* I_CampaignIcon;
    class UImage* I_CampaignIcon_1;
    class UImage* I_O2;
    class UImage* I_O2_1;
    class UImage* Image_Assignment;
    class UImage* Image_Assignment_1;
    class UWidgetSwitcher* IsActive_WidgetSwitcher;
    class UITM_CampaignProgress_NoBrackets_C* ITM_CampaignProgress_NoBrackets;
    class UJobs_List_Element_BG_CutCorner_C* Jobs_List_Element_BG_CutCorner;
    class UImage* outline;
    class UImage* outline_1;
    class UTextBlock* Text_AssignmentName;
    class UTextBlock* Text_AssignmentName_1;
    class UTextBlock* Text_MissionDescription;
    class UTextBlock* Text_MissionDescription_1;
    class UTextBlock* Text_PrefixName;
    class UTextBlock* TextBlock_MainHeader;
    class UTextBlock* TextBlock_MainHeader_2;
    class UCampaign* Campaign;
    int32 MaxCharacters;

    void BndEvt__B_StopAssignment_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UBasic_ButtonCutCorner_C* Button);
    void OnAnswer(bool Yes);
    void SetData(class UCampaign* Campaign);
    void Refresh();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void Event_Updated();
    void ExecuteUbergraph_Jobs_Header_Assignment_Slot(int32 EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, class UBasic_ButtonCutCorner_C* K2Node_ComponentBoundEvent_Button, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, FText CallFunc_Format_ReturnValue, class UBasic_Popup_YesNoPrompt_C* CallFunc_OpenSingleUseWindow_ReturnValue, class UCampaignManager* CallFunc_GetCampaingManager_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, bool K2Node_CustomEvent_Yes, class UCampaign* K2Node_Event_Campaign, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, class UTexture2D* CallFunc_GetPicture_ReturnValue, class UWindowManager* CallFunc_GetWindowManager_ReturnValue_1, class UWND_Assignment_Popup_C* CallFunc_OpenWindowFromClass_ReturnValue, FExecuteUbergraph_Jobs_Header_Assignment_SlotK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_Jobs_Header_Assignment_SlotK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FText CallFunc_TextToUpper_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor, ESlateVisibility K2Node_Select_Default, FString CallFunc_Conv_TextToString_ReturnValue, FString CallFunc_GetSubstring_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue);
};

#endif
