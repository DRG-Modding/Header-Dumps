#ifndef UE4SS_SDK_BTN_SideBar_Big_HPP
#define UE4SS_SDK_BTN_SideBar_Big_HPP

class UBTN_SideBar_Big_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Button_Hover;
    UWidgetAnimation* Button_Click;
    UButton* MainButton;
    UTextBlock* TEXT_InfoBox;
    UTextBlock* TXT_MainButton;
    FText ButtonText;
    FText InfoText;

    FText Get_InfoText_Holder_Text_0();
    FText Get_ButtonText_Text_0();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_288_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_304_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__MainButton_K2Node_ComponentBoundEvent_675_OnButtonPressedEvent__DelegateSignature();
    void ExecuteUbergraph_BTN_SideBar_Big(int32 EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2);
}

#endif
