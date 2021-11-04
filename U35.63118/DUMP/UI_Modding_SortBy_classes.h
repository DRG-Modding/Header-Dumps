// WidgetBlueprintGeneratedClass UI_Modding_SortBy.UI_Modding_SortBy_C
// Size: 0x329 (Inherited: 0x230)
struct UUI_Modding_SortBy_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* Arrow_Active; // 0x238(0x08)
	UImage* Arrow_Author; // 0x240(0x08)
	UImage* Arrow_Category; // 0x248(0x08)
	UImage* Arrow_Name; // 0x250(0x08)
	UBorder* Border_BG; // 0x258(0x08)
	UButton* Button_Active; // 0x260(0x08)
	UButton* Button_Author; // 0x268(0x08)
	UButton* Button_Category; // 0x270(0x08)
	UButton* Button_Name; // 0x278(0x08)
	UHorizontalBox* ButtonsBox; // 0x280(0x08)
	UBasic_CheckBox_C* EnableAllCheckbox; // 0x288(0x08)
	USizeBox* RowSizeBox; // 0x290(0x08)
	USizeBox* Size_Active; // 0x298(0x08)
	USizeBox* Size_Author; // 0x2a0(0x08)
	USizeBox* Size_Category; // 0x2a8(0x08)
	USizeBox* Size_Name; // 0x2b0(0x08)
	UTextBlock* TXT_Active; // 0x2b8(0x08)
	UTextBlock* TXT_Author; // 0x2c0(0x08)
	UTextBlock* TXT_Category; // 0x2c8(0x08)
	UTextBlock* TXT_Name; // 0x2d0(0x08)
	enum class EPackageSortField Field; // 0x2d8(0x01)
	bool Ascending; // 0x2d9(0x01)
	FMulticastInlineDelegate OnSortByChanged; // 0x2e0(0x10)
	bool IsDesignTime; // 0x2f0(0x01)
	FSizeBoxSettings SizeSettings; // 0x2f4(0x20)
	FMulticastInlineDelegate OnEnableDisableAll; // 0x318(0x10)
	bool Toggle; // 0x328(0x01)

	void Refresh();
	void UpdateHovered();
	void Click(enum class EPackageSortField InField);
	void GetSortBy(enum class EPackageSortField Field, bool Ascending);
	void SetSortBy(enum class EPackageSortField InField, bool InAscending);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_Category_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Name_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Author_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Category_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Category_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Name_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Name_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Author_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Author_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Active_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Active_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Active_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_12_OnCheckStateChanged__DelegateSignature(bool IsChecked);
	void ExecuteUbergraph_UI_Modding_SortBy(int32_t EntryPoint);
	void OnEnableDisableAll__DelegateSignature(bool InEnableAll);
	void OnSortByChanged__DelegateSignature(enum class EPackageSortField InField, bool InAscending);
};

