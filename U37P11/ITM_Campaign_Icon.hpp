#ifndef UE4SS_SDK_ITM_Campaign_Icon_HPP
#define UE4SS_SDK_ITM_Campaign_Icon_HPP

class UITM_Campaign_Icon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* CampaignIconGlow;
    class UImage* CampaignIcon_BG;
    class UImage* CampaignIcon_Border;
    class UImage* CampaignIcon_Glow;
    class USizeBox* CampaignIcon_Holder;
    class UImage* CampaignIcon_Mission;
    class UVerticalBox* VBOX_AssignmentMembers;
    bool PlayGlowAnim;

    void IsAnyMissionCampaign(TArray<class UGeneratedMission*>& missions, class AFSDPlayerState* Player, bool& IsOnMission);
    void PreConstruct(bool IsDesignTime);
    void SetCampaignIconData(const TArray<class UGeneratedMission*>& missions);
    void ExecuteUbergraph_ITM_Campaign_Icon(int32 EntryPoint);
};

#endif
