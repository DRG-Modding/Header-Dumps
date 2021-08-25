// WidgetBlueprintGeneratedClass W_ProfileEntry.W_ProfileEntry_C
// Size: 0x2c8 (Inherited: 0x230)
struct UW_ProfileEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UTextBlock* count; // 0x238(0x08)
	struct UButton* EditButton; // 0x240(0x08)
	struct UCheckBox* EnabledCheckbox; // 0x248(0x08)
	struct UTextBlock* ProfileName; // 0x250(0x08)
	struct UTextBlock* Random; // 0x258(0x08)
	struct FGuid Spawn Profile ID; // 0x260(0x10)
	struct FString Profile Name; // 0x270(0x10)
	struct FMulticastInlineDelegate On Edit Profile; // 0x280(0x10)
	bool Profile Enabled; // 0x290(0x01)
	char UnknownData_291[0x7]; // 0x291(0x07)
	struct FMulticastInlineDelegate On Enabled Changed; // 0x298(0x10)
	int32_t Spawn Count; // 0x2a8(0x04)
	char UnknownData_2AC[0x4]; // 0x2ac(0x04)
	struct FString Object Name; // 0x2b0(0x10)
	bool Is Random Pooled; // 0x2c0(0x01)
	char UnknownData_2C1[0x3]; // 0x2c1(0x03)
	float Random Weight; // 0x2c4(0x04)

	struct FText Get_Random_Text_1(); // Function W_ProfileEntry.W_ProfileEntry_C.Get_Random_Text_1
	struct FText Get Count Text(); // Function W_ProfileEntry.W_ProfileEntry_C.Get Count Text
	void Set Entry Details(struct FGuid Profile ID, bool Profile Enabled, struct FString Profile Name, int32_t Spawn Count, struct FString Object Name, bool Is Random Pooled, float Random Weight); // Function W_ProfileEntry.W_ProfileEntry_C.Set Entry Details
	void BndEvt__EditButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function W_ProfileEntry.W_ProfileEntry_C.BndEvt__EditButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__CheckBox_231_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function W_ProfileEntry.W_ProfileEntry_C.BndEvt__CheckBox_231_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature
	void ExecuteUbergraph_W_ProfileEntry(int32_t EntryPoint); // Function W_ProfileEntry.W_ProfileEntry_C.ExecuteUbergraph_W_ProfileEntry
	void On Enabled Changed__DelegateSignature(struct FGuid Profile ID, bool Enabled); // Function W_ProfileEntry.W_ProfileEntry_C.On Enabled Changed__DelegateSignature
	void On Edit Profile__DelegateSignature(struct FGuid Profile ID); // Function W_ProfileEntry.W_ProfileEntry_C.On Edit Profile__DelegateSignature
};

