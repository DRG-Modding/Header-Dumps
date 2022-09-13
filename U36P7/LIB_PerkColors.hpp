#ifndef UE4SS_SDK_LIB_PerkColors_HPP
#define UE4SS_SDK_LIB_PerkColors_HPP

class ULIB_PerkColors_C : public UBlueprintFunctionLibrary
{

    void PerkColorFromType(EPerkUsageType InType, class UObject* __WorldContext, FLinearColor& OutColor);
    void PerkColorByState(EPerkUsageType InPerkType, EPerkTierState InPerkState, class UObject* __WorldContext, FLinearColor& OutBackground, FLinearColor& OutBorder, FLinearColor& OutIcon);
};

#endif
