#ifndef UE4SS_SDK_UI_PendingRewardScreen_HPP
#define UE4SS_SDK_UI_PendingRewardScreen_HPP

class UUI_PendingRewardScreen_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UVerticalBox* CreditsBox;
    class UTextBlock* CreditsLabel;
    class UImage* Icon_XP;
    class UImage* Image_1;
    class UITM_MissionComplete_ResourceBox_C* UI_MissionCompleted_Minerals;
    class UVerticalBox* XPBox;
    class UTextBlock* XPLabel;
    FPendingRewardsStats Stats;
    FPendingRewards Rewards;

    void Construct();
    void ExecuteUbergraph_UI_PendingRewardScreen(int32 EntryPoint);
};

#endif
