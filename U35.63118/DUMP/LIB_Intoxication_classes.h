// BlueprintGeneratedClass LIB_Intoxication.LIB_Intoxication_C
// Size: 0x28 (Inherited: 0x28)
struct ULIB_Intoxication_C : UBlueprintFunctionLibrary {

	void GetAlcoholStrengthPct(enum class EDrinkableAlcoholStrength Strength, APlayerCharacter* Character, UObject* __WorldContext, int32_t Percent);
	void GetAlcoholStrengthName(enum class EDrinkableAlcoholStrength Strength, bool UpperCase, UObject* __WorldContext, FText Name);
};

