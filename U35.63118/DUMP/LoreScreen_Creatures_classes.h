// WidgetBlueprintGeneratedClass LoreScreen_Creatures.LoreScreen_Creatures_C
// Size: 0x380 (Inherited: 0x2c8)
struct ULoreScreen_Creatures_C : ULoreScreen_Master_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	UWidgetAnimation* CreatureFadeOut; // 0x2d0(0x08)
	UBasic_ScrollBarBox_C* Basic_ScrollBarBox_117; // 0x2d8(0x08)
	UImage* CreatureImage; // 0x2e0(0x08)
	UHorizontalBox* HorizontalBox_KillCount; // 0x2e8(0x08)
	UImage* Image_crosshair01; // 0x2f0(0x08)
	UImage* Image_crosshair2; // 0x2f8(0x08)
	UITM_DragRotateCharacterShowroom_C* ITM_DragRotateCharacterShowroom; // 0x300(0x08)
	ULore_Container_CombatTip_C* Lore_Container_CombatTip; // 0x308(0x08)
	ULore_Container_CombatTip_C* Lore_Container_CombatTip_161; // 0x310(0x08)
	ULore_Container_CreatureInfo_C* Lore_Content_Container_CreatureInfo; // 0x318(0x08)
	ULore_Content_Statistics_C* Lore_Content_Statistics; // 0x320(0x08)
	ULoreScreen_Template_C* LoreScreen_Template; // 0x328(0x08)
	URichTextSizable* RichTextSizable_Description; // 0x330(0x08)
	USizeBox* SizeBox_Description; // 0x338(0x08)
	UTextBlock* TextBlock_Kills; // 0x340(0x08)
	UVerticalBox* VerticalBox_Hints; // 0x348(0x08)
	UEnemyMinersManualData* enemy; // 0x350(0x08)
	bool IsHovering; // 0x358(0x01)
	UAudioComponent* HoverSound; // 0x360(0x08)
	UMaterialInstanceDynamic* CreatureDynMat; // 0x368(0x08)
	bool IsRotatingLeft; // 0x370(0x01)
	UEnemyID* TwinID; // 0x378(0x08)

	void Construct();
	void RefreshContent();
	void RefreshCreature();
	void FadeOutFinished();
	void ShowCreature();
	void Tick(FGeometry MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_LoreScreen_Creatures(int32_t EntryPoint);
};

