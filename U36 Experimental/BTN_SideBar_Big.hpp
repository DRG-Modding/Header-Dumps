#ifndef UE4SS_SDK_BTN_SideBar_Big_HPP
#define UE4SS_SDK_BTN_SideBar_Big_HPP

class UBTN_SideBar_Big_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Button_Hover;
    class UWidgetAnimation* Button_Click;
    class UButton* MainButton;
    class UTextBlock* TEXT_InfoBox;
    class UTextBlock* TXT_MainButton;
    FText ButtonText;
    FText InfoText;

    FText Get_InfoText_Holder_Text_0();
    FText Get_ButtonText_Text_0();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_288_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_304_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__MainButton_K2Node_ComponentBoundEvent_675_OnButtonPressedEvent__DelegateSignature();
    void ExecuteUbergraph_BTN_SideBar_Big(int32 EntryPoint);
};

#endif
