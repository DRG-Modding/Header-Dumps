// WidgetBlueprintGeneratedClass UpgradedDorettaUI.UpgradedDorettaUI_C
// Size: 0x360 (Inherited: 0x230)
struct UUpgradedDorettaUI_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UCheckBox* Defense1; // 0x238(0x08)
	struct UCheckBox* Deposit1; // 0x240(0x08)
	struct UCheckBox* Deposit2; // 0x248(0x08)
	struct UImage* DrilldozerIcon; // 0x250(0x08)
	struct UCheckBox* Light1; // 0x258(0x08)
	struct UCheckBox* Pipe1; // 0x260(0x08)
	struct UCheckBox* Pipe2; // 0x268(0x08)
	struct UCheckBox* Turret1; // 0x270(0x08)
	struct UCheckBox* Turret2; // 0x278(0x08)
	struct UCheckBox* Turret3; // 0x280(0x08)
	struct UCheckBox* Turret4; // 0x288(0x08)
	struct UCheckBox* Waste1; // 0x290(0x08)
	struct FMulticastInlineDelegate Save Changes Requested; // 0x298(0x10)
	struct FMulticastInlineDelegate Turret 1 Requested; // 0x2a8(0x10)
	struct FMulticastInlineDelegate Turret 2 Requested; // 0x2b8(0x10)
	struct FMulticastInlineDelegate Turret 3 Requested; // 0x2c8(0x10)
	struct FMulticastInlineDelegate Turret 4 Requested; // 0x2d8(0x10)
	struct FMulticastInlineDelegate Deposit 1 Requested; // 0x2e8(0x10)
	struct FMulticastInlineDelegate Deposit 2 Requested; // 0x2f8(0x10)
	struct FMulticastInlineDelegate Pipe 1 Requested; // 0x308(0x10)
	struct FMulticastInlineDelegate Pipe 2 Requested; // 0x318(0x10)
	struct UUpgradedDorettaSaveGame_C* Upgraded Doretta Save Game; // 0x328(0x08)
	struct FMulticastInlineDelegate Light 1 Requested; // 0x330(0x10)
	struct FMulticastInlineDelegate Waste 1 Requested; // 0x340(0x10)
	struct FMulticastInlineDelegate Defense 1 Requested; // 0x350(0x10)

	void Set Settings(struct UUpgradedDorettaSaveGame_C* Settings, bool Turret 1, bool Turret 2, bool Turret 3, bool Turret 4, bool Deposit 1, bool Deposit 2, bool Pipe 1, bool Pipe 2, bool Light 1, bool Waste 1, bool Defense 1); // Function UpgradedDorettaUI.UpgradedDorettaUI_C.Set Settings
	void Get Settings(struct UUpgradedDorettaSaveGame_C* Settings); // Function UpgradedDorettaUI.UpgradedDorettaUI_C.Get Settings
	void BndEvt__ToggleHalloween_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function UpgradedDorettaUI.UpgradedDorettaUI_C.BndEvt__ToggleHalloween_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
	void BndEvt__ToggleDeposit1_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function UpgradedDorettaUI.UpgradedDorettaUI_C.BndEvt__ToggleDeposit1_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature
	void BndEvt__ToggleDeposit2_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function UpgradedDorettaUI.UpgradedDorettaUI_C.BndEvt__ToggleDeposit2_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
	void BndEvt__ToggleTurret3_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function UpgradedDorettaUI.UpgradedDorettaUI_C.BndEvt__ToggleTurret3_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature
	void BndEvt__ToggleTurret4_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function UpgradedDorettaUI.UpgradedDorettaUI_C.BndEvt__ToggleTurret4_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature
	void BndEvt__TogglePipe1_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function UpgradedDorettaUI.UpgradedDorettaUI_C.BndEvt__TogglePipe1_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature
	void BndEvt__TogglePipe2_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function UpgradedDorettaUI.UpgradedDorettaUI_C.BndEvt__TogglePipe2_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature
	void BndEvt__Turret1_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function UpgradedDorettaUI.UpgradedDorettaUI_C.BndEvt__Turret1_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
	void BndEvt__Speed_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function UpgradedDorettaUI.UpgradedDorettaUI_C.BndEvt__Speed_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	void BndEvt__Defense_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function UpgradedDorettaUI.UpgradedDorettaUI_C.BndEvt__Defense_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature
	void BndEvt__Spotlight_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function UpgradedDorettaUI.UpgradedDorettaUI_C.BndEvt__Spotlight_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature
	void ExecuteUbergraph_UpgradedDorettaUI(int32_t EntryPoint); // Function UpgradedDorettaUI.UpgradedDorettaUI_C.ExecuteUbergraph_UpgradedDorettaUI
	void Defense 1 Requested__DelegateSignature(); // Function UpgradedDorettaUI.UpgradedDorettaUI_C.Defense 1 Requested__DelegateSignature
	void Waste 1 Requested__DelegateSignature(); // Function UpgradedDorettaUI.UpgradedDorettaUI_C.Waste 1 Requested__DelegateSignature
	void Light 1 Requested__DelegateSignature(); // Function UpgradedDorettaUI.UpgradedDorettaUI_C.Light 1 Requested__DelegateSignature
	void Pipe 2 Requested__DelegateSignature(); // Function UpgradedDorettaUI.UpgradedDorettaUI_C.Pipe 2 Requested__DelegateSignature
	void Pipe 1 Requested__DelegateSignature(); // Function UpgradedDorettaUI.UpgradedDorettaUI_C.Pipe 1 Requested__DelegateSignature
	void Deposit 2 Requested__DelegateSignature(); // Function UpgradedDorettaUI.UpgradedDorettaUI_C.Deposit 2 Requested__DelegateSignature
	void Deposit 1 Requested__DelegateSignature(); // Function UpgradedDorettaUI.UpgradedDorettaUI_C.Deposit 1 Requested__DelegateSignature
	void Turret 4 Requested__DelegateSignature(); // Function UpgradedDorettaUI.UpgradedDorettaUI_C.Turret 4 Requested__DelegateSignature
	void Turret 3 Requested__DelegateSignature(); // Function UpgradedDorettaUI.UpgradedDorettaUI_C.Turret 3 Requested__DelegateSignature
	void Turret 2 Requested__DelegateSignature(); // Function UpgradedDorettaUI.UpgradedDorettaUI_C.Turret 2 Requested__DelegateSignature
	void Turret 1 Requested__DelegateSignature(); // Function UpgradedDorettaUI.UpgradedDorettaUI_C.Turret 1 Requested__DelegateSignature
	void Save Changes Requested__DelegateSignature(); // Function UpgradedDorettaUI.UpgradedDorettaUI_C.Save Changes Requested__DelegateSignature
};

