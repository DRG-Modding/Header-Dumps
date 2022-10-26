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
    void ExecuteUbergraph_WND_DailyDealOnTerminal(int32 EntryPoint);
};

#endif
