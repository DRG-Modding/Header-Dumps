#ifndef UE4SS_SDK_Options_MouseKeyboard_CustomizeControls_HPP
#define UE4SS_SDK_Options_MouseKeyboard_CustomizeControls_HPP

class UOptions_MouseKeyboard_CustomizeControls_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Option_C* Basic_Option;
    class UVerticalBox* BindingsBox;
    class UBasic_ButtonWithControls_C* BTN_ResetToDefaults;
    class UBasic_ButtonCutCorner_C* Btn_Toggle;
    class UVerticalBox* ContentBox;
    bool IsOpen;

    void ContainsAnyName(FCustomKeySetting Button, const TArray<FName>& ActionNames, bool& Result);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void SetOpen(bool Index);
    void CreateBindingWidgets();
    void BndEvt__BTN_ResetToDefaults_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void Construct();
    void BndEvt__Btn_Toggle_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UBasic_ButtonCutCorner_C* Button);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Options_MouseKeyboard_CustomizeControls(int32 EntryPoint);
};

#endif
