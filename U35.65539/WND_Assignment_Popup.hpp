#ifndef UE4SS_SDK_WND_Assignment_Popup_HPP
#define UE4SS_SDK_WND_Assignment_Popup_HPP

class UWND_Assignment_Popup_C : UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_ButtonCutCorner_C* B_AbortAssignment;
    UBasic_ButtonCutCorner_C* B_ClosePopup;
    UBasic_ButtonCutCorner_C* B_StartAssignment;
    UImage* Background;
    UImage* Image_Assignment;
    UITM_CampaignProgress_NoBrackets_C* ITM_CampaignProgress_NoBrackets;
    UImage* outline;
    UWidgetSwitcher* Switcher_AssignmentButton;
    UTextBlock* Text_AssignmentName_1;
    UTextBlock* Text_AssignmentPrefix;
    UTextBlock* Text_DescBody;
    UTextBlock* Text_DescHeader;
    UTextBlock* Text_RewardFluff;
    UTextBlock* Text_RewardHeader;
    UTextBlock* Text_RewardInfo;
    UCampaign* Campaign;
    FWND_Assignment_Popup_CUpdated Updated;
    void Updated();

    void BndEvt__B_ClosePopup_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(UBasic_ButtonCutCorner_C* Button);
    void BndEvt__B_StartAssignment_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(UBasic_ButtonCutCorner_C* Button);
    void BndEvt__B_AbortAssignment_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(UBasic_ButtonCutCorner_C* Button);
    void SetData(UCampaign* Campaign);
    void PreConstruct(bool IsDesignTime);
    void OnAnswer(bool Yes);
    void ExecuteUbergraph_WND_Assignment_Popup(int32 EntryPoint, OnYesNoClickedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UCampaignManager* CallFunc_GetCampaingManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, UBasic_ButtonCutCorner_C* K2Node_ComponentBoundEvent_Button_2, UBasic_ButtonCutCorner_C* K2Node_ComponentBoundEvent_Button_1, UBasic_ButtonCutCorner_C* K2Node_ComponentBoundEvent_Button, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, TSubclassOf<UCampaign> CallFunc_GetObjectClass_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, UCampaign* K2Node_CustomEvent_Campaign, FText CallFunc_TextToUpper_ReturnValue, FText CallFunc_TextToUpper_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, bool K2Node_Event_IsDesignTime, UTexture2D* CallFunc_GetPicture_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, UBasic_Popup_YesNoPrompt_C* CallFunc_OpenSingleUseWindow_ReturnValue, UCampaignManager* CallFunc_GetCampaingManager_ReturnValue_1, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, bool K2Node_CustomEvent_Yes);
    void Updated__DelegateSignature();
}

#endif
