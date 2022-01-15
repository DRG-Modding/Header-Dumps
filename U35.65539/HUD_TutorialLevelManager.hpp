#ifndef UE4SS_SDK_HUD_TutorialLevelManager_HPP
#define UE4SS_SDK_HUD_TutorialLevelManager_HPP

class UHUD_TutorialLevelManager_C : UTutorialLevelWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UW_TutorialContent_Base_C* BP_TutorialContentWidget_Base;
    UVerticalBox* WidgetHolder;
    UTutorialContentWidget* CurrContentWidget;

    void OnNewActiveTutorial(UTutorialContentWidget* Widget);
    void Construct();
    void ExecuteUbergraph_HUD_TutorialLevelManager(int32 EntryPoint, UTutorialContentWidget* K2Node_Event_Widget, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool CallFunc_IsValid_ReturnValue);
}

#endif
