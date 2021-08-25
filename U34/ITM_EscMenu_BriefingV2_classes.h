// WidgetBlueprintGeneratedClass ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C
// Size: 0x3c0 (Inherited: 0x230)
struct UITM_EscMenu_BriefingV2_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* NewMissionSelected; // 0x238(0x08)
	struct UBasic_IconWithOutline_C* Basic_IconWithOutline; // 0x240(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x248(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_2; // 0x250(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_3; // 0x258(0x08)
	struct UTextBlock* BiomeName; // 0x260(0x08)
	struct UImage* BiomeOutlined; // 0x268(0x08)
	struct UButton* Button_Biome; // 0x270(0x08)
	struct UButton* Button_MissionType; // 0x278(0x08)
	struct UButton* Button_Spacerig; // 0x280(0x08)
	struct UTextBlock* DATA_MissionTime; // 0x288(0x08)
	struct UTextBlock* DataMissionName; // 0x290(0x08)
	struct UImage* Image_Campaign; // 0x298(0x08)
	struct UImage* Image_MissionTerminal; // 0x2a0(0x08)
	struct UImage* Image_Separator; // 0x2a8(0x08)
	struct UImage* Image_Spacerig; // 0x2b0(0x08)
	struct UImage* ImageBG; // 0x2b8(0x08)
	struct UImage* ImageMissionIconGlow; // 0x2c0(0x08)
	struct UITM_DeepDive_ObjectiveIcon_C* ITM_DeepDive_ObjectiveIcon; // 0x2c8(0x08)
	struct UITM_DeepDiveHeader_C* ITM_DeepDiveHeader; // 0x2d0(0x08)
	struct UITM_DeepDiveInfo_C* ITM_DeepDiveInfo; // 0x2d8(0x08)
	struct UITM_MisSel_MissionIconBasic_C* ITM_MisSel_MissionIconBasic; // 0x2e0(0x08)
	struct UITM_MissionInfo_C* ITM_MissionInfo; // 0x2e8(0x08)
	struct UWidgetSwitcher* MissionContent; // 0x2f0(0x08)
	struct UWidgetSwitcher* MissionHeader; // 0x2f8(0x08)
	struct UWidgetSwitcher* MissionInfo; // 0x300(0x08)
	struct UVerticalBox* MissionTime; // 0x308(0x08)
	struct UITM_MissionBar_Objective_C* OnSpacerigPrimaryObjective; // 0x310(0x08)
	struct UITM_MissionBar_Objective_C* OnSpacerigSecondaryObjective; // 0x318(0x08)
	struct UITM_ObjectiveBox_InMission_C* PrimaryObj_InMission; // 0x320(0x08)
	struct URichTextSizable* RichTextSizable_107; // 0x328(0x08)
	struct UITM_ObjectiveBox_InMission_C* SecondaryObj_InMission; // 0x330(0x08)
	struct USpacer* Spacer_DeepDive; // 0x338(0x08)
	struct UTextBlock* Spacerig; // 0x340(0x08)
	struct UTextBlock* Text_MissionName; // 0x348(0x08)
	struct UTextBlock* TEXT_MissionTime; // 0x350(0x08)
	struct UTextBlock* TextBlock_1; // 0x358(0x08)
	struct UTextBlock* TextBlock_2; // 0x360(0x08)
	struct UTextBlock* TextBlock_MissionType; // 0x368(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_MissionObjectives; // 0x370(0x08)
	struct FTimerHandle MissionUpdateTimer; // 0x378(0x08)
	struct FMulticastInlineDelegate MissionTypeClicked; // 0x380(0x10)
	struct FMulticastInlineDelegate MutatorClicked; // 0x390(0x10)
	struct FMulticastInlineDelegate WarningClicked; // 0x3a0(0x10)
	struct FMulticastInlineDelegate BiomeClicked; // 0x3b0(0x10)

	void SequenceEvent__ENTRYPOINTITM_EscMenu_BriefingV2_1(); // Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.SequenceEvent__ENTRYPOINTITM_EscMenu_BriefingV2_1
	void UpdateFromAnimation(); // Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.UpdateFromAnimation
	void UpdateBiomeInfo(struct UBiome* Biome); // Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.UpdateBiomeInfo
	struct UWidget* Get Tool Tip Widget(); // Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.Get Tool Tip Widget
	void UpdateMissionStructure(bool IsDeepDive); // Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.UpdateMissionStructure
	void UpdateMissionInfo(struct UGeneratedMission* mission); // Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.UpdateMissionInfo
	void PreConstruct(bool IsDesignTime); // Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.PreConstruct
	void Update(); // Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.Update
	void UpdateMissionTime(); // Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.UpdateMissionTime
	void Close(); // Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.Close
	void BndEvt__Button_MissionType_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.BndEvt__Button_MissionType_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__Button_Biome_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.BndEvt__Button_Biome_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	void BndEvt__Button_MissionType_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.BndEvt__Button_MissionType_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_MissionType_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.BndEvt__Button_MissionType_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_Spacerig_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.BndEvt__Button_Spacerig_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	void Construct(); // Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.Construct
	void OnGeneratedMissionChanged(struct UGeneratedMission* OutGeneratedMission); // Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.OnGeneratedMissionChanged
	void MutatorClicked_Event(); // Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.MutatorClicked_Event
	void WarningClicked_Event(); // Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.WarningClicked_Event
	void ExecuteUbergraph_ITM_EscMenu_BriefingV2(int32_t EntryPoint); // Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.ExecuteUbergraph_ITM_EscMenu_BriefingV2
	void BiomeClicked__DelegateSignature(); // Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.BiomeClicked__DelegateSignature
	void WarningClicked__DelegateSignature(); // Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.WarningClicked__DelegateSignature
	void MutatorClicked__DelegateSignature(); // Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.MutatorClicked__DelegateSignature
	void MissionTypeClicked__DelegateSignature(); // Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.MissionTypeClicked__DelegateSignature
};

