// WidgetBlueprintGeneratedClass ITM_Modding_ToolTip_Entry.ITM_Modding_ToolTip_Entry_C
// Size: 0x288 (Inherited: 0x230)
struct UITM_Modding_ToolTip_Entry_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_Label_C* Approval_Label; // 0x238(0x08)
	UWidgetSwitcher* HasMetaData_Switcher; // 0x240(0x08)
	UBasic_Image_C* Installed_Image; // 0x248(0x08)
	UCircularThrobber* ModName_Loading; // 0x250(0x08)
	UBasic_Label_C* Name_Label; // 0x258(0x08)
	UBasic_Image_C* Pending_Image; // 0x260(0x08)
	UWidgetSwitcher* StatusSwitcher; // 0x268(0x08)
	bool Installed; // 0x270(0x01)
	FString Name; // 0x278(0x10)

	void SetMetaData(UModioModInfoWrapper* InMetaData);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_ITM_Modding_ToolTip_Entry(int32_t EntryPoint);
};

