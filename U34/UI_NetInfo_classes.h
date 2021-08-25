// WidgetBlueprintGeneratedClass UI_NetInfo.UI_NetInfo_C
// Size: 0x291 (Inherited: 0x230)
struct UUI_NetInfo_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UTextBlock* TextBlock_FPS; // 0x238(0x08)
	struct FSlateFontInfo Font; // 0x240(0x50)
	char Justification; // 0x290(0x01)

	void PreConstruct(bool IsDesignTime); // Function UI_NetInfo.UI_NetInfo_C.PreConstruct
	void Construct(); // Function UI_NetInfo.UI_NetInfo_C.Construct
	void OnShowNetInfoChanged(bool NewValue); // Function UI_NetInfo.UI_NetInfo_C.OnShowNetInfoChanged
	void SlowTick(); // Function UI_NetInfo.UI_NetInfo_C.SlowTick
	void ExecuteUbergraph_UI_NetInfo(int32_t EntryPoint); // Function UI_NetInfo.UI_NetInfo_C.ExecuteUbergraph_UI_NetInfo
};

