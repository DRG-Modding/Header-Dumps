#ifndef UE4SS_SDK_UI_LockOn_Counter_Entry_HPP
#define UE4SS_SDK_UI_LockOn_Counter_Entry_HPP

class UUI_LockOn_Counter_Entry_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimLimit;
    UWidgetAnimation* AnimPing;
    UUI_ImageTinted_C* Background;
    UUI_ImageTinted_C* Foreground;
    UUI_ImageTinted_C* Limit;
    bool IsOn;
    bool IsLimit;
    bool PreviewOn;
    bool PreviewLimit;

    void SetState(bool NewIsOn, bool NewIsLimit, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_UpdateBool_ValueChanged, bool CallFunc_UpdateBool_OutValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_UpdateBool_ValueChanged_1, bool CallFunc_UpdateBool_OutValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_LockOn_Counter_Entry(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
}

#endif
