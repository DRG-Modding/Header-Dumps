#ifndef UE4SS_SDK_Options_Gamepad_EnableQuickSwap_HPP
#define UE4SS_SDK_Options_Gamepad_EnableQuickSwap_HPP

class UOptions_Gamepad_EnableQuickSwap_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Dots_C* Basic_Dots;
    class UButton* Button_Left;
    class UButton* Button_Right;
    class UWidgetSwitcher* ContentSwitcher;
    class UBasic_Image_C* Icon01;
    class UBasic_Image_C* Icon02;

    void Next(bool Forward);
    void Refresh();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_Left_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Right_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_Options_Gamepad_EnableQuickSwap(int32 EntryPoint);
};

#endif
