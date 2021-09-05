// WidgetBlueprintGeneratedClass ITM_WarningAndMutator.ITM_WarningAndMutator_C
// Size: 0x270 (Inherited: 0x230)
struct UITM_WarningAndMutator_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UITM_EscapeMenu_MissionModifier_C* ITM_EscapeMenu_Mutator; // 0x238(0x08)
	UITM_EscapeMenu_MissionModifier_C* ITM_EscapeMenu_Warning; // 0x240(0x08)
	UUniformGridPanel* UniformGridPanel_Holder; // 0x248(0x08)
	FMulticastInlineDelegate WarningClicked; // 0x250(0x10)
	FMulticastInlineDelegate MutatorClicked; // 0x260(0x10)

	void Update(UGeneratedMission* mission);
	void OnClicked_Even_Warning();
	void CustomEvent_Mutator();
	void ExecuteUbergraph_ITM_WarningAndMutator(int32_t EntryPoint);
	void MutatorClicked__DelegateSignature();
	void WarningClicked__DelegateSignature();
};

