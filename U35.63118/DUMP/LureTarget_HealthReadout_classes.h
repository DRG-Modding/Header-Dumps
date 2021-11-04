// WidgetBlueprintGeneratedClass LureTarget_HealthReadout.LureTarget_HealthReadout_C
// Size: 0x240 (Inherited: 0x230)
struct ULureTarget_HealthReadout_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UTextBlock* TextBlock_122; // 0x238(0x08)

	void SetText(FText Text);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_LureTarget_HealthReadout(int32_t EntryPoint);
};

