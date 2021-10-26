// WidgetBlueprintGeneratedClass ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C
// Size: 0x3c0 (Inherited: 0x230)
struct UITM_EscMenu_BriefingV2_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* NewMissionSelected; // 0x238(0x08)
	UBasic_IconWithOutline_C* Basic_IconWithOutline; // 0x240(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x248(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_2; // 0x250(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_3; // 0x258(0x08)
	UTextBlock* BiomeName; // 0x260(0x08)
	UImage* BiomeOutlined; // 0x268(0x08)
	UButton* Button_Biome; // 0x270(0x08)
	UButton* Button_MissionType; // 0x278(0x08)
	UButton* Button_Spacerig; // 0x280(0x08)
	UTextBlock* DATA_MissionTime; // 0x288(0x08)
	UTextBlock* DataMissionName; // 0x290(0x08)
	UImage* Image_Campaign; // 0x298(0x08)
	UImage* Image_MissionTerminal; // 0x2a0(0x08)
	UImage* Image_Separator; // 0x2a8(0x08)
	UImage* Image_Spacerig; // 0x2b0(0x08)
	UImage* ImageBG; // 0x2b8(0x08)
	UImage* ImageMissionIconGlow; // 0x2c0(0x08)
	UITM_DeepDive_ObjectiveIcon_C* ITM_DeepDive_ObjectiveIcon; // 0x2c8(0x08)
	UITM_DeepDiveHeader_C* ITM_DeepDiveHeader; // 0x2d0(0x08)
	UITM_DeepDiveInfo_C* ITM_DeepDiveInfo; // 0x2d8(0x08)
	UITM_MisSel_MissionIconBasic_C* ITM_MisSel_MissionIconBasic; // 0x2e0(0x08)
	UITM_MissionInfo_C* ITM_MissionInfo; // 0x2e8(0x08)
	UWidgetSwitcher* MissionContent; // 0x2f0(0x08)
	UWidgetSwitcher* MissionHeader; // 0x2f8(0x08)
	UWidgetSwitcher* MissionInfo; // 0x300(0x08)
	UVerticalBox* MissionTime; // 0x308(0x08)
	UITM_MissionBar_Objective_C* OnSpacerigPrimaryObjective; // 0x310(0x08)
	UITM_MissionBar_Objective_C* OnSpacerigSecondaryObjective; // 0x318(0x08)
	UITM_ObjectiveBox_InMission_C* PrimaryObj_InMission; // 0x320(0x08)
	URichTextSizable* RichTextSizable_107; // 0x328(0x08)
	UITM_ObjectiveBox_InMission_C* SecondaryObj_InMission; // 0x330(0x08)
	USpacer* Spacer_DeepDive; // 0x338(0x08)
	UTextBlock* Spacerig; // 0x340(0x08)
	UTextBlock* Text_MissionName; // 0x348(0x08)
	UTextBlock* TEXT_MissionTime; // 0x350(0x08)
	UTextBlock* TextBlock_1; // 0x358(0x08)
	UTextBlock* TextBlock_2; // 0x360(0x08)
	UTextBlock* TextBlock_MissionType; // 0x368(0x08)
	UWidgetSwitcher* WidgetSwitcher_MissionObjectives; // 0x370(0x08)
	FTimerHandle MissionUpdateTimer; // 0x378(0x08)
	FMulticastInlineDelegate MissionTypeClicked; // 0x380(0x10)
	FMulticastInlineDelegate MutatorClicked; // 0x390(0x10)
	FMulticastInlineDelegate WarningClicked; // 0x3a0(0x10)
	FMulticastInlineDelegate BiomeClicked; // 0x3b0(0x10)

	void SequenceEvent__ENTRYPOINTITM_EscMenu_BriefingV2_1();
	void UpdateFromAnimation();
	void UpdateBiomeInfo(UBiome* Biome);
	UWidget* Get Tool Tip Widget();
	void UpdateMissionStructure(bool IsDeepDive);
	void UpdateMissionInfo(UGeneratedMission* mission);
	void PreConstruct(bool IsDesignTime);
	void Update();
	void UpdateMissionTime();
	void Close();
	void BndEvt__Button_MissionType_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Biome_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_MissionType_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_MissionType_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Spacerig_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void OnGeneratedMissionChanged(UGeneratedMission* OutGeneratedMission);
	void MutatorClicked_Event();
	void WarningClicked_Event();
	void ExecuteUbergraph_ITM_EscMenu_BriefingV2(int32_t EntryPoint);
	void BiomeClicked__DelegateSignature();
	void WarningClicked__DelegateSignature();
	void MutatorClicked__DelegateSignature();
	void MissionTypeClicked__DelegateSignature();
};

