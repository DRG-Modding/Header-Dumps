#ifndef UE4SS_SDK_Jobs_Header_Assignment_Slot_HPP
#define UE4SS_SDK_Jobs_Header_Assignment_Slot_HPP

class UJobs_Header_Assignment_Slot_C : public UWND_Jobs_Entry_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* AssignmentSelected;
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

    void AbortPressed(bool& Handled);
    void BndEvt__B_StopAssignment_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UBasic_ButtonCutCorner_C* Button);
    void OnAnswer(bool Yes);
    void SetData(class UCampaign* Campaign);
    void Refresh();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void Event_Updated();
    void ExecuteUbergraph_Jobs_Header_Assignment_Slot(int32 EntryPoint);
};

#endif
