#ifndef UE4SS_SDK_UI_EarlyAccessThankYou_HPP
#define UE4SS_SDK_UI_EarlyAccessThankYou_HPP

class UUI_EarlyAccessThankYou_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimIntro;
    class UITM_MenuBackground_C* ITM_MenuBackground;
    class UFSDEvent* EA_Event;

    void Construct();
    void EventActive(const class UFSDEvent* InFsdEvent, bool InIsActive);
    void ExecuteUbergraph_UI_EarlyAccessThankYou(int32 EntryPoint);
};

#endif
