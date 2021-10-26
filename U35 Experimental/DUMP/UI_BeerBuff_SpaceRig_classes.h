// WidgetBlueprintGeneratedClass UI_BeerBuff_SpaceRig.UI_BeerBuff_Spacerig_C
// Size: 0x248 (Inherited: 0x230)
struct UUI_BeerBuff_Spacerig_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* BuffImage; // 0x238(0x08)
	USizeBox* SizeBox_4; // 0x240(0x08)

	void OnLoaded_E76038A2482A1272456904B10D0684E1(UObject* Loaded);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void On Buff Changed(UTemporaryBuff* buff);
	void ExecuteUbergraph_UI_BeerBuff_Spacerig(int32_t EntryPoint);
};

