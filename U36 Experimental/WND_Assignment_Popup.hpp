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
    void ExecuteUbergraph_WND_Assignment_Popup(int32 EntryPoint);
    void Updated__DelegateSignature();
};

#endif
