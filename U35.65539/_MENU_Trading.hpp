#ifndef UE4SS_SDK__MENU_Trading_HPP
#define UE4SS_SDK__MENU_Trading_HPP

class U_MENU_Trading_C : UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UButton* Button_TradeTicker;
    UImage* I_HeaderSeparator;
    UImage* Image_1134;
    UITM_NewsTicker_C* ITM_NewsTicker;
    UMENU_LockedTemplate_C* MENU_LockedTemplate;
    UMENU_SpaceRigTemplate_C* MENU_SpaceRigTemplate;
    UImage* MineralTraderHeadline_BG;
    UImage* MineralTraderHeadline_Outline;
    URetainerBox* RetainerBox_0;
    UCanvasPanel* TradingCanvas;
    UWND_Trading_DailyDeal_C* WND_DailyDeal;
    UWND_Trading_Resources_C* WND_ResourceTrading;
    TArray<UBiome*> Biomes;

    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventbool CallFunc_IsCloseOrBackMenu_ReturnValue, FEventReply CallFunc_Handled_ReturnValue);
    void OnShown();
    void Back();
    void BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void OnClosed();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WND_DailyDeal_K2Node_ComponentBoundEvent_2_OnDealBought__DelegateSignature();
    void BndEvt__Button_TradeTicker_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph__MENU_Trading(int32 EntryPoint, UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_IsCampaignComplete_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_SetMenuLocked_Locked, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, bool CallFunc_IsShippingBuild_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1);
}

#endif
