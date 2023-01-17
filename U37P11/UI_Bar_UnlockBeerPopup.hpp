#ifndef UE4SS_SDK_UI_Bar_UnlockBeerPopup_HPP
#define UE4SS_SDK_UI_Bar_UnlockBeerPopup_HPP

class UUI_Bar_UnlockBeerPopup_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Fill;
    class UBlurBackground_C* BlurBackground;
    class UImage* Glow;
    class UImage* ICON_label;
    class UImage* Image_0;
    class UImage* Image_104;
    class UProgressBar* ProgressBar_BeerBG;
    class UProgressBar* ProgressBar_BeerFG;
    class UUI_RunningMultiText_C* UI_RunningMultiText;
    class UDrinkableDataAsset* DrinkableData;
    FUI_Bar_UnlockBeerPopup_COnUnlockAnimFinished OnUnlockAnimFinished;
    void OnUnlockAnimFinished();

    void SequenceEvent__ENTRYPOINTUI_Bar_UnlockBeerPopup_0();
    void SetDrink(class UDrinkableDataAsset* InDrinkableData);
    void OnTurnOffTextRunner();
    void OnShown();
    void OnClosed();
    void ExecuteUbergraph_UI_Bar_UnlockBeerPopup(int32 EntryPoint);
    void OnUnlockAnimFinished__DelegateSignature();
};

#endif
