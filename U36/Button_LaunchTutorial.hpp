#ifndef UE4SS_SDK_Button_LaunchTutorial_HPP
#define UE4SS_SDK_Button_LaunchTutorial_HPP

class UButton_LaunchTutorial_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_ButtonCutCorner_C* Basic_ButtonCutCorner;

    void OnPlayerJoined(class AFSDPlayerState* PlayerState);
    void OnPlayerLeave_Event(class AFSDPlayerState* PlayerState);
    void BndEvt__Basic_ButtonCutCorner_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UBasic_ButtonCutCorner_C* Button);
    void UpdateButtonVisibility();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Button_LaunchTutorial(int32 EntryPoint);
};

#endif
