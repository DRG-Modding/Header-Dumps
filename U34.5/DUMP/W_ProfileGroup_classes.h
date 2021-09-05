// WidgetBlueprintGeneratedClass W_ProfileGroup.W_ProfileGroup_C
// Size: 0x2c0 (Inherited: 0x230)
struct UW_ProfileGroup_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UButton* ExpandButton; // 0x238(0x08)
	UCanvasPanel* Main; // 0x240(0x08)
	UVerticalBox* ProfileEntriesVerticalBox; // 0x248(0x08)
	UTextBlock* ProfileName; // 0x250(0x08)
	UButton* SpawnButton; // 0x258(0x08)
	UButton* SpawnButton_2; // 0x260(0x08)
	FString Group Name; // 0x268(0x10)
	bool Is Expanded; // 0x278(0x01)
	FMulticastInlineDelegate On Expand Changed; // 0x280(0x10)
	FMulticastInlineDelegate On Spawn; // 0x290(0x10)
	TArray<UW_ProfileEntry_C*> Profile Entry Widgets; // 0x2a0(0x10)
	FMulticastInlineDelegate On Add Profile; // 0x2b0(0x10)

	void Recalculate Random Percentages();
	void Update Profile Entry(FGuid Profile ID, FString Title, int32_t Spawn Count, bool Is Random Pooled, float Random Weight, bool Is Loadout A, bool Is Loadout B, bool Is Loadout C);
	void Add Profile Entry(FGuid Profile ID, FString Title, int32_t Spawn Count, bool Is Random Pooled, float Random Weight, bool Is Loadout A, bool Is Loadout B, bool Is Loadout C, UW_ProfileEntry_C* Profile Entry Widget);
	void Set Expanded(bool Is Expanded);
	void BndEvt__ExpandButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Spawnbutton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Spawnbutton_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_W_ProfileGroup(int32_t EntryPoint);
	void On Add Profile__DelegateSignature(FString Profile Name);
	void On Spawn__DelegateSignature(FString Group Name);
	void On Expand Changed__DelegateSignature(FString Group Name, bool Is Expanded);
};

