// WidgetBlueprintGeneratedClass Lore_Content_Statistics.Lore_Content_Statistics_C
// Size: 0x258 (Inherited: 0x230)
struct ULore_Content_Statistics_C : UUserWidget {
	ULore_Content_ProgressBar_C* Bar_Damage; // 0x230(0x08)
	ULore_Content_ProgressBar_C* Bar_Health; // 0x238(0x08)
	ULore_Content_ProgressBar_C* Bar_Speed; // 0x240(0x08)
	ULore_Content_Weaknesses_C* Lore_Content_Resistances; // 0x248(0x08)
	ULore_Content_Weaknesses_C* Lore_Content_Weaknesses; // 0x250(0x08)

	void SetData(UEnemyMinersManualData* enemy, TArray<FDamageTypeDescription> WeaknessesIcons, TArray<FDamageTypeDescription> ResistancesIcons);
};

