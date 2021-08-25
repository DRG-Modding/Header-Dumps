// WidgetBlueprintGeneratedClass Lore_DamageTypeIcon.Lore_DamageTypeIcon_C
// Size: 0x2d0 (Inherited: 0x230)
struct ULore_DamageTypeIcon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* Intro; // 0x238(0x08)
	struct UButton* Button_1; // 0x240(0x08)
	struct UImage* Icon; // 0x248(0x08)
	struct FVector2D IconSize; // 0x250(0x08)
	struct FDamageTypeDescription DamageType; // 0x258(0x78)

	struct UWidget* GetToolTipWidget_1(); // Function Lore_DamageTypeIcon.Lore_DamageTypeIcon_C.GetToolTipWidget_1
	void Construct(); // Function Lore_DamageTypeIcon.Lore_DamageTypeIcon_C.Construct
	void SetData(struct FDamageTypeDescription DamageType); // Function Lore_DamageTypeIcon.Lore_DamageTypeIcon_C.SetData
	void PlayIntro(float Delay); // Function Lore_DamageTypeIcon.Lore_DamageTypeIcon_C.PlayIntro
	void ExecuteUbergraph_Lore_DamageTypeIcon(int32_t EntryPoint); // Function Lore_DamageTypeIcon.Lore_DamageTypeIcon_C.ExecuteUbergraph_Lore_DamageTypeIcon
};

