#ifndef UE4SS_SDK_WND_SeasonEventBonus2Rows_HPP
#define UE4SS_SDK_WND_SeasonEventBonus2Rows_HPP

class UWND_SeasonEventBonus2Rows_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FlipRows;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UButton* Button_BackRowBlocker;
    class UHorizontalBox* HorizontalBox_BackRow;
    class UHorizontalBox* HorizontalBox_FrontRow;
    class UOverlay* Overlay_backRow;

    class UWidget* Get_Button_BackRowBlocker_ToolTipWidget();
    void SetupRows(int32 Completed, int32 claimed, int32 Total);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnScripChallengeUpdated_Event();
    void OnBonusClaimed();
    void ExecuteUbergraph_WND_SeasonEventBonus2Rows(int32 EntryPoint);
};

#endif
