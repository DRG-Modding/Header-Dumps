// WidgetBlueprintGeneratedClass ITM_OnlineRestricted.ITM_OnlineRestricted_C
// Size: 0x290 (Inherited: 0x230)
struct UITM_OnlineRestricted_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UTextBlock* BlockingPriviligeDebug; // 0x238(0x08)
	UBasic_FlatGradientButton_C* Button_Resolve; // 0x240(0x08)
	UVerticalBox* DescriptionEntryBox; // 0x248(0x08)
	UBasic_Label_C* Header_Label; // 0x250(0x08)
	UVerticalBox* OnlineRestrictedDescBox; // 0x258(0x08)
	enum class EBlueprintablePrivilegeResults CurrentOnlineBlockingReason; // 0x260(0x01)
	TArray<enum class EBlueprintablePrivilegeResults> PreviewBlocks; // 0x268(0x10)
	int32_t FontSize; // 0x278(0x04)
	FString ResolveInputName; // 0x280(0x10)

	void Handle Key Down(FKeyEvent KeyEvent, bool OutHandled, FEventReply OutReply);
	void SetFontSize(int32_t inFontSize);
	FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	void SetBlockSolution(enum class EBlueprintablePrivilegeResults priviligeResults);
	void SetBlockedReasonString(TArray<enum class EBlueprintablePrivilegeResults> InResults);
	void Should Show Online Restriction(bool Should Show);
	void PreConstruct(bool IsDesignTime);
	void Resolve Issue();
	void Refresh Block Reasons();
	void Construct();
	void BndEvt__Basic_FlatGradientButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
	void ExecuteUbergraph_ITM_OnlineRestricted(int32_t EntryPoint);
};

