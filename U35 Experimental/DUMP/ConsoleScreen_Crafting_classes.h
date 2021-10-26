// WidgetBlueprintGeneratedClass ConsoleScreen_Crafting.ConsoleScreen_Crafting_C
// Size: 0x2a1 (Inherited: 0x230)
struct UConsoleScreen_Crafting_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* ShopRotate; // 0x238(0x08)
	UWidgetAnimation* Pan03; // 0x240(0x08)
	UWidgetAnimation* Pan02; // 0x248(0x08)
	UWidgetAnimation* Pan01; // 0x250(0x08)
	UWidgetAnimation* Blink; // 0x258(0x08)
	UConsoleScreen_Notification_C* ConsoleScreen_Notification; // 0x260(0x08)
	UImage* Image_Ad; // 0x268(0x08)
	UImage* Image_Blink; // 0x270(0x08)
	UOverlay* Overlay_1; // 0x278(0x08)
	UImage* Shadow; // 0x280(0x08)
	TArray<UTexture2D*> NewVar_1; // 0x288(0x10)
	UTexture2D* NewVar_2; // 0x298(0x08)
	bool Show Shop Sign; // 0x2a0(0x01)

	void SetShowShopSign(bool Show Shop Sign);
	void Construct();
	void Notification Change();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ConsoleScreen_Crafting(int32_t EntryPoint);
};

