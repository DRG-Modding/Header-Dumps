#ifndef UE4SS_SDK_UI_LockOn_Counter_Entry_HPP
#define UE4SS_SDK_UI_LockOn_Counter_Entry_HPP

class UUI_LockOn_Counter_Entry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimLimit;
    class UWidgetAnimation* AnimPing;
    class UUI_ImageTinted_C* Background;
    class UUI_ImageTinted_C* Foreground;
    class UUI_ImageTinted_C* Limit;
    bool IsOn;
    bool IsLimit;
    bool PreviewOn;
    bool PreviewLimit;

    void SetState(bool NewIsOn, bool NewIsLimit);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_LockOn_Counter_Entry(int32 EntryPoint);
};

#endif
