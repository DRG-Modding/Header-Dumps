// WidgetBlueprintGeneratedClass ITM_Tab_Modding.ITM_Tab_Modding_C
// Size: 0x278 (Inherited: 0x230)
struct UITM_Tab_Modding_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_ButtonScalable2_C* ApplyButton; // 0x238(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x240(0x08)
	struct UScrollBox* CorretMods; // 0x248(0x08)
	struct UBasic_ButtonScalable2_C* InstallNewModsButton; // 0x250(0x08)
	struct UBasic_ButtonScalable2_C* OpenFolderButton; // 0x258(0x08)
	struct UVerticalBox* VerticalLeft; // 0x260(0x08)
	struct UUI_AdvancedLabel_C* WrongLocationModsLabel_2; // 0x268(0x08)
	struct UScrollBox* WrongMods; // 0x270(0x08)

	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function ITM_Tab_Modding.ITM_Tab_Modding_C.OnMouseButtonUp
	void Construct(); // Function ITM_Tab_Modding.ITM_Tab_Modding_C.Construct
	void Destruct(); // Function ITM_Tab_Modding.ITM_Tab_Modding_C.Destruct
	void BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function ITM_Tab_Modding.ITM_Tab_Modding_C.BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	void ActivationForModChanged(); // Function ITM_Tab_Modding.ITM_Tab_Modding_C.ActivationForModChanged
	void BndEvt__ApplyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function ITM_Tab_Modding.ITM_Tab_Modding_C.BndEvt__ApplyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	void BndEvt__InstallNewModsButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(); // Function ITM_Tab_Modding.ITM_Tab_Modding_C.BndEvt__InstallNewModsButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	void PreConstruct(bool IsDesignTime); // Function ITM_Tab_Modding.ITM_Tab_Modding_C.PreConstruct
	void ExecuteUbergraph_ITM_Tab_Modding(int32_t EntryPoint); // Function ITM_Tab_Modding.ITM_Tab_Modding_C.ExecuteUbergraph_ITM_Tab_Modding
};

