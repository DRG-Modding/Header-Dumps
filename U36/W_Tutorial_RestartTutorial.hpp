#ifndef UE4SS_SDK_W_Tutorial_RestartTutorial_HPP
#define UE4SS_SDK_W_Tutorial_RestartTutorial_HPP

class UW_Tutorial_RestartTutorial_C : public UW_TutorialContent_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FTimerHandle TimerHandle;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnCloseTutorial();
    void ExecuteUbergraph_W_Tutorial_RestartTutorial(int32 EntryPoint);
};

#endif
