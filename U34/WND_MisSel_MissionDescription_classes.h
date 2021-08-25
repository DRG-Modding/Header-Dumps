// WidgetBlueprintGeneratedClass WND_MisSel_MissionDescription.WND_MisSel_MissionDescription_C
// Size: 0x318 (Inherited: 0x230)
struct UWND_MisSel_MissionDescription_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_1; // 0x238(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_2; // 0x240(0x08)
	struct UBlurBackground_C* BlurBackground; // 0x248(0x08)
	struct UBorder* Border_PlayerRankNeeded; // 0x250(0x08)
	struct UButton* Button_MissionInfo; // 0x258(0x08)
	struct UBorder* CampaignInfo; // 0x260(0x08)
	struct UBasic_Menu_ColorBar_C* ColorBar_Bottom; // 0x268(0x08)
	struct UTextBlock* DATADescription_Assignment; // 0x270(0x08)
	struct UTextBlock* DATADescription_Assignment_Locked; // 0x278(0x08)
	struct UTextBlock* DataMissionName; // 0x280(0x08)
	struct UTextBlock* DATAMissionType; // 0x288(0x08)
	struct UITM_MisSel_DotMarker_CaveDifficulty_C* DotMarker_Complexity; // 0x290(0x08)
	struct UITM_MisSel_DotMarker_MissionLength_C* DotMarker_Length; // 0x298(0x08)
	struct UIcon_ClassLevel_C* Icon_ClassLevel; // 0x2a0(0x08)
	struct UImage* Image_1; // 0x2a8(0x08)
	struct UImage* Image_94; // 0x2b0(0x08)
	struct UITM_MisSel_MissionIconBasic_C* ITEM_MissionSelection_MissionIconBasic_C_101; // 0x2b8(0x08)
	struct UITM_MisDesMutator_C* ITM_MisDes_Modifier; // 0x2c0(0x08)
	struct UITM_MisSel_ObjectivePrimary_C* ITM_MisSel_ObjectivePrimary; // 0x2c8(0x08)
	struct UITM_MisSel_ObjectiveSecondary_C* ITM_MisSel_ObjectiveSecondary; // 0x2d0(0x08)
	struct UBorder* Locked; // 0x2d8(0x08)
	struct UTextBlock* TextBlock_Rank; // 0x2e0(0x08)
	struct UTextBlock* TXTCaveComplexity; // 0x2e8(0x08)
	struct UTextBlock* TXTMissionLength; // 0x2f0(0x08)
	struct UVerticalBox* vboxMissionModifiers; // 0x2f8(0x08)
	struct UVerticalBox* vboxMissionWindow; // 0x300(0x08)
	struct UVerticalBox* VerticalBox_Objectives; // 0x308(0x08)
	struct UMissionTemplate* MissionTemplate; // 0x310(0x08)

	void HandleAssignments(struct UGeneratedMission* mission, struct UDifficultySetting* optionalDifficulty); // Function WND_MisSel_MissionDescription.WND_MisSel_MissionDescription_C.HandleAssignments
	void SetData(struct UGeneratedMission* mission, struct UDifficultySetting* Difficulty); // Function WND_MisSel_MissionDescription.WND_MisSel_MissionDescription_C.SetData
	void PreConstruct(bool IsDesignTime); // Function WND_MisSel_MissionDescription.WND_MisSel_MissionDescription_C.PreConstruct
	void BndEvt__Button_MissionInfo_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WND_MisSel_MissionDescription.WND_MisSel_MissionDescription_C.BndEvt__Button_MissionInfo_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void ExecuteUbergraph_WND_MisSel_MissionDescription(int32_t EntryPoint); // Function WND_MisSel_MissionDescription.WND_MisSel_MissionDescription_C.ExecuteUbergraph_WND_MisSel_MissionDescription
};

