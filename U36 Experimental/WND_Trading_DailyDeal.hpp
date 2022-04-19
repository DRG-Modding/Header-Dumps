#ifndef UE4SS_SDK_WND_Trading_DailyDeal_HPP
#define UE4SS_SDK_WND_Trading_DailyDeal_HPP

class UWND_Trading_DailyDeal_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_ButtonCutCorner_C* B_Trade;
    class UBlurBackground_C* BlurBackground;
    class UImage* DailyDealHeadline_BG;
    class UImage* I_PosterOutline;
    class UImage* Icon_Refresh;
    class UITM_Trading_DailyDeal_C* ITM_DailyDeal2;
    class UImage* MineralTraderHeadline_Outline;
    class UOverlay* Overlay_DealHolder;
    class UOverlay* Overlay_SoldOut;
    class UTextBlock* Text_;
    class UTextBlock* Text_TimeToNext;
    class UVerticalBox* V_DailyDeal;
    FRandomStream RandomStream;
    FTimerHandle Timer;
    FDailyDeal CurrDeal;
    FWND_Trading_DailyDeal_COnDealBought OnDealBought;
    void OnDealBought();

    void FormatDailyDealResources(TMap<UResourceData*, int32>& Resources);
    void No_D21FAC5A44FF696C3525F18876AC316A();
    void Yes_D21FAC5A44FF696C3525F18876AC316A();
    void PreConstruct(bool IsDesignTime);
    void Refresh();
    void UpdateTime();
    void BndEvt__B_Trade_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UBasic_ButtonCutCorner_C* Button);
    void Construct();
    void OnResourceAmountChanged(class UResourceData* Resource, float currentAmount);
    void OnCreditsChanged(int32 Credits);
    void ExecuteUbergraph_WND_Trading_DailyDeal(int32 EntryPoint);
    void OnDealBought__DelegateSignature();
};

#endif
