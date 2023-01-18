#ifndef UE4SS_SDK_ScreenOverlay_GenericAffliction_SlowFade_HPP
#define UE4SS_SDK_ScreenOverlay_GenericAffliction_SlowFade_HPP

class UScreenOverlay_GenericAffliction_SlowFade_C : public UPlayerAfflictionOverlayWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimFading;
    class UImage* AfflictionImage;
    float FadeDuration;

    void Construct();
    void ReceiveBeginOverlay(class UTexture2D* InTexture, FLinearColor InTint);
    void ReceiveEndOverlay();
    void Play Fade(TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode);
    void OnAnimFadingFinished();
    void ExecuteUbergraph_ScreenOverlay_GenericAffliction_SlowFade(int32 EntryPoint);
};

#endif
