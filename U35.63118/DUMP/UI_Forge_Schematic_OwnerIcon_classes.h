// WidgetBlueprintGeneratedClass UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C
// Size: 0x268 (Inherited: 0x230)
struct UUI_Forge_Schematic_OwnerIcon_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* IconFiller; // 0x238(0x08)
	UImage* IconOutline; // 0x240(0x08)
	USizeBox* MaxSizer; // 0x248(0x08)
	UCanvasPanel* RootCanvas; // 0x250(0x08)
	int32_t MaxWidth; // 0x258(0x04)
	int32_t MaxHeight; // 0x25c(0x04)
	USchematic* Schematic; // 0x260(0x08)

	void FromActorClass(AActor* Actor);
	void FromItemID(UItemID* ItemID);
	void SetIconAndVisibility(UTexture2D* Texture, FLinearColor InColor);
	void FromSchematic(USchematic* InSchematic);
	void SetMaxSize(int32_t InWidth, int32_t InHeight);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_Forge_Schematic_OwnerIcon(int32_t EntryPoint);
};

