// WidgetBlueprintGeneratedClass Lore_Container_CreatureInfo.Lore_Container_CreatureInfo_C
// Size: 0x334 (Inherited: 0x230)
struct ULore_Container_CreatureInfo_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_BG_CutCorner_C* Basic_BG_CutCorner_C; // 0x238(0x08)
	struct UBasic_BG_CutCorner_C* Basic_BG_CutCorner_C_1; // 0x240(0x08)
	struct UBasic_BG_CutCorner_C* Basic_BG_Window_C_1; // 0x248(0x08)
	struct UBasic_Window_CutCorner_C* Basic_Window; // 0x250(0x08)
	struct UHorizontalBox* HBox_Armor; // 0x258(0x08)
	struct UHorizontalBox* HBox_Attack; // 0x260(0x08)
	struct UHorizontalBox* HBox_Attack_Enemy2; // 0x268(0x08)
	struct UHorizontalBox* HBox_Family; // 0x270(0x08)
	struct UHorizontalBox* HBox_Special; // 0x278(0x08)
	struct UHorizontalBox* HBox_Type; // 0x280(0x08)
	struct UHorizontalBox* HBox_Weakpoint; // 0x288(0x08)
	struct ULore_InfoBox_C* InfoBox_Armor; // 0x290(0x08)
	struct ULore_InfoBox_C* InfoBox_Family; // 0x298(0x08)
	struct ULore_InfoBox_C* InfoBox_Type; // 0x2a0(0x08)
	struct ULore_InfoBox_C* InfoBox_Weakpoints; // 0x2a8(0x08)
	struct USizeBox* SizeBox_4; // 0x2b0(0x08)
	struct UTextBlock* Text_Attack; // 0x2b8(0x08)
	struct UTextBlock* Text_Attack_enemy2; // 0x2c0(0x08)
	struct UTextBlock* TextBlock_1; // 0x2c8(0x08)
	struct UTextBlock* TextBlock_3; // 0x2d0(0x08)
	struct UTextBlock* TextBlock_4; // 0x2d8(0x08)
	struct UTextBlock* TextBlock_5; // 0x2e0(0x08)
	struct UTextBlock* TextBlock_Header; // 0x2e8(0x08)
	struct UWrapBox* WrapBox_Attacks; // 0x2f0(0x08)
	struct UWrapBox* WrapBox_Attacks_Enemy2; // 0x2f8(0x08)
	struct UWrapBox* WrapBox_SpecialAttacks; // 0x300(0x08)
	struct FText TempText; // 0x308(0x18)
	struct UMinersManual* MinersManual; // 0x320(0x08)
	struct UEnemyID* TwinID; // 0x328(0x08)
	float BoxPadding; // 0x330(0x04)

	void TwinsCustomAttack(struct UEnemyMinersManualData* enemy); // Function Lore_Container_CreatureInfo.Lore_Container_CreatureInfo_C.TwinsCustomAttack
	void GetTypeText(enum class EEnemyType InType, struct FText DisplayText, struct UTexture2D* Icon); // Function Lore_Container_CreatureInfo.Lore_Container_CreatureInfo_C.GetTypeText
	void SetData(struct UEnemyMinersManualData* Creature, struct UMinersManual* MinersManual); // Function Lore_Container_CreatureInfo.Lore_Container_CreatureInfo_C.SetData
	void FillInAttacks(struct UWrapBox* Container, struct TArray<struct FEnemyAttackDescription> Attacks); // Function Lore_Container_CreatureInfo.Lore_Container_CreatureInfo_C.FillInAttacks
	void ExecuteUbergraph_Lore_Container_CreatureInfo(int32_t EntryPoint); // Function Lore_Container_CreatureInfo.Lore_Container_CreatureInfo_C.ExecuteUbergraph_Lore_Container_CreatureInfo
};

