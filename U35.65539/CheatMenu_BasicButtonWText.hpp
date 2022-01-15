#ifndef UE4SS_SDK_CheatMenu_BasicButtonWText_HPP
#define UE4SS_SDK_CheatMenu_BasicButtonWText_HPP

class UCheatMenu_BasicButtonWText_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UButton* Button_Base;
    UTextBlock* TextBlock_3;
    FText Button Text;
    FCheatMenu_BasicButtonWText_COnClicked OnClicked;
    void OnClicked(UCheatMenu_BasicButtonWText_C* Button);
    FCheatMenu_BasicButtonWText_COnPressed OnPressed;
    void OnPressed();
    FCheatMenu_BasicButtonWText_COnRelease OnRelease;
    void OnRelease();

    void SetButtonText(const FText& InText);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_Base_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Base_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__Button_Base_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_CheatMenu_BasicButtonWText(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
    void OnRelease__DelegateSignature();
    void OnPressed__DelegateSignature();
    void OnClicked__DelegateSignature(UCheatMenu_BasicButtonWText_C* Button);
}

#endif
