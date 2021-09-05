// BlueprintGeneratedClass LIB_Game_UI.LIB_Game_UI_C
// Size: 0x28 (Inherited: 0x28)
struct ULIB_Game_UI_C : UBlueprintFunctionLibrary {

	void GetEnemyFamilyName(enum class EEnemyFamily Family, UObject* __WorldContext, FText Name);
	void GetArmorTypeInfo(enum class EArmorType Type, UObject* __WorldContext, FText Display Text, UTexture2D* Icon, FLinearColor Color);
	void GetEnemyTypeInfo(enum class EEnemyType Type, UObject* __WorldContext, FText Display Text, UTexture2D* Icon, FLinearColor IconColor);
	void GetEnemyFamilyInfo(enum class EEnemyFamily Family, UObject* __WorldContext, FText Name, UTexture2D* Icon, FLinearColor Color);
	void GetPickaxePartLocationTitle(enum class EPickaxePartLocation InPartLocation, bool UpperCase, bool LongName, UObject* __WorldContext, FText OutTitle);
	void GetVanitySlotTitle(enum class EVanitySlot InVanitySlot, bool UpperCase, UObject* __WorldContext, FText OutTitle);
	void GetVanitySlotIcon(enum class EVanitySlot VanitySlot, UObject* __WorldContext, UTexture2D* AsTexture 2D);
};

