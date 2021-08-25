// WidgetBlueprintGeneratedClass UI_BeerBuff_SpaceRig.UI_BeerBuff_Spacerig_C
// Size: 0x248 (Inherited: 0x230)
struct UUI_BeerBuff_Spacerig_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* BuffImage; // 0x238(0x08)
	struct USizeBox* SizeBox_4; // 0x240(0x08)

	void OnLoaded_E76038A2482A1272456904B10D0684E1(struct UObject* Loaded); // Function UI_BeerBuff_SpaceRig.UI_BeerBuff_Spacerig_C.OnLoaded_E76038A2482A1272456904B10D0684E1
	void Construct(); // Function UI_BeerBuff_SpaceRig.UI_BeerBuff_Spacerig_C.Construct
	void PreConstruct(bool IsDesignTime); // Function UI_BeerBuff_SpaceRig.UI_BeerBuff_Spacerig_C.PreConstruct
	void On Buff Changed(struct UTemporaryBuff* buff); // Function UI_BeerBuff_SpaceRig.UI_BeerBuff_Spacerig_C.On Buff Changed
	void ExecuteUbergraph_UI_BeerBuff_Spacerig(int32_t EntryPoint); // Function UI_BeerBuff_SpaceRig.UI_BeerBuff_Spacerig_C.ExecuteUbergraph_UI_BeerBuff_Spacerig
};

