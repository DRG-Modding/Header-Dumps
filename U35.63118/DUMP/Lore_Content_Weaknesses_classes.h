// WidgetBlueprintGeneratedClass Lore_Content_Weaknesses.Lore_Content_Weaknesses_C
// Size: 0x280 (Inherited: 0x230)
struct ULore_Content_Weaknesses_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* FadeIn; // 0x238(0x08)
	UHorizontalBox* HorizontalBox_IconHolder; // 0x240(0x08)
	ULore_DamageTypeIcon_C* Lore_DamageTypeIcon; // 0x248(0x08)
	ULore_DamageTypeIcon_C* Lore_DamageTypeIcon_192; // 0x250(0x08)
	UTextBlock* TextBlock_Header; // 0x258(0x08)
	FText Text; // 0x260(0x18)
	bool HasFadedIn; // 0x278(0x01)
	int32_t NumbOfIcons; // 0x27c(0x04)

	void PreConstruct(bool IsDesignTime);
	void ClearChildren();
	void AddIcon(FDamageTypeDescription Icon);
	void PlayFade(bool Forward);
	void ExecuteUbergraph_Lore_Content_Weaknesses(int32_t EntryPoint);
};

