#ifndef UE4SS_SDK_WND_Trading_Resources_HPP
#define UE4SS_SDK_WND_Trading_Resources_HPP

class UWND_Trading_Resources_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_ButtonCutCorner_C* B_Clear;
    class UBasic_ButtonCutCorner_C* B_Trade;
    class UBorder* B_TradeBasketOutline;
    class UImage* I_BalanceGlow;
    class UImage* Image;
    class UImage* Image_281;
    class UImage* Image_Separator;
    class UTextBlock* Text_;
    class UTextBlock* Text_TotalBalance;
    class UVerticalBox* V_BasketItems;
    class UVerticalBox* V_Trading;
    TArray<class UITM_Trading_Resource_C*> ResourceWidgets;
    int32 Count;
    int32 CurrTradeBalance;

    void UpdateAmountAfterDeal();
    void CountTradeResources(const TMap<UResourceData*, int32>& Map, bool& IsBuyingMinerals);
    void OnAmoutUpdated(bool DoClearAnim, bool DoTradeAnim);
    void No_678F03CB47E4D126FB4FF99BC3F43B71();
    void Yes_678F03CB47E4D126FB4FF99BC3F43B71();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__B_Clear_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UBasic_ButtonCutCorner_C* Button);
    void BndEvt__B_Trade_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UBasic_ButtonCutCorner_C* Button);
    void ClearAll();
    void OnCreditsChanged(int32 Credits);
    void ExecuteUbergraph_WND_Trading_Resources(int32 EntryPoint);
};

#endif
