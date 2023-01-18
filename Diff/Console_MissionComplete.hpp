#ifndef UE4SS_SDK_Console_MissionComplete_HPP
#define UE4SS_SDK_Console_MissionComplete_HPP

class UConsole_MissionComplete_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_0;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_1;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_3;
    class UBasic_Menu_WindowBG_C* Basic_Menu_WindowBG;
    class UBasic_Menu_WindowBG_C* Basic_Menu_WindowBG_C_0;
    class UBasic_Menu_WindowBG_C* Basic_Menu_WindowBG_C_1;
    class UBasic_Menu_WindowBG_C* Basic_Menu_WindowBG_C_2;
    class UBasic_Menu_WindowBG_C* Basic_Menu_WindowBG_C_3;
    class UBasic_Menu_WindowBG_C* Basic_Menu_WindowBG_C_5;
    class UBasic_Menu_WindowBG_C* Basic_Menu_WindowBG_C_6;
    class UTextBlock* Data_Complexity;
    class UTextBlock* DATA_CreditsEarned;
    class UTextBlock* Data_HazardLevel;
    class UTextBlock* Data_Length;
    class UTextBlock* DATA_MissionTime;
    class UTextBlock* Data_TotalBonus;
    class UTextBlock* DATA_XPEarned;
    class UImage* Icon_XP;
    class UImage* Image_1;
    class UImage* Image_41;
    class UITM_MisSel_DotMarker_C* ITM_MisSel_DotMarke_Length;
    class UITM_MisSel_DotMarker_C* ITM_MisSel_DotMarker_Complexity;
    class UITM_WarningWithPercent_C* ITM_WarningWithPercent;
    class UVerticalBox* MainScreen;
    class UVerticalBox* MissionFailed;
    class UVerticalBox* missionSuccessful;
    class UVerticalBox* MissionTimeHolder;
    class UTextBlock* TEXT_CreditsEarned;
    class UTextBlock* Text_MissionStatus;
    class UTextBlock* TEXT_MissionTime;
    class UTextBlock* TextBlock_1;
    class UTextBlock* TextBlock_3;
    class UTextBlock* TextBlock_4;
    class UTextBlock* TextBlock_5;
    class UVerticalBox* VB_Warnings;
    class UWidgetSwitcher* WidgetSwitcher_Success;

    void GetMissionResult(class UMissionResultInfo*& MissionResultInfo);
    void PreConstruct(bool IsDesignTime);
    void BeginScreen();
    void Construct();
    void ExecuteUbergraph_Console_MissionComplete(int32 EntryPoint);
};

#endif
