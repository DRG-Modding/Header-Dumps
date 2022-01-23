#ifndef UE4SS_SDK_ScreenOverlay_GenericAffliction_HPP
#define UE4SS_SDK_ScreenOverlay_GenericAffliction_HPP

class UScreenOverlay_GenericAffliction_C : public UPlayerAfflictionOverlayWidget
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
    void ExecuteUbergraph_ScreenOverlay_GenericAffliction(int32 EntryPoint, class UTexture2D* K2Node_Event_InTexture, FLinearColor K2Node_Event_InTint, FSlateColor K2Node_MakeStruct_SlateColor, FExecuteUbergraph_ScreenOverlay_GenericAfflictionK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, TEnumAsByte<EUMGSequencePlayMode::Type> K2Node_CustomEvent_PlayMode, float CallFunc_GetAnimationCurrentTime_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, float CallFunc_FMax_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
};

#endif
