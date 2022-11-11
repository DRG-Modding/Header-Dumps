#ifndef UE4SS_SDK_ITM_Trading_Resource_HPP
#define UE4SS_SDK_ITM_Trading_Resource_HPP

class UITM_Trading_Resource_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* GradiantFadeIn;
    class UButton* B_Add;
    class UButton* B_Subtract;
    class UBasic_BG_CutCorner_W_Image_C* Basic_BG_CutCorner_W_Image;
    class UBorder* Border_Glow;
    class UButton* Button_Hover;
    class UImage* CreditsIcon_Buy;
    class UImage* CreditsIcon_Sell;
    class UImage* Icon_Resource;
    class UImage* Image_GradientBackground;
    class UTextBlock* Text_AmountOwned;
    class UTextBlock* Text_BuyPrice;
    class UTextBlock* Text_ResourceName;
    class UTextBlock* Text_SellPrice;
    class UResourceData* Resource;
    int32 ChangeAmout;
    int32 AmountOwned;
    class UITM_Trading_BasketItem_C* TradeBasket;
    FITM_Trading_Resource_CAmoutUpdated AmoutUpdated;
    void AmoutUpdated(bool DoClearAnim, bool DoTradeAnim);
    int32 CreditsLeft;
    bool DoClearAnim;
    bool DoTradeAnim;
    bool OutroPlaying;
    int32 RollCounter;
    FTimerHandle RollCounter_Handle;
    int32 CurrIncrementAmount;

    void UpdateChangeAmount(int32 IncrementAmount, bool& DidUpdate);
    void PreConstruct(bool IsDesignTime);
    void SetData(class UResourceData* Resource, class UITM_Trading_BasketItem_C* TradeBasket);
    void UpdateNumber(bool DoClearAnim, bool DoTradeAnim, float InitialDelay);
    void SetAvailableBalance(int32 CreditsLeft);
    void ClearAmount();
    void UpdateAmountOwned();
    void FadeFinished();
    void BndEvt__Button_Hover_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Hover_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__B_Add_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__B_Add_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__B_Subtract_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__B_Subtract_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature();
    void IncrementAmount();
    void Construct();
    void ResourceUpdated(class UResourceData* Resource, float currentAmount);
    void ExecuteUbergraph_ITM_Trading_Resource(int32 EntryPoint);
    void AmoutUpdated__DelegateSignature(bool DoClearAnim, bool DoTradeAnim);
};

#endif
