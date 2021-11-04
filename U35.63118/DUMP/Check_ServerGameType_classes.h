// WidgetBlueprintGeneratedClass Check_ServerGameType.Check_ServerGameType_C
// Size: 0x270 (Inherited: 0x230)
struct UCheck_ServerGameType_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_CheckBox_C* CheckBox; // 0x238(0x08)
	FMulticastInlineDelegate OnCheckedChanged; // 0x240(0x10)
	enum class EGameType Gametype; // 0x250(0x01)
	bool SandboxMode; // 0x251(0x01)
	FText Name; // 0x258(0x18)

	void Verify(TArray<enum class EGameType> InSelectedGameTypes);
	void Reset(bool InSandbox);
	bool IsInteractable();
	void GetIsChecked(bool Checked);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
	void Construct();
	void ExecuteUbergraph_Check_ServerGameType(int32_t EntryPoint);
	void OnCheckedChanged__DelegateSignature(bool IsChecked, enum class EGameType Gametype);
};

