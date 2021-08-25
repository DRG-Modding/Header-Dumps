// WidgetBlueprintGeneratedClass ConsoleScreen_Crafting.ConsoleScreen_Crafting_C
// Size: 0x2a1 (Inherited: 0x230)
struct UConsoleScreen_Crafting_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* ShopRotate; // 0x238(0x08)
	struct UWidgetAnimation* Pan03; // 0x240(0x08)
	struct UWidgetAnimation* Pan02; // 0x248(0x08)
	struct UWidgetAnimation* Pan01; // 0x250(0x08)
	struct UWidgetAnimation* Blink; // 0x258(0x08)
	struct UConsoleScreen_Notification_C* ConsoleScreen_Notification; // 0x260(0x08)
	struct UImage* Image_Ad; // 0x268(0x08)
	struct UImage* Image_Blink; // 0x270(0x08)
	struct UOverlay* Overlay_1; // 0x278(0x08)
	struct UImage* Shadow; // 0x280(0x08)
	struct TArray<struct UTexture2D*> NewVar_1; // 0x288(0x10)
	struct UTexture2D* NewVar_2; // 0x298(0x08)
	bool Show Shop Sign; // 0x2a0(0x01)

	void SetShowShopSign(bool Show Shop Sign); // Function ConsoleScreen_Crafting.ConsoleScreen_Crafting_C.SetShowShopSign
	void Construct(); // Function ConsoleScreen_Crafting.ConsoleScreen_Crafting_C.Construct
	void Notification Change(); // Function ConsoleScreen_Crafting.ConsoleScreen_Crafting_C.Notification Change
	void PreConstruct(bool IsDesignTime); // Function ConsoleScreen_Crafting.ConsoleScreen_Crafting_C.PreConstruct
	void ExecuteUbergraph_ConsoleScreen_Crafting(int32_t EntryPoint); // Function ConsoleScreen_Crafting.ConsoleScreen_Crafting_C.ExecuteUbergraph_ConsoleScreen_Crafting
};

