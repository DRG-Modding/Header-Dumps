#ifndef UE4SS_SDK_Widget_TipMachine_Display_HPP
#define UE4SS_SDK_Widget_TipMachine_Display_HPP

class UWidget_TipMachine_Display_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Smile;
    class UImage* Smile1;
    class UImage* Smile2;
    class UWidgetSwitcher* WidgetSwitcher_0;

    void Construct();
    void ExecuteUbergraph_Widget_TipMachine_Display(int32 EntryPoint);
};

#endif
