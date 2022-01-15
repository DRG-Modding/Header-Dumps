#ifndef UE4SS_SDK_ITM_Trading_DailyDeal_HPP
#define UE4SS_SDK_ITM_Trading_DailyDeal_HPP

class UITM_Trading_DailyDeal_C : UDealWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* SalesBubblePing;
    UImage* I_SaleBubble;
    UImage* I_SaleBubbleBG;
    UImage* I_TopBG;
    UImage* Icon_Resource_Left;
    UImage* Icon_Resource_Right;
    UITM_Trading_ResourcePoster_C* ITM_ResourcePoster;
    UTextBlock* TextBlock_Amount;
    UTextBlock* TextBlock_Credits;
    UTextBlock* TextBlock_Get;
    UTextBlock* TextBlock_Percent;
    UTextBlock* TextBlock_Profit;
    UTextBlock* TextBlock_ResourceName;
    UTextBlock* TextBlock_Sell;

    void UpdateDealText();
    void Construct();
    void ExecuteUbergraph_ITM_Trading_DailyDeal(int32 EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FDailyDeal CallFunc_GetDailyDeal_outDeal, FText CallFunc_Conv_FloatToText_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Conv_IntToText_ReturnValue_1, FText CallFunc_Format_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
}

#endif
