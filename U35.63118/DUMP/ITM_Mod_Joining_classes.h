// WidgetBlueprintGeneratedClass ITM_Mod_Joining.ITM_Mod_Joining_C
// Size: 0x2c9 (Inherited: 0x230)
struct UITM_Mod_Joining_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetSwitcher* HasMetaData_Switcher; // 0x238(0x08)
	UWidgetSwitcher* Installed_Switcher; // 0x240(0x08)
	UButton* LinkButton; // 0x248(0x08)
	UBasic_Label_C* Mod_Approval; // 0x250(0x08)
	UBasic_Label_C* Mod_Name; // 0x258(0x08)
	UUI_ModdingProgressBar_C* ModdingProgressBar; // 0x260(0x08)
	UCircularThrobber* ModName_Loading; // 0x268(0x08)
	FString ModId; // 0x270(0x10)
	bool DownloadFinished; // 0x280(0x01)
	FMulticastInlineDelegate OnMetaDataLoaded; // 0x288(0x10)
	FString ModName; // 0x298(0x10)
	FString ModURL; // 0x2a8(0x10)
	enum class EUGCApprovalStatus ApprovalStatus; // 0x2b8(0x01)
	bool ModInstalled; // 0x2b9(0x01)
	UModioModInfoWrapper* MetaData; // 0x2c0(0x08)
	enum class ENUM_MenuColors NameColor; // 0x2c8(0x01)

	void Update();
	void SetMetaData(UModioModInfoWrapper* InModMetaData);
	UWidget* Get_LinkButton_ToolTip();
	void OnDownloadExtractModFinished(FString ModName, FString ModId);
	void OnDownloadExtractMod(FString Name, TArray<FString> ModsPendingDownload, bool Downloading, int32_t Progress, int32_t Total);
	void Construct();
	void BndEvt__LinkButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OnOverlayClosed(FString LastURL);
	void Destruct();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__LinkButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__LinkButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_ITM_Mod_Joining(int32_t EntryPoint);
	void OnMetaDataLoaded__DelegateSignature(FString ModId, enum class EUGCApprovalStatus ModStatus);
};

