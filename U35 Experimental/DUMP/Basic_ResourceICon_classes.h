// WidgetBlueprintGeneratedClass Basic_ResourceICon.Basic_ResourceIcon_C
// Size: 0x251 (Inherited: 0x230)
struct UBasic_ResourceIcon_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* ResourceIcon; // 0x238(0x08)
	float IconSize; // 0x240(0x04)
	UBasic_ToolTip_C* ToolTip; // 0x248(0x08)
	bool ShowToolTip; // 0x250(0x01)

	void SetIconSize(float InSize);
	void SetResource(UResourceData* Resource);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_Basic_ResourceIcon(int32_t EntryPoint);
};

