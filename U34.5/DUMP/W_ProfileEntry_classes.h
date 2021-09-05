// WidgetBlueprintGeneratedClass W_ProfileEntry.W_ProfileEntry_C
// Size: 0x2b0 (Inherited: 0x230)
struct UW_ProfileEntry_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UButton* EditButton; // 0x238(0x08)
	UImage* Image; // 0x240(0x08)
	UImage* Image_2; // 0x248(0x08)
	UImage* Image_709; // 0x250(0x08)
	UTextBlock* LabelCount; // 0x258(0x08)
	UTextBlock* LabelLoadoutA; // 0x260(0x08)
	UTextBlock* LabelLoadoutB; // 0x268(0x08)
	UTextBlock* LabelLoadoutC; // 0x270(0x08)
	UTextBlock* LabelRandomPercentage; // 0x278(0x08)
	UTextBlock* TitleLabel; // 0x280(0x08)
	FGuid Spawn Profile ID; // 0x288(0x10)
	FMulticastInlineDelegate On Edit Button Clicked; // 0x298(0x10)
	bool Is Random Pooled; // 0x2a8(0x01)
	float Random Weight; // 0x2ac(0x04)

	void Set Random Percentage(float percentage);
	void Set Count(int32_t count);
	void Set Loadouts(bool Loadout A, bool Loadout B, bool Loadout C);
	void Set Name(FString Title);
	void Set Details(FGuid Profile ID, FString Title, bool Is Loadout A, bool Is Loadout B, bool Is Loadout C, int32_t Spawn Count, bool Is Random Pooled, float Random Weight);
	void BndEvt__EditButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_W_ProfileEntry(int32_t EntryPoint);
	void On Edit Button Clicked__DelegateSignature(FGuid Profile ID);
};

