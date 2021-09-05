// WidgetBlueprintGeneratedClass LetThereBeLightUI.LetThereBeLightUI_C
// Size: 0x288 (Inherited: 0x230)
struct ULetThereBeLightUI_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* 1stHorizontal; // 0x238(0x08)
	UImage* 1stRowBackground; // 0x240(0x08)
	UImage* 2ndHorizontal; // 0x248(0x08)
	UImage* 3rdHorizontal; // 0x250(0x08)
	UThrobber* AnimatedFlares; // 0x258(0x08)
	UImage* CenterFlare; // 0x260(0x08)
	UImage* LeftVertical; // 0x268(0x08)
	UImage* RightVertical; // 0x270(0x08)
	UCheckBox* ToggleLightBox; // 0x278(0x08)
	AMod040_C* Let There Be Light; // 0x280(0x08)

	void BndEvt__ToggleChristmas_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void ExecuteUbergraph_LetThereBeLightUI(int32_t EntryPoint);
};

