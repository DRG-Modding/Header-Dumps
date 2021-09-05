// WidgetBlueprintGeneratedClass ITM_RetirementBadge.ITM_RetirementBadge_C
// Size: 0x258 (Inherited: 0x230)
struct UITM_RetirementBadge_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* ICON_Badge; // 0x238(0x08)
	int32_t Preview Times Retired; // 0x240(0x04)
	TArray<TSoftObjectPtr<UTexture2D>> SoftTextures; // 0x248(0x10)

	void GetTexture(int32_t Index, UTexture2D* AsTexture 2D);
	void SetTimesRetired(int32_t TimesRetired);
	void SetCharacterClass(AFSDPlayerState* PlayerState, UPlayerCharacterID* Character);
	void SelectIcon(int32_t RetirementLevel, UTexture2D* Icon);
	void SetData(AFSDPlayerState* Player);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_ITM_RetirementBadge(int32_t EntryPoint);
};

