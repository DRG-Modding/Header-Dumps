#ifndef UE4SS_SDK_ScreenOverlay_Berzerker_HPP
#define UE4SS_SDK_ScreenOverlay_Berzerker_HPP

class UScreenOverlay_Berzerker_C : public UPlayerAfflictionOverlayWidget
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
    void ExecuteUbergraph_ScreenOverlay_Berzerker(int32 EntryPoint, TEnumAsByte<EUMGSequencePlayMode::Type> K2Node_CustomEvent_PlayMode, float CallFunc_GetAnimationCurrentTime_ReturnValue, FExecuteUbergraph_ScreenOverlay_BerzerkerK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, float CallFunc_FMax_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UTexture2D* K2Node_Event_InTexture, FLinearColor K2Node_Event_InTint);
};

#endif
