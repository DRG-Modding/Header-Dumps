// WidgetBlueprintGeneratedClass ITEM_SpaceRig_ClassLevel.ITEM_SpaceRig_ClassLevel_C
// Size: 0x269 (Inherited: 0x230)
struct UITEM_SpaceRig_ClassLevel_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* Image_1; // 0x238(0x08)
	UInvalidationBox* InvalidationBox_1; // 0x240(0x08)
	USizeBox* SizeBox_4; // 0x248(0x08)
	USpacer* Spacer_1; // 0x250(0x08)
	UTextBlock* TextBlock_1; // 0x258(0x08)
	float IconSize; // 0x260(0x04)
	int32_t FontSize; // 0x264(0x04)
	bool HideIcon; // 0x268(0x01)

	void Construct();
	void PreConstruct(bool IsDesignTime);
	void SetLevel(int32_t Level);
	void ExecuteUbergraph_ITEM_SpaceRig_ClassLevel(int32_t EntryPoint);
};

