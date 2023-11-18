#ifndef UE4SS_SDK_ITM_SeasonContentToggle_HPP
#define UE4SS_SDK_ITM_SeasonContentToggle_HPP

class UITM_SeasonContentToggle_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimHover;
    class USizeBox* BoxSizer;
    class UButton* CheckButton;
    class UBasic_CheckBox_C* CHK_IsUsingSeasonContent;
    class UImage* InfoImage;
    class UCanvasPanel* RootCanvas;
    class UImage* SeasonImage;
    bool PreviewMode;
    int32 Height;

    class UWidget* CreateInfoToolTip();
    class UWidget* CreateToolTip();
    void No_E59D9B694ED0DF638B899C84F7ED8DB2();
    void Yes_E59D9B694ED0DF638B899C84F7ED8DB2();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__ITM_SeasonContentToggle_CHK_IsUsingSeasonContent_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void Refresh();
    void RefreshToolTip();
    void BndEvt__ITM_SeasonContentToggle_CheckButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ITM_SeasonContentToggle_CheckButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ITM_SeasonContentToggle_CheckButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_ITM_SeasonContentToggle(int32 EntryPoint);
};

#endif
