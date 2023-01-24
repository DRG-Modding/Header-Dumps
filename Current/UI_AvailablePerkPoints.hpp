#ifndef UE4SS_SDK_UI_AvailablePerkPoints_HPP
#define UE4SS_SDK_UI_AvailablePerkPoints_HPP

class UUI_AvailablePerkPoints_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* PingAnim;
    class UTextBlock* AmountText;
    class USpacer* IconSpacer;
    class UImage* PerkIcon;
    int32 FontSize;
    float Image Size;
    float Spacing;
    float CurrentPerkPoints;
    int32 TargetPerkPoints;
    bool DoCountAnimation;

    void CountPerkPoints(float DeltaTime);
    void SetPerkPointsText(int32 Points);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnPerkPointsChanged(int32 PerkPoints, int32 Change);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnPingAnimFinished();
    void ExecuteUbergraph_UI_AvailablePerkPoints(int32 EntryPoint);
};

#endif
