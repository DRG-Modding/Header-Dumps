#ifndef UE4SS_SDK_Widget_TipMachine_Display_HPP
#define UE4SS_SDK_Widget_TipMachine_Display_HPP

class UWidget_TipMachine_Display_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Smile;
    UImage* Smile1;
    UImage* Smile2;
    UWidgetSwitcher* WidgetSwitcher_0;

    void Construct();
    void ExecuteUbergraph_Widget_TipMachine_Display(int32 EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
}

#endif
