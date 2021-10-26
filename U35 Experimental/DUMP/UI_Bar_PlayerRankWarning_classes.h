// WidgetBlueprintGeneratedClass UI_Bar_PlayerRankWarning.UI_Bar_PlayerRankWarning_C
// Size: 0x274 (Inherited: 0x230)
struct UUI_Bar_PlayerRankWarning_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Anim_InfoBoxAppear; // 0x238(0x08)
	UImage* Image_83; // 0x240(0x08)
	UImage* Image_85; // 0x248(0x08)
	UImage* Image_86; // 0x250(0x08)
	UImage* Image_87; // 0x258(0x08)
	USizeBox* PlayerRankToolTip; // 0x260(0x08)
	UTextBlock* TextBlock_91; // 0x268(0x08)
	int32_t Rank; // 0x270(0x04)

	void SetRank(int32_t Value);
	void AnimStop();
	void AnimPlay();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_UI_Bar_PlayerRankWarning(int32_t EntryPoint);
};

