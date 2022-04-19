#ifndef UE4SS_SDK__Menu_JobsV3_HPP
#define UE4SS_SDK__Menu_JobsV3_HPP

class U_Menu_JobsV3_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_ScrollBarBox_C* Basic_ScrollBarBox;
    class UBasic_ScrollBarBox_C* Basic_ScrollBarBox_1;
    class UITM_Job_Section_Header_C* ITM_Job_Section_Header;
    class UITM_Job_Section_Header_C* ITM_Job_Section_Header_157;
    class UJobs_Header_Assignment_Slot_C* Jobs_Header_Assignment_Slot;
    class UVerticalBox* JobsList;
    class UMENU_SpaceRigTemplate_C* MENU_SpaceRigTemplate;
    class UVerticalBox* WeeklyJobList;
    class UWND_JobsEntry_WeeklyV2_C* WND_JobsEntry_WeeklyV2;
    class UWND_JobsEntry_WeeklyV2_C* WND_JobsEntry_WeeklyV2_1;
    class UWND_JobsEntryV2_C* WND_JobsEntryV2;
    class UWND_JobsEntryV2_C* WND_JobsEntryV2_140;
    class UWND_JobsEntryV2_C* WND_JobsEntryV2_273;
    class UWND_JobsEntryV2_C* WND_JobsEntryV2_392;
    class UWND_JobsEntryV2_C* WND_JobsEntryV2_519;
    class UWND_Jobs_Entry_Base_C* LastUnfolded;

    void HasCompletedIntro(bool& OutCompleted);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void RefreshJobs();
    void AddJobEntry(class UCampaign* Campaign);
    void GetFSDPlayer(class AFSDPlayerController*& AsFSDPlayer Controller);
    void OnShown();
    void Back();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnCampaignCompleted_Event();
    void BuildList();
    void ExecuteUbergraph__Menu_JobsV3(int32 EntryPoint);
};

#endif
