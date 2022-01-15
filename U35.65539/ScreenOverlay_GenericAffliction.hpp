#ifndef UE4SS_SDK_ScreenOverlay_GenericAffliction_HPP
#define UE4SS_SDK_ScreenOverlay_GenericAffliction_HPP

class UScreenOverlay_GenericAffliction_C : UPlayerAfflictionOverlayWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimFading;
    UImage* AfflictionImage;
    float FadeDuration;

    void Construct();
    void ReceiveBeginOverlay(UTexture2D* InTexture, FLinearColor InTint);
    void ReceiveEndOverlay();
    void Play Fade(uint8 PlayMode);
    void OnAnimFadingFinished();
    void ExecuteUbergraph_ScreenOverlay_GenericAffliction(int32 EntryPoint, UTexture2D* K2Node_Event_InTexture, FLinearColor K2Node_Event_InTint, FSlateColor K2Node_MakeStruct_SlateColor, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, uint8 K2Node_CustomEvent_PlayMode, float CallFunc_GetAnimationCurrentTime_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, float CallFunc_FMax_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
}

#endif
