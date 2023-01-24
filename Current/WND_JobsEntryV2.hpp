#ifndef UE4SS_SDK_WND_JobsEntryV2_HPP
#define UE4SS_SDK_WND_JobsEntryV2_HPP

class UWND_JobsEntryV2_C : public UWND_Jobs_Entry_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Assignment_Image;
    class UHorizontalBox* Box_CampaignItems;
    class UButton* Button_Main;
    class UImage* I_BG2;
    class UImage* I_BG2_2;
    class UImage* I_O2;
    class UITM_Prerequisites_C* ITM_Prerequisites;
    class UJobs_List_Element_BG_CutCorner_C* Jobs_List_Element_BG_CutCorner_1;
    class UOverlay* Overlay_Scaler;
    class UOverlay* PreReqOverlay;
    class UTextBlock* Text_AssignmentName;
    class UCampaign* Campaign;
    bool IsFolded;
    class UMaterialInstanceDynamic* DynMaterial;

    bool CanStartCampaign(class UCampaign* InCampaign);
    bool VisibleAndEnabled(class UWidget* Widget);
    void SetInfo();
    bool IsActiveCampaign();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void SetData(class UCampaign* Campaign);
    void Refresh();
    void Event_Updated();
    void ExecuteUbergraph_WND_JobsEntryV2(int32 EntryPoint);
};

#endif
