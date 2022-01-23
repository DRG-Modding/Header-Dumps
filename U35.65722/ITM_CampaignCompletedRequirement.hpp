#ifndef UE4SS_SDK_ITM_CampaignCompletedRequirement_HPP
#define UE4SS_SDK_ITM_CampaignCompletedRequirement_HPP

class UITM_CampaignCompletedRequirement_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_73;
    class UTextBlock* TextBlock_438;
    bool RequirementMet;

    void Construct();
    void ExecuteUbergraph_ITM_CampaignCompletedRequirement(int32 EntryPoint, bool Temp_bool_Variable, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_1, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default);
};

#endif
