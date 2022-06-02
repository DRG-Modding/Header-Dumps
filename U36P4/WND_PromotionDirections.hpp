#ifndef UE4SS_SDK_WND_PromotionDirections_HPP
#define UE4SS_SDK_WND_PromotionDirections_HPP

class UWND_PromotionDirections_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* IntroOutro;
    class UBasic_Window_CutCorner_C* Basic_Window_CutCorner;
    class UBorder* Border_Glow;
    class UBorder* Border_Outline;
    class UImage* Image_BG;
    class UImage* Image_Character;
    class UITM_Special_ButtonCutCorner_C* ITM_Special_ButtonCutCorner;
    class UImage* PromotionTerminal;
    class URichTextSizable* RichTextSizable_116;
    class UTextBlock* TextBlock_Headline;

    bool ReceiveCanCloseWindow(FName InActionName, FKey InKey, bool InIsMouseEvent);
    void Finished_A0ADC2C4421D1470173667A7D2CBA086();
    void OnShown();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__ITM_Special_ButtonCutCorner_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
    void SetCharacter(class UPlayerCharacterID* Character);
    void ExecuteUbergraph_WND_PromotionDirections(int32 EntryPoint);
};

#endif
