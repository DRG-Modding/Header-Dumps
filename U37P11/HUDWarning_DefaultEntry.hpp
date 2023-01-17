#ifndef UE4SS_SDK_HUDWarning_DefaultEntry_HPP
#define UE4SS_SDK_HUDWarning_DefaultEntry_HPP

class UHUDWarning_DefaultEntry_C : public UHUDWarningWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* PingAnim;
    class UImage* BG_Gradient;
    class UImage* IconLeft;
    class UImage* IconRight;
    class UImage* Image_Main;
    class UOverlay* Overlay_Outer;
    class USoundBase* PingSound;
    bool ShouldDestroyAfterPing;
    float TimeBetweenSound;

    void SetData(class UTexture2D* Texture, class USoundBase* PingSound);
    void PreConstruct(bool IsDesignTime);
    void Ping(bool DestroyAfterPing);
    void PingFinished();
    void Construct();
    void ExecuteUbergraph_HUDWarning_DefaultEntry(int32 EntryPoint);
};

#endif
