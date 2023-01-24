#ifndef UE4SS_SDK_HUD_Milestone_Manager_HPP
#define UE4SS_SDK_HUD_Milestone_Manager_HPP

class UHUD_Milestone_Manager_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* MilestoneRoot;

    void PreConstruct(bool IsDesignTime);
    void OnMilestoneReached();
    void ExecuteUbergraph_HUD_Milestone_Manager(int32 EntryPoint);
};

#endif
