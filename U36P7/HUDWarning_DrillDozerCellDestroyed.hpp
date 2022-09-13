#ifndef UE4SS_SDK_HUDWarning_DrillDozerCellDestroyed_HPP
#define UE4SS_SDK_HUDWarning_DrillDozerCellDestroyed_HPP

class UHUDWarning_DrillDozerCellDestroyed_C : public UHUDWarningWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* RightCellDead;
    class UWidgetAnimation* LeftCellDead;
    class UImage* BG_Gradient;
    class UImage* DrillDozer_Background;
    class UImage* DrillDozer_Background_Caterpillar;
    class UImage* IconLeft;
    class UImage* IconRight;
    class UImage* Image_Left;
    class UImage* Image_Main;
    class UImage* Image_Right;
    class UImage* NoiseImage;
    class UOverlay* Overlay_Outer;
    class USoundBase* PingSound;
    bool ShouldDestroyAfterPing;
    float TimeBetweenSound;

    void SetData(class UTexture2D* Texture, class USoundBase* PingSound);
    void PreConstruct(bool IsDesignTime);
    void Ping(bool DestroyAfterPing);
    void LeftFinished();
    void Construct();
    void RightFinished();
    void ExecuteUbergraph_HUDWarning_DrillDozerCellDestroyed(int32 EntryPoint);
};

#endif
