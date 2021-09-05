// WidgetBlueprintGeneratedClass UI_Guntower_ProgressBar_ModuleIcon.UI_Guntower_ProgressBar_ModuleIcon_C
// Size: 0x251 (Inherited: 0x230)
struct UUI_Guntower_ProgressBar_ModuleIcon_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* FlashActive; // 0x238(0x08)
	UWidgetAnimation* FlashGreen; // 0x240(0x08)
	UImage* Icon; // 0x248(0x08)
	bool Active; // 0x250(0x01)

	void SetAccessGranted(bool IsAccessGranted);
	void SetActive(bool IsActive);
	void Construct();
	void ExecuteUbergraph_UI_Guntower_ProgressBar_ModuleIcon(int32_t EntryPoint);
};

