// BlueprintGeneratedClass LIB_PerkColors.LIB_PerkColors_C
// Size: 0x28 (Inherited: 0x28)
struct ULIB_PerkColors_C : UBlueprintFunctionLibrary {

	void PerkColorFromType(enum class EPerkUsageType InType, UObject* __WorldContext, FLinearColor OutColor);
	void PerkColorByState(enum class EPerkUsageType InPerkType, enum class EPerkTierState InPerkState, UObject* __WorldContext, FLinearColor OutBackground, FLinearColor OutBorder, FLinearColor OutIcon);
};

