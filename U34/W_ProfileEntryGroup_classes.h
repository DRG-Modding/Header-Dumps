// WidgetBlueprintGeneratedClass W_ProfileEntryGroup.W_ProfileEntryGroup_C
// Size: 0x2a8 (Inherited: 0x230)
struct UW_ProfileEntryGroup_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UButton* ExpandButton; // 0x238(0x08)
	struct UCanvasPanel* Main; // 0x240(0x08)
	struct UVerticalBox* ProfileEntriesVerticalBox; // 0x248(0x08)
	struct UTextBlock* ProfileName; // 0x250(0x08)
	struct UButton* SpawnButton; // 0x258(0x08)
	struct FString Group Name; // 0x260(0x10)
	bool Is Expanded; // 0x270(0x01)
	char UnknownData_271[0x3]; // 0x271(0x03)
	struct FGuid Group Guid; // 0x274(0x10)
	char UnknownData_284[0x4]; // 0x284(0x04)
	struct FMulticastInlineDelegate On Expand Changed; // 0x288(0x10)
	struct FMulticastInlineDelegate On Spawn; // 0x298(0x10)

	void Set Expanded(bool Is Expanded); // Function W_ProfileEntryGroup.W_ProfileEntryGroup_C.Set Expanded
	void Add Profile Entry Widget(struct UW_ProfileEntry_C* Entry Widget); // Function W_ProfileEntryGroup.W_ProfileEntryGroup_C.Add Profile Entry Widget
	void Set Group Details(struct FString Group Name); // Function W_ProfileEntryGroup.W_ProfileEntryGroup_C.Set Group Details
	void BndEvt__ExpandButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function W_ProfileEntryGroup.W_ProfileEntryGroup_C.BndEvt__ExpandButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void OnInitialized(); // Function W_ProfileEntryGroup.W_ProfileEntryGroup_C.OnInitialized
	void BndEvt__Spawnbutton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function W_ProfileEntryGroup.W_ProfileEntryGroup_C.BndEvt__Spawnbutton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	void ExecuteUbergraph_W_ProfileEntryGroup(int32_t EntryPoint); // Function W_ProfileEntryGroup.W_ProfileEntryGroup_C.ExecuteUbergraph_W_ProfileEntryGroup
	void On Spawn__DelegateSignature(struct FString Group Name); // Function W_ProfileEntryGroup.W_ProfileEntryGroup_C.On Spawn__DelegateSignature
	void On Expand Changed__DelegateSignature(struct FString Group Name, bool Is Expanded); // Function W_ProfileEntryGroup.W_ProfileEntryGroup_C.On Expand Changed__DelegateSignature
};

