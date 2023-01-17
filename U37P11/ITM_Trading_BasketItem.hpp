#ifndef UE4SS_SDK_ITM_Trading_BasketItem_HPP
#define UE4SS_SDK_ITM_Trading_BasketItem_HPP

class UITM_Trading_BasketItem_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Intro;
    class UBorder* Border_ColorGradient;
    class UBorder* Border_Diff;
    class UBorder* Border_Outline;
    class UImage* CreditsDiffIcon;
    class UImage* Icon_Resource_small;
    class UBasic_AnimatedNumber_C* ResourceDiff;
    class UTextBlock* Text_CreditsDiff;
    class UResourceData* Resource;
    int32 ChangeAmout;
    int32 AmountOwned;
    bool DoClearAnim;
    bool DoTradeAnim;
    bool OutroPlaying;

    void PreConstruct(bool IsDesignTime);
    void SetResource(class UResourceData* Resource);
    void UpdateNumber(int32 ChangeAmount, bool DoAnim, bool DoTadeAnim);
    void Construct();
    void OnIntroFinished();
    void ExecuteUbergraph_ITM_Trading_BasketItem(int32 EntryPoint);
};

#endif
