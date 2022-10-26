#ifndef UE4SS_SDK_ITM_CampaignItem_HPP
#define UE4SS_SDK_ITM_CampaignItem_HPP

class UITM_CampaignItem_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* ANIM_PingIcon;
    class UWidgetAnimation* ANIM_ActiveMission;
    class UImage* BackgroundGlow;
    class UImage* ConnectorLine;
    class UImage* InnerBorder;
    class UImage* InnerFiller;
    class UImage* MissionIcon;
    class UImage* OuterBorder;
    class UImage* OuterFiller;
    class UOverlay* Overlay_Outer;
    class UImage* PingGlow;
    class USizeBox* SizeBox_1;
    class UCampaignMission* mission;
    bool FirstMission;
    bool Complete;
    bool Active;
    FVector2D CompletedScale;
    FVector2D ActiveScale;

    void GetMissionIcon(class UTexture2D*& Mission Icon);
    void Ping();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnPingStarted();
    void OnPingFinished();
    void SetScale(FVector2D CompletedScale, FVector2D ActiveScale);
    void ExecuteUbergraph_ITM_CampaignItem(int32 EntryPoint);
};

#endif
