#ifndef UE4SS_SDK_ITM_CampaignItem_SmallEmpty_HPP
#define UE4SS_SDK_ITM_CampaignItem_SmallEmpty_HPP

class UITM_CampaignItem_SmallEmpty_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Connector;
    class UImage* InnerFiller;
    bool FirstMission;

    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_CampaignItem_SmallEmpty(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, ESlateVisibility K2Node_Select_Default, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor_1, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor K2Node_Select_Default_1);
};

#endif
