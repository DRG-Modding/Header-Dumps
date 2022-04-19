#ifndef UE4SS_SDK_LIB_Intoxication_HPP
#define UE4SS_SDK_LIB_Intoxication_HPP

class ULIB_Intoxication_C : public UBlueprintFunctionLibrary
{

    void GetAlcoholStrengthPct(EDrinkableAlcoholStrength Strength, class APlayerCharacter* Character, class UObject* __WorldContext, int32& Percent);
    void GetAlcoholStrengthName(EDrinkableAlcoholStrength Strength, bool UpperCase, class UObject* __WorldContext, FText& Name);
};

#endif
