// WidgetBlueprintGeneratedClass Lore_Content_Weaknesses.Lore_Content_Weaknesses_C
// Size: 0x280 (Inherited: 0x230)
struct ULore_Content_Weaknesses_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* FadeIn; // 0x238(0x08)
	struct UHorizontalBox* HorizontalBox_IconHolder; // 0x240(0x08)
	struct ULore_DamageTypeIcon_C* Lore_DamageTypeIcon; // 0x248(0x08)
	struct ULore_DamageTypeIcon_C* Lore_DamageTypeIcon_192; // 0x250(0x08)
	struct UTextBlock* TextBlock_Header; // 0x258(0x08)
	struct FText Text; // 0x260(0x18)
	bool HasFadedIn; // 0x278(0x01)
	char UnknownData_279[0x3]; // 0x279(0x03)
	int32_t NumbOfIcons; // 0x27c(0x04)

	void PreConstruct(bool IsDesignTime); // Function Lore_Content_Weaknesses.Lore_Content_Weaknesses_C.PreConstruct
	void ClearChildren(); // Function Lore_Content_Weaknesses.Lore_Content_Weaknesses_C.ClearChildren
	void AddIcon(struct FDamageTypeDescription Icon); // Function Lore_Content_Weaknesses.Lore_Content_Weaknesses_C.AddIcon
	void PlayFade(bool Forward); // Function Lore_Content_Weaknesses.Lore_Content_Weaknesses_C.PlayFade
	void ExecuteUbergraph_Lore_Content_Weaknesses(int32_t EntryPoint); // Function Lore_Content_Weaknesses.Lore_Content_Weaknesses_C.ExecuteUbergraph_Lore_Content_Weaknesses
};

