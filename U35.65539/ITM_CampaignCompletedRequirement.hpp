#ifndef UE4SS_SDK_ITM_CampaignCompletedRequirement_HPP
#define UE4SS_SDK_ITM_CampaignCompletedRequirement_HPP

class UITM_CampaignCompletedRequirement_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Image_73;
    UTextBlock* TextBlock_438;
    bool RequirementMet;

    void Construct();
    void ExecuteUbergraph_ITM_CampaignCompletedRequirement(int32 EntryPoint, bool Temp_bool_Variable, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, uint8 K2Node_Select_Default);
}

#endif
