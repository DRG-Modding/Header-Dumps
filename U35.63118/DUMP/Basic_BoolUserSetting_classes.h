// WidgetBlueprintGeneratedClass Basic_BoolUserSetting.Basic_BoolUserSetting_C
// Size: 0x2d0 (Inherited: 0x2bd)
struct UBasic_BoolUserSetting_C : UBasic_CheckBox_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	UBoolUserSettingAsset* Setting; // 0x2c8(0x08)

	void SetValue(bool InValue);
	bool GetValue();
	void SetBoolUserSetting(UBoolUserSettingAsset* InSetting);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnClicked(bool InChecked);
	void Refresh();
	void ExecuteUbergraph_Basic_BoolUserSetting(int32_t EntryPoint);
};

