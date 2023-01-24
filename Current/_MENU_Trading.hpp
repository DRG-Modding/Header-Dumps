#ifndef UE4SS_SDK__MENU_Trading_HPP
#define UE4SS_SDK__MENU_Trading_HPP

class U_MENU_Trading_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* Button_TradeTicker;
    class UImage* I_HeaderSeparator;
    class UImage* Image_1134;
    class UITM_NewsTicker_C* ITM_NewsTicker;
    class UMENU_LockedTemplate_C* MENU_LockedTemplate;
    class UMENU_SpaceRigTemplate_C* MENU_SpaceRigTemplate;
    class UImage* MineralTraderHeadline_BG;
    class UImage* MineralTraderHeadline_Outline;
    class URetainerBox* RetainerBox_0;
    class UCanvasPanel* TradingCanvas;
    class UWND_Trading_DailyDeal_C* WND_DailyDeal;
    class UWND_Trading_Resources_C* WND_ResourceTrading;
    TArray<class UBiome*> Biomes;

    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void OnShown();
    void Back();
    void PreConstruct(bool IsDesignTime);
    void OnClosed();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WND_DailyDeal_K2Node_ComponentBoundEvent_2_OnDealBought__DelegateSignature();
    void BndEvt__Button_TradeTicker_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph__MENU_Trading(int32 EntryPoint);
};

#endif
