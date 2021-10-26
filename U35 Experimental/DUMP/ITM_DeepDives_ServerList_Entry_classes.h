// WidgetBlueprintGeneratedClass ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C
// Size: 0x3d8 (Inherited: 0x230)
struct UITM_DeepDives_ServerList_Entry_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x238(0x08)
	UButton* Button_1; // 0x240(0x08)
	UUI_GradientMasked_Image_C* GradientBackground; // 0x248(0x08)
	UScaleBox* Modded_Box; // 0x250(0x08)
	UITM_ServerList_Entry_PlayerIcons_C* ServerList_Entry_PlayerIcons; // 0x258(0x08)
	USizeBox* SizeBox_Distance; // 0x260(0x08)
	USizeBox* SizeBox_Mission; // 0x268(0x08)
	USizeBox* SizeBox_Team; // 0x270(0x08)
	UTextBlock* TXT_Distance; // 0x278(0x08)
	UTextBlock* TXT_Modded; // 0x280(0x08)
	UTextBlock* TXT_Region; // 0x288(0x08)
	UTextBlock* TXT_ServerName; // 0x290(0x08)
	FBlueprintSessionResult Session; // 0x298(0x108)
	FMulticastInlineDelegate JoinServer; // 0x3a0(0x10)
	UBasic_ToolTip_C* MutatorToolTip; // 0x3b0(0x08)
	UBasic_ToolTip_C* WarningToolTip; // 0x3b8(0x08)
	UBiome_ToolTip_C* BiomeToolTip; // 0x3c0(0x08)
	UImage* Image_Warning_1; // 0x3c8(0x08)
	UMaterialInstanceDynamic* BiomeMaterial; // 0x3d0(0x08)

	FEventReply OnMouseButtonDown(FGeometry MyGeometry, FPointerEvent MouseEvent);
	FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	FEventReply OnMouseButtonUp(FGeometry MyGeometry, FPointerEvent MouseEvent);
	void OpenProfile();
	void SetServername();
	void SetMissionNameWidth(float Width);
	UWidget* GetMissionToolTip();
	void SetColumnWidths(TArray<float> InWidths);
	void ToggleMissionDetails(bool Visible, bool OutVisible);
	void SetNoMission();
	void SetSession(FBlueprintSessionResult Session);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_ITM_DeepDives_ServerList_Entry(int32_t EntryPoint);
	void JoinServer__DelegateSignature(FBlueprintSessionResult Session);
};

