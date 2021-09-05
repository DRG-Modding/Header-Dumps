// WidgetBlueprintGeneratedClass UI_NameTags.UI_NameTags_C
// Size: 0x24c (Inherited: 0x230)
struct UUI_NameTags_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* Image_Icon; // 0x238(0x08)
	USizeBox* SizeBox_Image; // 0x240(0x08)
	float Height; // 0x248(0x04)

	void SetData(AFSDPlayerState* Player);
	void PreConstruct(bool IsDesignTime);
	void OnPlayerNameChanged_Event_1(FString NewName);
	void ExecuteUbergraph_UI_NameTags(int32_t EntryPoint);
};

