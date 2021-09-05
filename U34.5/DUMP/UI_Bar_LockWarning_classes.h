// WidgetBlueprintGeneratedClass UI_Bar_LockWarning.UI_Bar_LockWarning_C
// Size: 0x278 (Inherited: 0x230)
struct UUI_Bar_LockWarning_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Anim_InfoBoxAppear; // 0x238(0x08)
	UImage* Image_1; // 0x240(0x08)
	UImage* Image_2; // 0x248(0x08)
	UImage* Image_83; // 0x250(0x08)
	UImage* Image_85; // 0x258(0x08)
	UImage* Image_86; // 0x260(0x08)
	USizeBox* PlayerRankToolTip; // 0x268(0x08)
	UUI_Bar_DrinkCost_C* UI_Bar_DrinkCost; // 0x270(0x08)

	void AnimStop();
	void AnimPlay();
	void Construct();
	void SetPrice(UDrinkableDataAsset* Drinkable);
	void SetFixedPrice(TMap<UResourceData*, int32_t> Cost);
	void ExecuteUbergraph_UI_Bar_LockWarning(int32_t EntryPoint);
};

