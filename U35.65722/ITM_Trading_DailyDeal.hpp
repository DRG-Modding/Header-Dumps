#ifndef UE4SS_SDK_ITM_Trading_DailyDeal_HPP
#define UE4SS_SDK_ITM_Trading_DailyDeal_HPP

class UITM_Trading_DailyDeal_C : public UDealWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* SalesBubblePing;
    class UImage* I_SaleBubble;
    class UImage* I_SaleBubbleBG;
    class UImage* I_TopBG;
    class UImage* Icon_Resource_Left;
    class UImage* Icon_Resource_Right;
    class UITM_Trading_ResourcePoster_C* ITM_ResourcePoster;
    class UTextBlock* TextBlock_Amount;
    class UTextBlock* TextBlock_Credits;
    class UTextBlock* TextBlock_Get;
    class UTextBlock* TextBlock_Percent;
    class UTextBlock* TextBlock_Profit;
    class UTextBlock* TextBlock_ResourceName;
    class UTextBlock* TextBlock_Sell;

    void UpdateDealText();
    void Construct();
    void ExecuteUbergraph_ITM_Trading_DailyDeal(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FDailyDeal CallFunc_GetDailyDeal_outDeal, FText CallFunc_Conv_FloatToText_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Conv_IntToText_ReturnValue_1, FText CallFunc_Format_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
};

#endif
