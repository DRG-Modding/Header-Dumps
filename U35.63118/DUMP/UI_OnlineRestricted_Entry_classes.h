// WidgetBlueprintGeneratedClass UI_OnlineRestricted_Entry.UI_OnlineRestricted_Entry_C
// Size: 0x250 (Inherited: 0x230)
struct UUI_OnlineRestricted_Entry_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_Image_C* Basic_Image; // 0x238(0x08)
	UBasic_Label_C* Basic_Label; // 0x240(0x08)
	enum class EBlueprintablePrivilegeResults PrivilegeResult; // 0x248(0x01)
	int32_t FontSize; // 0x24c(0x04)

	void SetFontSize(int32_t inFontSize);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_OnlineRestricted_Entry(int32_t EntryPoint);
};

