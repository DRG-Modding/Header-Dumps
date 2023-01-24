#ifndef UE4SS_SDK_ScreenOverlay_Plague_HPP
#define UE4SS_SDK_ScreenOverlay_Plague_HPP

class UScreenOverlay_Plague_C : public UPlayerAfflictionOverlayWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimJitter;
    class UWidgetAnimation* AnimPulse;
    class UWidgetAnimation* AnimFading;
    class UImage* AfflictionImage;
    float FadeDuration;

    void Play Fade(TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode);
    void OnAnimFadingFinished();
    void ReceiveBeginOverlay(class UTexture2D* InTexture, FLinearColor InTint);
    void Construct();
    void ReceiveEndOverlay();
    void ExecuteUbergraph_ScreenOverlay_Plague(int32 EntryPoint);
};

#endif
