#ifndef UE4SS_SDK_UI_LockOn_Crosshair_HPP
#define UE4SS_SDK_UI_LockOn_Crosshair_HPP

class UUI_LockOn_Crosshair_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimAngle;
    class UImage* Circle;
    class UCanvasPanel* RotationPanel;
    float Angle;
    float AngleOffset;
    bool ShowCircle;

    void SetCircleVisible(bool InVisible);
    void SetAngle(float Angle);
    void PreConstruct(bool IsDesignTime);
    void Ping(float PlaybackSpeed);
    void ExecuteUbergraph_UI_LockOn_Crosshair(int32 EntryPoint);
};

#endif
