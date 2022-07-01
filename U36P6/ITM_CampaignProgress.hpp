#ifndef UE4SS_SDK_ITM_CampaignProgress_HPP
#define UE4SS_SDK_ITM_CampaignProgress_HPP

class UITM_CampaignProgress_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical;
    class UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical_154;
    class UImage* BG__Top;
    class UImage* BG_L;
    class UImage* BG_Mid;
    class UImage* BG_R;
    class UHorizontalBox* Box_CampaignItems;
    class UImage* Bracket_L;
    class UImage* Bracket_R;
    class UTextBlock* DATA_AssignmentName;
    class UITM_CampaignItem_C* ITM_CampaignItem;
    class UITM_CampaignItem_C* ITM_CampaignItem_0;
    class UCampaign* Campaign;
    bool ShowActiveCampaign;
    class UBasic_ToolTip_C* ToolTip;
    bool UseCustomScale;
    FVector2D CustomScaleActive;
    FVector2D CustomScaleCompleted;

    void ShowCampaignProgress(class UCampaign* Campaign, int32 Progress);
    void TryPingMission(int32 missionIndex);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Update_Campaign(class UCampaign* Campaign);
    void ExecuteUbergraph_ITM_CampaignProgress(int32 EntryPoint);
};

#endif
