// WidgetBlueprintGeneratedClass ITM_ServerList_Entry.ITM_ServerList_Entry_C
// Size: 0x466 (Inherited: 0x230)
struct UITM_ServerList_Entry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x238(0x08)
	struct UImage* Biome_Icon; // 0x240(0x08)
	struct UButton* Button_1; // 0x248(0x08)
	struct UITM_MisSel_DotMarker_CaveDifficulty_C* DotMarker_Complexity; // 0x250(0x08)
	struct UITM_MisSel_DotMarker_MissionLength_C* DotMarker_Length; // 0x258(0x08)
	struct UImage* Image_Mutator; // 0x260(0x08)
	struct UImage* Image_Warning; // 0x268(0x08)
	struct UImage* IMG_Status; // 0x270(0x08)
	struct UITM_MisSel_DotMarker_WorkEnvironment_C* ITM_MisSel_DotMarker_WorkEnvironment; // 0x278(0x08)
	struct UITM_MisSel_MissionIconBasic_C* ITM_MisSel_MissionIconBasic; // 0x280(0x08)
	struct UOverlay* Overlay_5; // 0x288(0x08)
	struct UITM_ServerList_Entry_PlayerIcons_C* ServerList_Entry_PlayerIcons; // 0x290(0x08)
	struct USizeBox* SizeBox_Complexity; // 0x298(0x08)
	struct USizeBox* SizeBox_Difficulty; // 0x2a0(0x08)
	struct USizeBox* SizeBox_Distance; // 0x2a8(0x08)
	struct USizeBox* SizeBox_Length; // 0x2b0(0x08)
	struct USizeBox* SizeBox_Mission; // 0x2b8(0x08)
	struct USizeBox* SizeBox_Team; // 0x2c0(0x08)
	struct USizeBox* SizeBox_Time; // 0x2c8(0x08)
	struct UTextBlock* Text_Mission; // 0x2d0(0x08)
	struct UTextBlock* Text_Modded; // 0x2d8(0x08)
	struct UTextBlock* TXT_Distance; // 0x2e0(0x08)
	struct UTextBlock* TXT_Friends; // 0x2e8(0x08)
	struct UTextBlock* TXT_MissionTime; // 0x2f0(0x08)
	struct UTextBlock* TXT_Region; // 0x2f8(0x08)
	struct UTextBlock* TXT_ServerName; // 0x300(0x08)
	struct UVerticalBox* VerticalBox_Mutators; // 0x308(0x08)
	struct UVerticalBox* VerticalBox_Warnings; // 0x310(0x08)
	struct UHorizontalBox* WarningMutatorBox; // 0x318(0x08)
	struct FBlueprintSessionResult Session; // 0x320(0x108)
	struct FMulticastInlineDelegate JoinServer; // 0x428(0x10)
	struct UBasic_ToolTip_C* MutatorToolTip; // 0x438(0x08)
	struct UBasic_ToolTip_C* WarningToolTip; // 0x440(0x08)
	struct UBiome_ToolTip_C* BiomeToolTip; // 0x448(0x08)
	struct UImage* Image_Warning_1; // 0x450(0x08)
	struct UMaterialInstanceDynamic* BiomeMaterial; // 0x458(0x08)
	bool ShowComplexity; // 0x460(0x01)
	bool ShowDifficulty; // 0x461(0x01)
	bool ShowLength; // 0x462(0x01)
	bool ShowTime; // 0x463(0x01)
	bool ShowWarningsAndMutators; // 0x464(0x01)
	bool FriendsArePlaying; // 0x465(0x01)

	void OpenProfile(); // Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.OpenProfile
	void SetServername(); // Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetServername
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.OnMouseButtonUp
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.OnKeyUp
	void SetMissionNameWidth(float Width); // Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetMissionNameWidth
	void SetVisibleElements(bool InShowComplexity, bool InShowDifficulty, bool InShowLength, bool InShowTime, bool InShowWarningsAndMutators); // Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetVisibleElements
	struct UWidget* GetMissionToolTip(); // Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.GetMissionToolTip
	void SetColumnWidths(struct TArray<float> InWidths); // Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetColumnWidths
	void ToggleMissionDetails(bool Visible); // Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.ToggleMissionDetails
	void SetNoMission(); // Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetNoMission
	void SetBiomeIcon(struct UBiome* Biome); // Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetBiomeIcon
	void SetupWarningsMutators(struct UGeneratedMission* mission); // Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetupWarningsMutators
	void UpdateMissionTime(); // Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.UpdateMissionTime
	void SetSession(struct FBlueprintSessionResult Session); // Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetSession
	void Construct(); // Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.Construct
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature(); // Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	void CustomEvent_1(); // Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.CustomEvent_1
	void PreConstruct(bool IsDesignTime); // Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.PreConstruct
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void ExecuteUbergraph_ITM_ServerList_Entry(int32_t EntryPoint); // Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.ExecuteUbergraph_ITM_ServerList_Entry
	void JoinServer__DelegateSignature(struct FBlueprintSessionResult Session); // Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.JoinServer__DelegateSignature
};

