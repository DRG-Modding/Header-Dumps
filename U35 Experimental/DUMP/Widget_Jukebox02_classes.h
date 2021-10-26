// WidgetBlueprintGeneratedClass Widget_Jukebox02.Widget_Jukebox02_C
// Size: 0x270 (Inherited: 0x230)
struct UWidget_Jukebox02_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* PlayButton; // 0x238(0x08)
	UTextBlock* TextBlock_2; // 0x240(0x08)
	FSlateColor NewVar_1; // 0x248(0x28)

	void SetIsPlaying(bool Index);
	void Construct();
	void ExecuteUbergraph_Widget_Jukebox02(int32_t EntryPoint);
};

