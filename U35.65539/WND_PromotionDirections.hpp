#ifndef UE4SS_SDK_WND_PromotionDirections_HPP
#define UE4SS_SDK_WND_PromotionDirections_HPP

class UWND_PromotionDirections_C : UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* IntroOutro;
    UBasic_Window_CutCorner_C* Basic_Window_CutCorner;
    UBorder* Border_Glow;
    UBorder* Border_Outline;
    UImage* Image_BG;
    UImage* Image_Character;
    UITM_Special_ButtonCutCorner_C* ITM_Special_ButtonCutCorner;
    UImage* PromotionTerminal;
    URichTextSizable* RichTextSizable_116;
    UTextBlock* TextBlock_Headline;

    void OnShown();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__ITM_Special_ButtonCutCorner_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
    void SetCharacter(UPlayerCharacterID* Character);
    void ExecuteUbergraph_WND_PromotionDirections(int32 EntryPoint, UPlayerCharacterID* K2Node_CustomEvent_character, UTexture2D* CallFunc_GetFullSizeImage_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool K2Node_Event_IsDesignTime, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, UAudioComponent* CallFunc_SpawnSound2D_ReturnValue_1);
}

#endif
