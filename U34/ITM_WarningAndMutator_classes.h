// WidgetBlueprintGeneratedClass ITM_WarningAndMutator.ITM_WarningAndMutator_C
// Size: 0x270 (Inherited: 0x230)
struct UITM_WarningAndMutator_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UITM_EscapeMenu_MissionModifier_C* ITM_EscapeMenu_Mutator; // 0x238(0x08)
	struct UITM_EscapeMenu_MissionModifier_C* ITM_EscapeMenu_Warning; // 0x240(0x08)
	struct UUniformGridPanel* UniformGridPanel_Holder; // 0x248(0x08)
	struct FMulticastInlineDelegate WarningClicked; // 0x250(0x10)
	struct FMulticastInlineDelegate MutatorClicked; // 0x260(0x10)

	void Update(struct UGeneratedMission* mission); // Function ITM_WarningAndMutator.ITM_WarningAndMutator_C.Update
	void OnClicked_Even_Warning(); // Function ITM_WarningAndMutator.ITM_WarningAndMutator_C.OnClicked_Even_Warning
	void CustomEvent_Mutator(); // Function ITM_WarningAndMutator.ITM_WarningAndMutator_C.CustomEvent_Mutator
	void ExecuteUbergraph_ITM_WarningAndMutator(int32_t EntryPoint); // Function ITM_WarningAndMutator.ITM_WarningAndMutator_C.ExecuteUbergraph_ITM_WarningAndMutator
	void MutatorClicked__DelegateSignature(); // Function ITM_WarningAndMutator.ITM_WarningAndMutator_C.MutatorClicked__DelegateSignature
	void WarningClicked__DelegateSignature(); // Function ITM_WarningAndMutator.ITM_WarningAndMutator_C.WarningClicked__DelegateSignature
};

