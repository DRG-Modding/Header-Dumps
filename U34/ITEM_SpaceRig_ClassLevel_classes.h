// WidgetBlueprintGeneratedClass ITEM_SpaceRig_ClassLevel.ITEM_SpaceRig_ClassLevel_C
// Size: 0x269 (Inherited: 0x230)
struct UITEM_SpaceRig_ClassLevel_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* Image_1; // 0x238(0x08)
	struct UInvalidationBox* InvalidationBox_1; // 0x240(0x08)
	struct USizeBox* SizeBox_4; // 0x248(0x08)
	struct USpacer* Spacer_1; // 0x250(0x08)
	struct UTextBlock* TextBlock_1; // 0x258(0x08)
	float IconSize; // 0x260(0x04)
	int32_t FontSize; // 0x264(0x04)
	bool HideIcon; // 0x268(0x01)

	void Construct(); // Function ITEM_SpaceRig_ClassLevel.ITEM_SpaceRig_ClassLevel_C.Construct
	void PreConstruct(bool IsDesignTime); // Function ITEM_SpaceRig_ClassLevel.ITEM_SpaceRig_ClassLevel_C.PreConstruct
	void SetLevel(int32_t Level); // Function ITEM_SpaceRig_ClassLevel.ITEM_SpaceRig_ClassLevel_C.SetLevel
	void ExecuteUbergraph_ITEM_SpaceRig_ClassLevel(int32_t EntryPoint); // Function ITEM_SpaceRig_ClassLevel.ITEM_SpaceRig_ClassLevel_C.ExecuteUbergraph_ITEM_SpaceRig_ClassLevel
};

