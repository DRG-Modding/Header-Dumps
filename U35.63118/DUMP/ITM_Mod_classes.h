// WidgetBlueprintGeneratedClass ITM_Mod.ITM_Mod_C
// Size: 0x3c8 (Inherited: 0x230)
struct UITM_Mod_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* Background; // 0x238(0x08)
	UImage* backgroundOutline; // 0x240(0x08)
	UButton* ButtonAuthorURL; // 0x248(0x08)
	UButton* ButtonImage; // 0x250(0x08)
	UButton* ButtonTitle; // 0x258(0x08)
	UBasic_CheckBox_C* CheckBox_Enabled; // 0x260(0x08)
	UHorizontalBox* ContentBox; // 0x268(0x08)
	UTextBlock* DeprecatedLabel; // 0x270(0x08)
	USizeBox* EntrySizeBox; // 0x278(0x08)
	UImage* Image_Separator; // 0x280(0x08)
	UBasic_Image_C* ImgCrashed; // 0x288(0x08)
	UBasic_Image_C* ImgVersion; // 0x290(0x08)
	UHorizontalBox* LeftBox; // 0x298(0x08)
	UTextBlock* ModDescriptionTextbox; // 0x2a0(0x08)
	UImage* ModifiedImg; // 0x2a8(0x08)
	UTextBlock* ModMadeByTextBox; // 0x2b0(0x08)
	UTextBlock* ModNameTextBox; // 0x2b8(0x08)
	UTextBlock* ModStatusText; // 0x2c0(0x08)
	UImage* ModThumbnail; // 0x2c8(0x08)
	UTextBlock* ModVersionText; // 0x2d0(0x08)
	USizeBox* ThumbnailSizeBox; // 0x2d8(0x08)
	FString ModName; // 0x2e0(0x10)
	FString ModVersion; // 0x2f0(0x10)
	FString ModURL; // 0x300(0x10)
	FString ModCategory; // 0x310(0x10)
	enum class EUGCApprovalStatus ModStatus; // 0x320(0x01)
	FString ModDescription; // 0x328(0x10)
	FString ModAuthor; // 0x338(0x10)
	FString ModAuthorURL; // 0x348(0x10)
	bool IsModMounted; // 0x358(0x01)
	bool PendingModMounting; // 0x359(0x01)
	FMulticastInlineDelegate OnActivationChanged; // 0x360(0x10)
	bool IsModDeprecated; // 0x370(0x01)
	UUGCPackage* UGCPackage; // 0x378(0x08)
	bool CompactMode; // 0x380(0x01)
	bool Crashed; // 0x381(0x01)
	bool DependencyRemoved; // 0x382(0x01)
	UBasic_ToolTip_C* VersionTooltip; // 0x388(0x08)
	TArray<UITM_Mod_C*> ParentModItems; // 0x390(0x10)
	TArray<UITM_Mod_C*> DependentModItems; // 0x3a0(0x10)
	bool ShowStatus; // 0x3b0(0x01)
	bool WrongVersion; // 0x3b1(0x01)
	TArray<FString> NamesOfDependencies; // 0x3b8(0x10)

	void SetFromPackage(UUGCPackage* InPackage);
	UWidget* GetDependencyCheckboxTooltip();
	void FindParentsInArray(TArray<UWidget*> PotentialParents);
	UWidget* CreateversionTooltip();
	void CheckGameVersionBeforeEnable(bool InEnabled);
	void OnModStateDependencyChanged(bool IsChecked, bool ShouldDisableCheckmark, bool HasChanged);
	void ResetModEnabled();
	void SetModEnabled(bool InEnabled);
	void OnOverlayClosed(FString LastURL);
	void HasCrashed(bool OutHasCrashed);
	void SetCompactMode(bool SimpleMode);
	void GetStatusToolTip(bool InShowStatus, enum class EUGCApprovalStatus InStatus, FText OutStatus);
	void OnThumbnailFetched(UTexture2DDynamic* ModioModThumbnail);
	void GetStringOrDefault(FString inString, FText InDefault, FString OutValue);
	void GetTruncatedString(FString inString, int32_t InMaxLength, FString OutResult);
	void GetStatusText(bool InShowStatus, enum class EUGCApprovalStatus InStatus, FText OutStatus);
	void SetColors();
	void SetData(FString InModName, FString InModVersion, FString InModURL, FString InModCategory, enum class EUGCApprovalStatus InModStatus, FString InModDescription, FString InModAuthor, FString InModAuthorURL, bool InModIsMounted, bool InModPendingMounted, bool InModIsDeprecated, bool InDependencyRemoved, bool InShowStatus, bool InCrashed, bool InWrongVersion);
	void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void UpdateModifed();
	void BndEvt__ButtonModURL_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ButtonAuthorURL_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ButtonModURL_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ButtonModURL_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ButtonImage_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ButtonImage_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ButtonImage_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
	void Refresh();
	void SetModActivationChanged(bool IsChecked);
	void SetModActivationChangedForceParents(bool IsChecked);
	void RequestDependencyNames();
	void ExecuteUbergraph_ITM_Mod(int32_t EntryPoint);
	void OnActivationChanged__DelegateSignature(UITM_Mod_C* ManipulatedModItem);
};
