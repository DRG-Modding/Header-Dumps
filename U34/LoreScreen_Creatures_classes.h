// WidgetBlueprintGeneratedClass LoreScreen_Creatures.LoreScreen_Creatures_C
// Size: 0x380 (Inherited: 0x2c8)
struct ULoreScreen_Creatures_C : ULoreScreen_Master_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UWidgetAnimation* CreatureFadeOut; // 0x2d0(0x08)
	struct UBasic_ScrollBarBox_C* Basic_ScrollBarBox_117; // 0x2d8(0x08)
	struct UImage* CreatureImage; // 0x2e0(0x08)
	struct UHorizontalBox* HorizontalBox_KillCount; // 0x2e8(0x08)
	struct UImage* Image_crosshair01; // 0x2f0(0x08)
	struct UImage* Image_crosshair2; // 0x2f8(0x08)
	struct UITM_DragRotateCharacterShowroom_C* ITM_DragRotateCharacterShowroom; // 0x300(0x08)
	struct ULore_Container_CombatTip_C* Lore_Container_CombatTip; // 0x308(0x08)
	struct ULore_Container_CombatTip_C* Lore_Container_CombatTip_161; // 0x310(0x08)
	struct ULore_Container_CreatureInfo_C* Lore_Content_Container_CreatureInfo; // 0x318(0x08)
	struct ULore_Content_Statistics_C* Lore_Content_Statistics; // 0x320(0x08)
	struct ULoreScreen_Template_C* LoreScreen_Template; // 0x328(0x08)
	struct URichTextSizable* RichTextSizable_Description; // 0x330(0x08)
	struct USizeBox* SizeBox_Description; // 0x338(0x08)
	struct UTextBlock* TextBlock_Kills; // 0x340(0x08)
	struct UVerticalBox* VerticalBox_Hints; // 0x348(0x08)
	struct UEnemyMinersManualData* enemy; // 0x350(0x08)
	bool IsHovering; // 0x358(0x01)
	char UnknownData_359[0x7]; // 0x359(0x07)
	struct UAudioComponent* HoverSound; // 0x360(0x08)
	struct UMaterialInstanceDynamic* CreatureDynMat; // 0x368(0x08)
	bool IsRotatingLeft; // 0x370(0x01)
	char UnknownData_371[0x7]; // 0x371(0x07)
	struct UEnemyID* TwinID; // 0x378(0x08)

	void Construct(); // Function LoreScreen_Creatures.LoreScreen_Creatures_C.Construct
	void RefreshContent(); // Function LoreScreen_Creatures.LoreScreen_Creatures_C.RefreshContent
	void RefreshCreature(); // Function LoreScreen_Creatures.LoreScreen_Creatures_C.RefreshCreature
	void FadeOutFinished(); // Function LoreScreen_Creatures.LoreScreen_Creatures_C.FadeOutFinished
	void ShowCreature(); // Function LoreScreen_Creatures.LoreScreen_Creatures_C.ShowCreature
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function LoreScreen_Creatures.LoreScreen_Creatures_C.Tick
	void ExecuteUbergraph_LoreScreen_Creatures(int32_t EntryPoint); // Function LoreScreen_Creatures.LoreScreen_Creatures_C.ExecuteUbergraph_LoreScreen_Creatures
};

