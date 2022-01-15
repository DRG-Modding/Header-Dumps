#ifndef UE4SS_SDK_ScreenOverlay_Berzerker_HPP
#define UE4SS_SDK_ScreenOverlay_Berzerker_HPP

class UScreenOverlay_Berzerker_C : UPlayerAfflictionOverlayWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimJitter;
    UWidgetAnimation* AnimPulse;
    UWidgetAnimation* AnimFading;
    UImage* AfflictionImage;
    float FadeDuration;

    void Play Fade(uint8 PlayMode);
    void OnAnimFadingFinished();
    void ReceiveBeginOverlay(UTexture2D* InTexture, FLinearColor InTint);
    void Construct();
    void ReceiveEndOverlay();
    void ExecuteUbergraph_ScreenOverlay_Berzerker(int32 EntryPoint, uint8 K2Node_CustomEvent_PlayMode, float CallFunc_GetAnimationCurrentTime_ReturnValue, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, float CallFunc_FMax_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UTexture2D* K2Node_Event_InTexture, FLinearColor K2Node_Event_InTint);
}

#endif
