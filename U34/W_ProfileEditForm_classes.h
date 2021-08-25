// WidgetBlueprintGeneratedClass W_ProfileEditForm.W_ProfileEditForm_C
// Size: 0x3d1 (Inherited: 0x230)
struct UW_ProfileEditForm_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UEditableTextBox* ChainProfileTextBox; // 0x238(0x08)
	struct UEditableTextBox* ConsoleCommandTextBox; // 0x240(0x08)
	struct USpinBox* Delay_SpinBox; // 0x248(0x08)
	struct UComboBoxString* GameObjectCombobox; // 0x250(0x08)
	struct USpinBox* LifeTime_SpinBox; // 0x258(0x08)
	struct USpinBox* MaxDistance_SpinBox; // 0x260(0x08)
	struct USpinBox* MaxSlope_SpinBox; // 0x268(0x08)
	struct USpinBox* MinDistance_SpinBox; // 0x270(0x08)
	struct USpinBox* MinSlope_SpinBox; // 0x278(0x08)
	struct USpinBox* NameplateHeight_SpinBox; // 0x280(0x08)
	struct UEditableTextBox* NameplateMsgTextBox; // 0x288(0x08)
	struct UEditableTextBox* NameplateTextBox; // 0x290(0x08)
	struct USpinBox* Nitra_SpinBox; // 0x298(0x08)
	struct UEditableTextBox* NotificationTextBox; // 0x2a0(0x08)
	struct USpinBox* OffsetV_SpinBox; // 0x2a8(0x08)
	struct USpinBox* OffsetX_SpinBox; // 0x2b0(0x08)
	struct USpinBox* OffsetY_SpinBox; // 0x2b8(0x08)
	struct USpinBox* OffsetZ_SpinBox; // 0x2c0(0x08)
	struct UCheckBox* OnAll_Checkbox; // 0x2c8(0x08)
	struct UCheckBox* OnDriller_Checkbox; // 0x2d0(0x08)
	struct UCheckBox* OnEngineer_Checkbox; // 0x2d8(0x08)
	struct UCheckBox* OnGunner_CheckBox; // 0x2e0(0x08)
	struct UCheckBox* OnHost_CheckBox; // 0x2e8(0x08)
	struct UCheckBox* OnRandom_Checkbox; // 0x2f0(0x08)
	struct UCheckBox* OnScout_CheckBox; // 0x2f8(0x08)
	struct UEditableTextBox* ProfileNameTextBox; // 0x300(0x08)
	struct UCheckBox* Random_CheckBox; // 0x308(0x08)
	struct USpinBox* Rerolls_Spinbox; // 0x310(0x08)
	struct USpinBox* RotationV_SpinBox; // 0x318(0x08)
	struct USpinBox* RotationX_SpinBox; // 0x320(0x08)
	struct USpinBox* RotationY_SpinBox; // 0x328(0x08)
	struct USpinBox* RotationZ_SpinBox; // 0x330(0x08)
	struct USpinBox* ScaleV_SpinBox; // 0x338(0x08)
	struct USpinBox* ScaleX_SpinBox; // 0x340(0x08)
	struct USpinBox* ScaleY_SpinBox; // 0x348(0x08)
	struct USpinBox* ScaleZ_SpinBox; // 0x350(0x08)
	struct USpinBox* SpawnCount_SpinBox; // 0x358(0x08)
	struct USpinBox* SpawnCountV_SpinBox; // 0x360(0x08)
	struct USpinBox* Weight_Spinbox; // 0x368(0x08)
	struct FGuid Spawn Profile ID; // 0x370(0x10)
	struct TMap<struct FString, struct AActor*> Game Objects; // 0x380(0x50)
	bool Profile Enabled; // 0x3d0(0x01)

	void Get Game Object Name By Actor(struct UObject* Actor, struct FString Result); // Function W_ProfileEditForm.W_ProfileEditForm_C.Get Game Object Name By Actor
	void Set Profile(struct FSpawnProfile Spawn Profile); // Function W_ProfileEditForm.W_ProfileEditForm_C.Set Profile
	void Get Profile(struct FSpawnProfile Profile); // Function W_ProfileEditForm.W_ProfileEditForm_C.Get Profile
	void Initialize(struct TMap<struct FString, struct AActor*> Game Objects1); // Function W_ProfileEditForm.W_ProfileEditForm_C.Initialize
	void OnInitialized(); // Function W_ProfileEditForm.W_ProfileEditForm_C.OnInitialized
	void BndEvt__ChainProfileTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // Function W_ProfileEditForm.W_ProfileEditForm_C.BndEvt__ChainProfileTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
	void ExecuteUbergraph_W_ProfileEditForm(int32_t EntryPoint); // Function W_ProfileEditForm.W_ProfileEditForm_C.ExecuteUbergraph_W_ProfileEditForm
};

