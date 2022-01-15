#ifndef UE4SS_SDK_ScreenOverlay_ShieldBoost_HPP
#define UE4SS_SDK_ScreenOverlay_ShieldBoost_HPP

class UScreenOverlay_ShieldBoost_C : UPlayerAfflictionOverlayWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimJitter;
    UWidgetAnimation* AnimPulse;
    UWidgetAnimation* AnimFading;
    UImage* AfflictionImage;
    float FadeDuration;

    void ReceiveBeginOverlay(UTexture2D* InTexture, FLinearColor InTint);
    void Construct();
    void Play Fade(uint8 PlayMode);
    void OnAnimFadingFinished();
    void ReceiveEndOverlay();
    void ExecuteUbergraph_ScreenOverlay_ShieldBoost(int32 EntryPoint, UTexture2D* K2Node_Event_InTexture, FLinearColor K2Node_Event_InTint, uint8 K2Node_CustomEvent_PlayMode, float CallFunc_GetAnimationCurrentTime_ReturnValue, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, float CallFunc_FMax_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
}

#endif
