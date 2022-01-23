#ifndef UE4SS_SDK_LIB_PerkColors_HPP
#define UE4SS_SDK_LIB_PerkColors_HPP

class ULIB_PerkColors_C : public UBlueprintFunctionLibrary
{

    void PerkColorFromType(EPerkUsageType InType, class UObject* __WorldContext, FLinearColor& OutColor, EPerkUsageType Temp_byte_Variable, FLinearColor Temp_struct_Variable, FLinearColor Temp_struct_Variable_1, FLinearColor K2Node_Select_Default);
    void PerkColorByState(EPerkUsageType InPerkType, EPerkTierState InPerkState, class UObject* __WorldContext, FLinearColor& OutBackground, FLinearColor& OutBorder, FLinearColor& OutIcon, FLinearColor Black, FLinearColor Unavailable, FLinearColor Main, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_PerkColorFromType_OutColor, bool K2Node_SwitchEnum_CmpSuccess);
};

#endif
