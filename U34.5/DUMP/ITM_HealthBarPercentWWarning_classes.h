// WidgetBlueprintGeneratedClass ITM_HealthBarPercentWWarning.ITM_HealthBarPercentWWarning_C
// Size: 0x269 (Inherited: 0x230)
struct UITM_HealthBarPercentWWarning_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* PingWarning; // 0x238(0x08)
	UImage* Image_RightGradient; // 0x240(0x08)
	UImage* Image_RightIcon; // 0x248(0x08)
	UImage* Line_RightPercent; // 0x250(0x08)
	UImage* Line_RightPercent2; // 0x258(0x08)
	UTextBlock* Text_RightPercent; // 0x260(0x08)
	bool ShowUpLine; // 0x268(0x01)

	void PreConstruct(bool IsDesignTime);
	void SetText(FText Text, bool PingWarning);
	void PingFinished();
	void Construct();
	void ExecuteUbergraph_ITM_HealthBarPercentWWarning(int32_t EntryPoint);
};

