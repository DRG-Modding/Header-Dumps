#ifndef UE4SS_SDK_UI_InfoScreen_DLCwidget_HPP
#define UE4SS_SDK_UI_InfoScreen_DLCwidget_HPP

class UUI_InfoScreen_DLCwidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Hover;
    class UWidgetAnimation* Click;
    class UButton* BannerButton;
    class USizeBox* BannerSizer;
    class UWidgetSwitcher* SwitcherDLC;
    float Width;
    float SegmentTime (seconds);
    TArray<class UGameDLC*> SteamDLCs;
    TArray<class UGameDLC*> XboxDLCs;
    TArray<class UGameDLC*> PS4DLCs;

    void GetAvailableDLCs(TArray<class UGameDLC*>& DLCs);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ShowNextWidget();
    void On Banner Clicked(class UGameDLC* dlc);
    void BndEvt__BannerButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__BannerButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void AnimClick();
    void ExecuteUbergraph_UI_InfoScreen_DLCwidget(int32 EntryPoint);
};

#endif
