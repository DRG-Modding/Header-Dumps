#ifndef UE4SS_SDK_ScreenOverlay_ShieldBoost_HPP
#define UE4SS_SDK_ScreenOverlay_ShieldBoost_HPP

class UScreenOverlay_ShieldBoost_C : public UPlayerAfflictionOverlayWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimJitter;
    class UWidgetAnimation* AnimPulse;
    class UWidgetAnimation* AnimFading;
    class UImage* AfflictionImage;
    float FadeDuration;

    void ReceiveBeginOverlay(class UTexture2D* InTexture, FLinearColor InTint);
    void Construct();
    void Play Fade(TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode);
    void OnAnimFadingFinished();
    void ReceiveEndOverlay();
    void ExecuteUbergraph_ScreenOverlay_ShieldBoost(int32 EntryPoint);
};

#endif
