#ifndef UE4SS_SDK_Options_Gamepad_Turn180Mode_HPP
#define UE4SS_SDK_Options_Gamepad_Turn180Mode_HPP

class UOptions_Gamepad_Turn180Mode_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Dots_C* Basic_Dots;
    class UBasic_Label_C* Basic_Label;
    class UButton* Button_Left;
    class UButton* Button_Right;
    class UBasic_Image_C* ButtonIcon;
    class UWidgetSwitcher* ContentSwitcher;
    class UBasic_Image_C* StickIcon;
    TArray<ETurn180Mode> Modes;

    void Next(bool Forward);
    void SetMode(ETurn180Mode InMode);
    void Construct();
    void OnRefresh();
    void BndEvt__Button_Left_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Right_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Options_Gamepad_Turn180Mode(int32 EntryPoint);
};

#endif
