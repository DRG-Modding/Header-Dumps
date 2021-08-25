// WidgetBlueprintGeneratedClass OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C
// Size: 0x290 (Inherited: 0x250)
struct UOnScreenIndicator_UsableItem_WithDescription_C : UFSDUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UWidgetAnimation* Fade; // 0x258(0x08)
	struct UVerticalBox* holder; // 0x260(0x08)
	struct UUI_AdvancedLabel_C* KeyLabel; // 0x268(0x08)
	struct UProgressBar* Use_Progress; // 0x270(0x08)
	struct UTextBlock* UseText; // 0x278(0x08)
	struct UCharacterUseComponent* UseComponent; // 0x280(0x08)
	bool Initialized; // 0x288(0x01)
	char UnknownData_289[0x3]; // 0x289(0x03)
	float DepositingStartCapacity; // 0x28c(0x04)

	struct UUsableComponentBase* GetUsable(); // Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.GetUsable
	void SetTitle(struct FText InText); // Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.SetTitle
	void SetAction(struct FText NewText, struct FText OverrideControllerText); // Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.SetAction
	void PreConstruct(bool IsDesignTime); // Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.PreConstruct
	void Construct(); // Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.Construct
	void BeginHover(struct UUsableComponentBase* Component); // Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.BeginHover
	void OnDepositingBegin(struct UResourceBank* ResourceBank); // Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.OnDepositingBegin
	void EndHover(); // Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.EndHover
	void On Initialize(); // Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.On Initialize
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.Tick
	void ExecuteUbergraph_OnScreenIndicator_UsableItem_WithDescription(int32_t EntryPoint); // Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.ExecuteUbergraph_OnScreenIndicator_UsableItem_WithDescription
};

