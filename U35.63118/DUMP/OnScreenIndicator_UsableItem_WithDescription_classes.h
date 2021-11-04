// WidgetBlueprintGeneratedClass OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C
// Size: 0x290 (Inherited: 0x250)
struct UOnScreenIndicator_UsableItem_WithDescription_C : UFSDUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UWidgetAnimation* Fade; // 0x258(0x08)
	UVerticalBox* holder; // 0x260(0x08)
	UUI_AdvancedLabel_C* KeyLabel; // 0x268(0x08)
	UProgressBar* Use_Progress; // 0x270(0x08)
	UTextBlock* UseText; // 0x278(0x08)
	UCharacterUseComponent* UseComponent; // 0x280(0x08)
	bool Initialized; // 0x288(0x01)
	float DepositingStartCapacity; // 0x28c(0x04)

	UUsableComponentBase* GetUsable();
	void SetTitle(FText InText);
	void SetAction(FText NewText, FText OverrideControllerText);
	void OnDepositingBegin(UResourceBank* ResourceBank);
	void EndHover();
	void BeginHover(UUsableComponentBase* Component);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void On Initialize();
	void Tick(FGeometry MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_OnScreenIndicator_UsableItem_WithDescription(int32_t EntryPoint);
};

