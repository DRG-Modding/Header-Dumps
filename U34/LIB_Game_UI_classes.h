// BlueprintGeneratedClass LIB_Game_UI.LIB_Game_UI_C
// Size: 0x28 (Inherited: 0x28)
struct ULIB_Game_UI_C : UBlueprintFunctionLibrary {

	void GetEnemyFamilyName(enum class EEnemyFamily Family, struct UObject* __WorldContext, struct FText Name); // Function LIB_Game_UI.LIB_Game_UI_C.GetEnemyFamilyName
	void GetArmorTypeInfo(enum class EArmorType Type, struct UObject* __WorldContext, struct FText Display Text, struct UTexture2D* Icon, struct FLinearColor Color); // Function LIB_Game_UI.LIB_Game_UI_C.GetArmorTypeInfo
	void GetEnemyTypeInfo(enum class EEnemyType Type, struct UObject* __WorldContext, struct FText Display Text, struct UTexture2D* Icon, struct FLinearColor IconColor); // Function LIB_Game_UI.LIB_Game_UI_C.GetEnemyTypeInfo
	void GetEnemyFamilyInfo(enum class EEnemyFamily Family, struct UObject* __WorldContext, struct FText Name, struct UTexture2D* Icon, struct FLinearColor Color); // Function LIB_Game_UI.LIB_Game_UI_C.GetEnemyFamilyInfo
	void GetPickaxePartLocationTitle(enum class EPickaxePartLocation InPartLocation, bool UpperCase, bool LongName, struct UObject* __WorldContext, struct FText OutTitle); // Function LIB_Game_UI.LIB_Game_UI_C.GetPickaxePartLocationTitle
	void GetVanitySlotTitle(enum class EVanitySlot InVanitySlot, bool UpperCase, struct UObject* __WorldContext, struct FText OutTitle); // Function LIB_Game_UI.LIB_Game_UI_C.GetVanitySlotTitle
	void GetVanitySlotIcon(enum class EVanitySlot VanitySlot, struct UObject* __WorldContext, struct UTexture2D* AsTexture 2D); // Function LIB_Game_UI.LIB_Game_UI_C.GetVanitySlotIcon
};

