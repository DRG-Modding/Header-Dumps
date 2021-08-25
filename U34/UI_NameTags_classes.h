// WidgetBlueprintGeneratedClass UI_NameTags.UI_NameTags_C
// Size: 0x24c (Inherited: 0x230)
struct UUI_NameTags_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* Image_Icon; // 0x238(0x08)
	struct USizeBox* SizeBox_Image; // 0x240(0x08)
	float Height; // 0x248(0x04)

	void SetData(struct AFSDPlayerState* Player); // Function UI_NameTags.UI_NameTags_C.SetData
	void PreConstruct(bool IsDesignTime); // Function UI_NameTags.UI_NameTags_C.PreConstruct
	void OnPlayerNameChanged_Event_1(struct FString NewName); // Function UI_NameTags.UI_NameTags_C.OnPlayerNameChanged_Event_1
	void ExecuteUbergraph_UI_NameTags(int32_t EntryPoint); // Function UI_NameTags.UI_NameTags_C.ExecuteUbergraph_UI_NameTags
};

