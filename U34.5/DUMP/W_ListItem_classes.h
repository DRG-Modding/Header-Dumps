// WidgetBlueprintGeneratedClass W_ListItem.W_ListItem_C
// Size: 0x298 (Inherited: 0x230)
struct UW_ListItem_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UButton* CullButton; // 0x238(0x08)
	UImage* Image_2; // 0x240(0x08)
	UButton* SpawnButton; // 0x248(0x08)
	UTextBlock* SpawnButtonText; // 0x250(0x08)
	FText Name; // 0x258(0x18)
	FMulticastInlineDelegate On Spawn Requested; // 0x270(0x10)
	FMulticastInlineDelegate On Cull Requested; // 0x280(0x10)
	FName Object ID; // 0x290(0x08)

	void BndEvt__EditButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Spawnbutton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_W_ListItem(int32_t EntryPoint);
	void On Spawn Requested__DelegateSignature(FName Object ID);
	void On Cull Requested__DelegateSignature(FName Object ID);
};

