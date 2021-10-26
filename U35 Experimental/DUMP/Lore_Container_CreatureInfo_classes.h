// WidgetBlueprintGeneratedClass Lore_Container_CreatureInfo.Lore_Container_CreatureInfo_C
// Size: 0x334 (Inherited: 0x230)
struct ULore_Container_CreatureInfo_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_BG_CutCorner_C* Basic_BG_CutCorner_C; // 0x238(0x08)
	UBasic_BG_CutCorner_C* Basic_BG_CutCorner_C_1; // 0x240(0x08)
	UBasic_BG_CutCorner_C* Basic_BG_Window_C_1; // 0x248(0x08)
	UBasic_Window_CutCorner_C* Basic_Window; // 0x250(0x08)
	UHorizontalBox* HBox_Armor; // 0x258(0x08)
	UHorizontalBox* HBox_Attack; // 0x260(0x08)
	UHorizontalBox* HBox_Attack_Enemy2; // 0x268(0x08)
	UHorizontalBox* HBox_Family; // 0x270(0x08)
	UHorizontalBox* HBox_Special; // 0x278(0x08)
	UHorizontalBox* HBox_Type; // 0x280(0x08)
	UHorizontalBox* HBox_Weakpoint; // 0x288(0x08)
	ULore_InfoBox_C* InfoBox_Armor; // 0x290(0x08)
	ULore_InfoBox_C* InfoBox_Family; // 0x298(0x08)
	ULore_InfoBox_C* InfoBox_Type; // 0x2a0(0x08)
	ULore_InfoBox_C* InfoBox_Weakpoints; // 0x2a8(0x08)
	USizeBox* SizeBox_4; // 0x2b0(0x08)
	UTextBlock* Text_Attack; // 0x2b8(0x08)
	UTextBlock* Text_Attack_enemy2; // 0x2c0(0x08)
	UTextBlock* TextBlock_1; // 0x2c8(0x08)
	UTextBlock* TextBlock_3; // 0x2d0(0x08)
	UTextBlock* TextBlock_4; // 0x2d8(0x08)
	UTextBlock* TextBlock_5; // 0x2e0(0x08)
	UTextBlock* TextBlock_Header; // 0x2e8(0x08)
	UWrapBox* WrapBox_Attacks; // 0x2f0(0x08)
	UWrapBox* WrapBox_Attacks_Enemy2; // 0x2f8(0x08)
	UWrapBox* WrapBox_SpecialAttacks; // 0x300(0x08)
	FText TempText; // 0x308(0x18)
	UMinersManual* MinersManual; // 0x320(0x08)
	UEnemyID* TwinID; // 0x328(0x08)
	float BoxPadding; // 0x330(0x04)

	void TwinsCustomAttack(UEnemyMinersManualData* enemy);
	void GetTypeText(enum class EEnemyType InType, FText DisplayText, UTexture2D* Icon);
	void SetData(UEnemyMinersManualData* Creature, UMinersManual* MinersManual);
	void FillInAttacks(UWrapBox* Container, TArray<FEnemyAttackDescription> Attacks);
	void ExecuteUbergraph_Lore_Container_CreatureInfo(int32_t EntryPoint);
};

