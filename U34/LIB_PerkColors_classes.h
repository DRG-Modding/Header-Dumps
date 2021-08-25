// BlueprintGeneratedClass LIB_PerkColors.LIB_PerkColors_C
// Size: 0x28 (Inherited: 0x28)
struct ULIB_PerkColors_C : UBlueprintFunctionLibrary {

	void PerkColorFromType(enum class EPerkUsageType InType, struct UObject* __WorldContext, struct FLinearColor OutColor); // Function LIB_PerkColors.LIB_PerkColors_C.PerkColorFromType
	void PerkColorByState(enum class EPerkUsageType InPerkType, enum class EPerkTierState InPerkState, struct UObject* __WorldContext, struct FLinearColor OutBackground, struct FLinearColor OutBorder, struct FLinearColor OutIcon); // Function LIB_PerkColors.LIB_PerkColors_C.PerkColorByState
};

