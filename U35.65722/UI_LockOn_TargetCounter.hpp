#ifndef UE4SS_SDK_UI_LockOn_TargetCounter_HPP
#define UE4SS_SDK_UI_LockOn_TargetCounter_HPP

class UUI_LockOn_TargetCounter_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimPing;
    class UUI_ImageTinted_C* Background;
    class UUI_ImageTinted_C* Foreground;
    bool IsOn;

    void Refresh(bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void PreConstruct(bool IsDesignTime);
    void SetOn(bool InIsOn);
    void Ping();
    void ExecuteUbergraph_UI_LockOn_TargetCounter(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool K2Node_CustomEvent_InIsOn, bool CallFunc_UpdateBool_ValueChanged, bool CallFunc_UpdateBool_OutValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
};

#endif
