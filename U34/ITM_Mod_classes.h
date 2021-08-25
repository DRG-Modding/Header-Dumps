// WidgetBlueprintGeneratedClass ITM_Mod.ITM_Mod_C
// Size: 0x2e8 (Inherited: 0x230)
struct UITM_Mod_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* backgroundNoOutline; // 0x238(0x08)
	struct UImage* backgroundNoOutline_2; // 0x240(0x08)
	struct UBasic_CheckBox_C* Basic_CheckBox; // 0x248(0x08)
	struct UImage* Image_Separator; // 0x250(0x08)
	struct UTextBlock* ModCategoryTextBox; // 0x258(0x08)
	struct UTextBlock* ModDescriptionTextbox; // 0x260(0x08)
	struct UTextBlock* ModMadeByTextBox; // 0x268(0x08)
	struct UTextBlock* ModNameTextBox; // 0x270(0x08)
	struct FString ModName; // 0x278(0x10)
	struct FString ModCategory; // 0x288(0x10)
	struct FString ModDescription; // 0x298(0x10)
	struct FString ModAuthor; // 0x2a8(0x10)
	struct FString ModURL; // 0x2b8(0x10)
	bool IsModMounted; // 0x2c8(0x01)
	char UnknownData_2C9[0x7]; // 0x2c9(0x07)
	struct FMulticastInlineDelegate OnActivationChanged; // 0x2d0(0x10)
	struct UUGCPackage* UGCPackage; // 0x2e0(0x08)

	void SetColors(); // Function ITM_Mod.ITM_Mod_C.SetColors
	void SetData(struct FString InModName, struct FString InModCategory, struct FString InModDescription, struct FString InModAuthor, struct FString InModURL, bool InModIsMounted); // Function ITM_Mod.ITM_Mod_C.SetData
	void PreConstruct(bool IsDesignTime); // Function ITM_Mod.ITM_Mod_C.PreConstruct
	void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked); // Function ITM_Mod.ITM_Mod_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
	void ExecuteUbergraph_ITM_Mod(int32_t EntryPoint); // Function ITM_Mod.ITM_Mod_C.ExecuteUbergraph_ITM_Mod
	void OnActivationChanged__DelegateSignature(); // Function ITM_Mod.ITM_Mod_C.OnActivationChanged__DelegateSignature
};

