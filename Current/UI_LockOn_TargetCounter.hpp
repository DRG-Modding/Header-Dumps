#ifndef UE4SS_SDK_UI_LockOn_TargetCounter_HPP
#define UE4SS_SDK_UI_LockOn_TargetCounter_HPP

class UUI_LockOn_TargetCounter_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimPing;
    class UUI_ImageTinted_C* Background;
    class UUI_ImageTinted_C* Foreground;
    bool IsOn;

    void Refresh();
    void PreConstruct(bool IsDesignTime);
    void SetOn(bool InIsOn);
    void Ping();
    void ExecuteUbergraph_UI_LockOn_TargetCounter(int32 EntryPoint);
};

#endif
