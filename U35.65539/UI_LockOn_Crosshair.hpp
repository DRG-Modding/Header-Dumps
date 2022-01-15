#ifndef UE4SS_SDK_UI_LockOn_Crosshair_HPP
#define UE4SS_SDK_UI_LockOn_Crosshair_HPP

class UUI_LockOn_Crosshair_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimAngle;
    UImage* Circle;
    UCanvasPanel* RotationPanel;
    float Angle;
    float AngleOffset;
    bool ShowCircle;

    void SetCircleVisible(bool InVisible, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void SetAngle(float Angle, float CallFunc_Add_FloatFloat_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Ping(float PlaybackSpeed);
    void ExecuteUbergraph_UI_LockOn_Crosshair(int32 EntryPoint, bool K2Node_Event_IsDesignTime, float K2Node_CustomEvent_PlaybackSpeed, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
}

#endif
