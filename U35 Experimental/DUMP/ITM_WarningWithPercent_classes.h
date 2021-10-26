// WidgetBlueprintGeneratedClass ITM_WarningWithPercent.ITM_WarningWithPercent_C
// Size: 0x274 (Inherited: 0x230)
struct UITM_WarningWithPercent_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UTextBlock* DATA_Warning; // 0x238(0x08)
	UImage* IconWarning; // 0x240(0x08)
	UTextBlock* TextBlock_Warning; // 0x248(0x08)
	UTexture2D* Icon; // 0x250(0x08)
	FText Title; // 0x258(0x18)
	float Bonus; // 0x270(0x04)

	void Construct();
	void ExecuteUbergraph_ITM_WarningWithPercent(int32_t EntryPoint);
};

