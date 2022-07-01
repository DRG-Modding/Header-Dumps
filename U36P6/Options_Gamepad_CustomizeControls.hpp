#ifndef UE4SS_SDK_Options_Gamepad_CustomizeControls_HPP
#define UE4SS_SDK_Options_Gamepad_CustomizeControls_HPP

class UOptions_Gamepad_CustomizeControls_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Option_C* Basic_Option;
    class UVerticalBox* BindingsBox;
    class UBasic_ButtonWithControls_C* BTN_ResetToDefaults;
    class UBasic_ButtonCutCorner_C* Btn_Toggle;
    class UVerticalBox* ContentBox;
    class UBasic_Option_C* OpenChat;
    class UOptions_Gamepad_EnableChat_C* Options_Gamepad_EnableChat;
    class UOptions_Gamepad_EnableQuickSwap_C* Options_Gamepad_EnableQuickSwap;
    class UOptions_Gamepad_SwapThumbsticks_C* Options_SwapThumbsticks;
    bool IsOpen;

    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void SetOpen(bool Index);
    void CreateBindingWidgets();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__Btn_Toggle_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UBasic_ButtonCutCorner_C* Button);
    void BndEvt__BTN_ResetToDefaults_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void ExecuteUbergraph_Options_Gamepad_CustomizeControls(int32 EntryPoint);
};

#endif
