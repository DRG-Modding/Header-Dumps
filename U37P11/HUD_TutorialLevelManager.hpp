#ifndef UE4SS_SDK_HUD_TutorialLevelManager_HPP
#define UE4SS_SDK_HUD_TutorialLevelManager_HPP

class UHUD_TutorialLevelManager_C : public UTutorialLevelWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UW_TutorialContent_Base_C* BP_TutorialContentWidget_Base;
    class UVerticalBox* WidgetHolder;
    class UTutorialContentWidget* CurrContentWidget;

    void OnNewActiveTutorial(class UTutorialContentWidget* Widget);
    void Construct();
    void ExecuteUbergraph_HUD_TutorialLevelManager(int32 EntryPoint);
};

#endif
