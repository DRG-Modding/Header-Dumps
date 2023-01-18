#ifndef UE4SS_SDK_SCREEN_MissionComplete_Base_HPP
#define UE4SS_SDK_SCREEN_MissionComplete_Base_HPP

class USCREEN_MissionComplete_Base_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    FSCREEN_MissionComplete_Base_COnMarkReadyToContinue OnMarkReadyToContinue;
    void OnMarkReadyToContinue();
    FSCREEN_MissionComplete_Base_COnShowCursor OnShowCursor;
    void OnShowCursor(class UUserWidget* Widget);
    FSCREEN_MissionComplete_Base_COnTransitionToNormalEndScreen OnTransitionToNormalEndScreen;
    void OnTransitionToNormalEndScreen();

    void InitializeScreen();
    void ExecuteUbergraph_SCREEN_MissionComplete_Base(int32 EntryPoint);
    void OnTransitionToNormalEndScreen__DelegateSignature();
    void OnShowCursor__DelegateSignature(class UUserWidget* Widget);
    void OnMarkReadyToContinue__DelegateSignature();
};

#endif
