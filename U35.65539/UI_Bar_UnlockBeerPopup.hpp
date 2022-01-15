#ifndef UE4SS_SDK_UI_Bar_UnlockBeerPopup_HPP
#define UE4SS_SDK_UI_Bar_UnlockBeerPopup_HPP

class UUI_Bar_UnlockBeerPopup_C : UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Fill;
    UBlurBackground_C* BlurBackground;
    UImage* Glow;
    UImage* ICON_label;
    UImage* Image_0;
    UImage* Image_104;
    UProgressBar* ProgressBar_BeerBG;
    UProgressBar* ProgressBar_BeerFG;
    UUI_RunningMultiText_C* UI_RunningMultiText;
    UDrinkableDataAsset* DrinkableData;
    FUI_Bar_UnlockBeerPopup_COnUnlockAnimFinished OnUnlockAnimFinished;
    void OnUnlockAnimFinished();

    void SequenceEvent__ENTRYPOINTUI_Bar_UnlockBeerPopup_0();
    void SetDrink(UDrinkableDataAsset* InDrinkableData, UTexture2D* CallFunc_GetDrinkableIcon_ReturnValue);
    void OnTurnOffTextRunner();
    void OnShown();
    void OnClosed();
    void ExecuteUbergraph_UI_Bar_UnlockBeerPopup(int32 EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetEndTime_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, UPlayerCharacter* CallFunc_GetLocalPlayerCharacter_ReturnValue, UPlayerCharacter* CallFunc_GetLocalPlayerCharacter_ReturnValue_1);
    void OnUnlockAnimFinished__DelegateSignature();
}

#endif
