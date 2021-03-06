#ifndef UE4SS_SDK_WND_Assignment_Popup_HPP
#define UE4SS_SDK_WND_Assignment_Popup_HPP

class UWND_Assignment_Popup_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_ButtonCutCorner_C* B_AbortAssignment;
    class UBasic_ButtonCutCorner_C* B_ClosePopup;
    class UBasic_ButtonCutCorner_C* B_StartAssignment;
    class UImage* Background;
    class UImage* Image_Assignment;
    class UITM_CampaignProgress_NoBrackets_C* ITM_CampaignProgress_NoBrackets;
    class UImage* outline;
    class UWidgetSwitcher* Switcher_AssignmentButton;
    class UTextBlock* Text_AssignmentName_1;
    class UTextBlock* Text_AssignmentPrefix;
    class UTextBlock* Text_DescBody;
    class UTextBlock* Text_DescHeader;
    class UTextBlock* Text_RewardFluff;
    class UTextBlock* Text_RewardHeader;
    class UTextBlock* Text_RewardInfo;
    class UCampaign* Campaign;
    FWND_Assignment_Popup_CUpdated Updated;
    void Updated();

    void BndEvt__B_ClosePopup_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UBasic_ButtonCutCorner_C* Button);
    void BndEvt__B_StartAssignment_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UBasic_ButtonCutCorner_C* Button);
    void BndEvt__B_AbortAssignment_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UBasic_ButtonCutCorner_C* Button);
    void SetData(class UCampaign* Campaign);
    void PreConstruct(bool IsDesignTime);
    void OnAnswer(bool Yes);
    void ExecuteUbergraph_WND_Assignment_Popup(int32 EntryPoint, FExecuteUbergraph_WND_Assignment_PopupK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UCampaignManager* CallFunc_GetCampaingManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UBasic_ButtonCutCorner_C* K2Node_ComponentBoundEvent_Button_2, class UBasic_ButtonCutCorner_C* K2Node_ComponentBoundEvent_Button_1, class UBasic_ButtonCutCorner_C* K2Node_ComponentBoundEvent_Button, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, TSubclassOf<class UCampaign> CallFunc_GetObjectClass_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, class UCampaign* K2Node_CustomEvent_Campaign, FText CallFunc_TextToUpper_ReturnValue, FText CallFunc_TextToUpper_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, bool K2Node_Event_IsDesignTime, class UTexture2D* CallFunc_GetPicture_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UBasic_Popup_YesNoPrompt_C* CallFunc_OpenSingleUseWindow_ReturnValue, class UCampaignManager* CallFunc_GetCampaingManager_ReturnValue_1, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, bool K2Node_CustomEvent_Yes);
    void Updated__DelegateSignature();
};

#endif
