#ifndef UE4SS_SDK_WND_SeasonEventBonus_Plague_HPP
#define UE4SS_SDK_WND_SeasonEventBonus_Plague_HPP

class UWND_SeasonEventBonus_Plague_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FlipRows;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UCanvasPanel* Canvas_BackRow;
    class UCanvasPanel* Canvas_FrontRow;
    class UImage* I_Container_1;
    class UImage* I_Container_2;
    class UImage* I_Container_3;
    class UImage* I_Container_4;
    class UImage* Image_92;
    class UImage* Image_Background;
    class UImage* Image_Line;
    class UImage* Image_Line_1;
    class UImage* Image_Line_2;
    class UImage* Image_Line_3;
    class UImage* Image_Line_4;
    class UImage* Image_Line_5;
    class UImage* Image_Line_6;
    class UImage* Image_Line_7;
    class UImage* Image_Line_8;
    class UImage* Image_Line_9;
    class UImage* Image_Line_10;
    class UImage* Image_Line_11;
    class UImage* Image_Line_12;
    class UImage* Image_Line_13;
    class UImage* Image_Line_14;
    class UImage* Image_Line_15;
    class UImage* Image_Line_16;
    class UITM_SeasonPlagueHeartBonus_C* ITM_SeasonPlagueHeartBonus;
    class UITM_SeasonPlagueHeartBonus_C* ITM_SeasonPlagueHeartBonus_1;
    class UITM_SeasonPlagueHeartBonus_C* ITM_SeasonPlagueHeartBonus_2;
    class UITM_SeasonPlagueHeartBonus_C* ITM_SeasonPlagueHeartBonus_3;
    class UITM_SeasonPlagueHeartBonus_C* ITM_SeasonPlagueHeartBonus_4;
    class UITM_SeasonPlagueHeartBonus_C* ITM_SeasonPlagueHeartBonus_5;
    class UITM_SeasonPlagueHeartBonus_C* ITM_SeasonPlagueHeartBonus_6;
    class UITM_SeasonPlagueHeartBonus_C* ITM_SeasonPlagueHeartBonus_7;
    class UITM_SeasonPlagueHeartBonus_C* ITM_SeasonPlagueHeartBonus_8;
    class UITM_SeasonPlagueHeartBonus_C* ITM_SeasonPlagueHeartBonus_9;
    class UITM_SeasonPlagueHeartBonus_C* ITM_SeasonPlagueHeartBonus_10;
    class UITM_SeasonPlagueHeartBonus_C* ITM_SeasonPlagueHeartBonus_11;
    class UITM_SeasonPlagueHeartBonus_C* ITM_SeasonPlagueHeartBonus_12;
    class UITM_SeasonPlagueHeartBonus_C* ITM_SeasonPlagueHeartBonus_13;
    class UITM_SeasonPlagueHeartBonus_C* ITM_SeasonPlagueHeartBonus_14;
    class UOverlay* Overlay_Rows;
    class UOverlay* Overlay_Vial;
    int32 TempScrip;
    bool IsAnimating;
    float Percent to Next Scrip;
    TArray<class UITM_SeasonPlagueHeartBonus_C*> BonusWidgets;
    class UMissionStat* MissionStat;
    int32 LastClaimedScripIndex;
    int32 NumberOfFrontRowScrip;

    class UWidget* Get_Button_BackRowBlocker_ToolTipWidget();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnShown();
    void OnBonusClaimed();
    void SetRowLooks(class UCanvasPanel* Row, bool IsInFront);
    void MoveToFront(class UCanvasPanel* Row);
    void ScaleWidgets(class UCanvasPanel* Row, bool ScaleDown);
    void ExecuteUbergraph_WND_SeasonEventBonus_Plague(int32 EntryPoint);
};

#endif
