// WidgetBlueprintGeneratedClass Lore_DamageTypeIcon.Lore_DamageTypeIcon_C
// Size: 0x2d0 (Inherited: 0x230)
struct ULore_DamageTypeIcon_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Intro; // 0x238(0x08)
	UButton* Button_1; // 0x240(0x08)
	UImage* Icon; // 0x248(0x08)
	FVector2D IconSize; // 0x250(0x08)
	FDamageTypeDescription DamageType; // 0x258(0x78)

	UWidget* GetToolTipWidget_1();
	void Construct();
	void SetData(FDamageTypeDescription DamageType);
	void PlayIntro(float Delay);
	void ExecuteUbergraph_Lore_DamageTypeIcon(int32_t EntryPoint);
};

