#ifndef UE4SS_SDK_WND_DailyDealOnTerminal_HPP
#define UE4SS_SDK_WND_DailyDealOnTerminal_HPP

class UWND_DailyDealOnTerminal_C : public UDealWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBlurBackground_C* BlurBackground;
    class UITM_Trading_DailyDeal_C* ITM_Trading_DailyDeal;
    class UOverlay* Overlay_SoldOut;

    void Construct();
    void OnCreditsChanged(int32 Credits);
    void UpdateDealText();
    void ExecuteUbergraph_WND_DailyDealOnTerminal(int32 EntryPoint, FExecuteUbergraph_WND_DailyDealOnTerminalK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, int32 K2Node_CustomEvent_Credits, bool CallFunc_IsDailyDealBought_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
};

#endif
