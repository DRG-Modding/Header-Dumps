// WidgetBlueprintGeneratedClass ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C
// Size: 0x3d8 (Inherited: 0x230)
struct UITM_DeepDives_ServerList_Entry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x238(0x08)
	struct UButton* Button_1; // 0x240(0x08)
	struct UUI_GradientMasked_Image_C* GradientBackground; // 0x248(0x08)
	struct UScaleBox* Modded_Box; // 0x250(0x08)
	struct UITM_ServerList_Entry_PlayerIcons_C* ServerList_Entry_PlayerIcons; // 0x258(0x08)
	struct USizeBox* SizeBox_Distance; // 0x260(0x08)
	struct USizeBox* SizeBox_Mission; // 0x268(0x08)
	struct USizeBox* SizeBox_Team; // 0x270(0x08)
	struct UTextBlock* TXT_Distance; // 0x278(0x08)
	struct UTextBlock* TXT_Modded; // 0x280(0x08)
	struct UTextBlock* TXT_Region; // 0x288(0x08)
	struct UTextBlock* TXT_ServerName; // 0x290(0x08)
	struct FBlueprintSessionResult Session; // 0x298(0x108)
	struct FMulticastInlineDelegate JoinServer; // 0x3a0(0x10)
	struct UBasic_ToolTip_C* MutatorToolTip; // 0x3b0(0x08)
	struct UBasic_ToolTip_C* WarningToolTip; // 0x3b8(0x08)
	struct UBiome_ToolTip_C* BiomeToolTip; // 0x3c0(0x08)
	struct UImage* Image_Warning_1; // 0x3c8(0x08)
	struct UMaterialInstanceDynamic* BiomeMaterial; // 0x3d0(0x08)

	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.OnMouseButtonDown
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.OnKeyUp
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.OnMouseButtonUp
	void OpenProfile(); // Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.OpenProfile
	void SetServername(); // Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.SetServername
	void SetMissionNameWidth(float Width); // Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.SetMissionNameWidth
	struct UWidget* GetMissionToolTip(); // Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.GetMissionToolTip
	void SetColumnWidths(struct TArray<float> InWidths); // Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.SetColumnWidths
	void ToggleMissionDetails(bool Visible, bool OutVisible); // Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.ToggleMissionDetails
	void SetNoMission(); // Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.SetNoMission
	void SetSession(struct FBlueprintSessionResult Session); // Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.SetSession
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature(); // Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	void PreConstruct(bool IsDesignTime); // Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.PreConstruct
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void ExecuteUbergraph_ITM_DeepDives_ServerList_Entry(int32_t EntryPoint); // Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.ExecuteUbergraph_ITM_DeepDives_ServerList_Entry
	void JoinServer__DelegateSignature(struct FBlueprintSessionResult Session); // Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.JoinServer__DelegateSignature
};

