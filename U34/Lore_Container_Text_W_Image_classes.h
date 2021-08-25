// WidgetBlueprintGeneratedClass Lore_Container_Text_W_Image.Lore_Container_Text_W_Image_C
// Size: 0x2cc (Inherited: 0x230)
struct ULore_Container_Text_W_Image_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_Menu_ColorBar_C* ColorbarTextSeparator; // 0x238(0x08)
	struct UHorizontalBox* HorizontalBox_Outer; // 0x240(0x08)
	struct UImage* Image_Item; // 0x248(0x08)
	struct UBorder* ImageBorder; // 0x250(0x08)
	struct URichTextBlock* RichTextBlock_Body; // 0x258(0x08)
	struct USizeBox* SizeBox_Image; // 0x260(0x08)
	struct UTextBlock* TextBlock_Header; // 0x268(0x08)
	struct UVerticalBox* VerticalBox_Text; // 0x270(0x08)
	struct UBasic_Menu_ColorBar_C* WindowColorBar; // 0x278(0x08)
	struct UMinersManualData* Data; // 0x280(0x08)
	struct FText Headline; // 0x288(0x18)
	struct FText Text; // 0x2a0(0x18)
	struct UTexture2D* Image; // 0x2b8(0x08)
	bool UseStyle2; // 0x2c0(0x01)
	bool MoveImageToRightSide; // 0x2c1(0x01)
	char UnknownData_2C2[0x2]; // 0x2c2(0x02)
	struct FVector2D ImageSize; // 0x2c4(0x08)

	void PreConstruct(bool IsDesignTime); // Function Lore_Container_Text_W_Image.Lore_Container_Text_W_Image_C.PreConstruct
	void AddItem(struct UWidget* Content, char InHorizontalAlignment, char InVerticalAlignment, struct FMargin InPadding, char Size Rule); // Function Lore_Container_Text_W_Image.Lore_Container_Text_W_Image_C.AddItem
	void SetData(struct UMinersManualData* Data); // Function Lore_Container_Text_W_Image.Lore_Container_Text_W_Image_C.SetData
	void Refresh(); // Function Lore_Container_Text_W_Image.Lore_Container_Text_W_Image_C.Refresh
	void ExecuteUbergraph_Lore_Container_Text_W_Image(int32_t EntryPoint); // Function Lore_Container_Text_W_Image.Lore_Container_Text_W_Image_C.ExecuteUbergraph_Lore_Container_Text_W_Image
};

