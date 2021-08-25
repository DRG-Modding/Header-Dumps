// WidgetBlueprintGeneratedClass UI_Bar_LockWarning.UI_Bar_LockWarning_C
// Size: 0x278 (Inherited: 0x230)
struct UUI_Bar_LockWarning_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* Anim_InfoBoxAppear; // 0x238(0x08)
	struct UImage* Image_1; // 0x240(0x08)
	struct UImage* Image_2; // 0x248(0x08)
	struct UImage* Image_83; // 0x250(0x08)
	struct UImage* Image_85; // 0x258(0x08)
	struct UImage* Image_86; // 0x260(0x08)
	struct USizeBox* PlayerRankToolTip; // 0x268(0x08)
	struct UUI_Bar_DrinkCost_C* UI_Bar_DrinkCost; // 0x270(0x08)

	void AnimStop(); // Function UI_Bar_LockWarning.UI_Bar_LockWarning_C.AnimStop
	void AnimPlay(); // Function UI_Bar_LockWarning.UI_Bar_LockWarning_C.AnimPlay
	void Construct(); // Function UI_Bar_LockWarning.UI_Bar_LockWarning_C.Construct
	void SetPrice(struct UDrinkableDataAsset* Drinkable); // Function UI_Bar_LockWarning.UI_Bar_LockWarning_C.SetPrice
	void SetFixedPrice(struct TMap<struct UResourceData*, int32_t> Cost); // Function UI_Bar_LockWarning.UI_Bar_LockWarning_C.SetFixedPrice
	void ExecuteUbergraph_UI_Bar_LockWarning(int32_t EntryPoint); // Function UI_Bar_LockWarning.UI_Bar_LockWarning_C.ExecuteUbergraph_UI_Bar_LockWarning
};

