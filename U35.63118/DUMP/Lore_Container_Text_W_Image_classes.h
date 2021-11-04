// WidgetBlueprintGeneratedClass Lore_Container_Text_W_Image.Lore_Container_Text_W_Image_C
// Size: 0x2cc (Inherited: 0x230)
struct ULore_Container_Text_W_Image_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_Menu_ColorBar_C* ColorbarTextSeparator; // 0x238(0x08)
	UHorizontalBox* HorizontalBox_Outer; // 0x240(0x08)
	UImage* Image_Item; // 0x248(0x08)
	UBorder* ImageBorder; // 0x250(0x08)
	URichTextBlock* RichTextBlock_Body; // 0x258(0x08)
	USizeBox* SizeBox_Image; // 0x260(0x08)
	UTextBlock* TextBlock_Header; // 0x268(0x08)
	UVerticalBox* VerticalBox_Text; // 0x270(0x08)
	UBasic_Menu_ColorBar_C* WindowColorBar; // 0x278(0x08)
	UMinersManualData* Data; // 0x280(0x08)
	FText Headline; // 0x288(0x18)
	FText Text; // 0x2a0(0x18)
	UTexture2D* Image; // 0x2b8(0x08)
	bool UseStyle2; // 0x2c0(0x01)
	bool MoveImageToRightSide; // 0x2c1(0x01)
	FVector2D ImageSize; // 0x2c4(0x08)

	void PreConstruct(bool IsDesignTime);
	void AddItem(UWidget* Content, enum class EHorizontalAlignment InHorizontalAlignment, enum class EVerticalAlignment InVerticalAlignment, FMargin InPadding, enum class ESlateSizeRule Size Rule);
	void SetData(UMinersManualData* Data);
	void Refresh();
	void ExecuteUbergraph_Lore_Container_Text_W_Image(int32_t EntryPoint);
};

