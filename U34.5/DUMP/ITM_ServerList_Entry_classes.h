// WidgetBlueprintGeneratedClass ITM_ServerList_Entry.ITM_ServerList_Entry_C
// Size: 0x466 (Inherited: 0x230)
struct UITM_ServerList_Entry_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x238(0x08)
	UImage* Biome_Icon; // 0x240(0x08)
	UButton* Button_1; // 0x248(0x08)
	UITM_MisSel_DotMarker_CaveDifficulty_C* DotMarker_Complexity; // 0x250(0x08)
	UITM_MisSel_DotMarker_MissionLength_C* DotMarker_Length; // 0x258(0x08)
	UImage* Image_Mutator; // 0x260(0x08)
	UImage* Image_Warning; // 0x268(0x08)
	UImage* Img_Status; // 0x270(0x08)
	UITM_MisSel_DotMarker_WorkEnvironment_C* ITM_MisSel_DotMarker_WorkEnvironment; // 0x278(0x08)
	UITM_MisSel_MissionIconBasic_C* ITM_MisSel_MissionIconBasic; // 0x280(0x08)
	UOverlay* Overlay_5; // 0x288(0x08)
	UITM_ServerList_Entry_PlayerIcons_C* ServerList_Entry_PlayerIcons; // 0x290(0x08)
	USizeBox* SizeBox_Complexity; // 0x298(0x08)
	USizeBox* SizeBox_Difficulty; // 0x2a0(0x08)
	USizeBox* SizeBox_Distance; // 0x2a8(0x08)
	USizeBox* SizeBox_Length; // 0x2b0(0x08)
	USizeBox* SizeBox_Mission; // 0x2b8(0x08)
	USizeBox* SizeBox_Team; // 0x2c0(0x08)
	USizeBox* SizeBox_Time; // 0x2c8(0x08)
	UTextBlock* Text_Mission; // 0x2d0(0x08)
	UTextBlock* Text_Modded; // 0x2d8(0x08)
	UTextBlock* TXT_Distance; // 0x2e0(0x08)
	UTextBlock* TXT_Friends; // 0x2e8(0x08)
	UTextBlock* TXT_MissionTime; // 0x2f0(0x08)
	UTextBlock* TXT_Region; // 0x2f8(0x08)
	UTextBlock* TXT_ServerName; // 0x300(0x08)
	UVerticalBox* VerticalBox_Mutators; // 0x308(0x08)
	UVerticalBox* VerticalBox_Warnings; // 0x310(0x08)
	UHorizontalBox* WarningMutatorBox; // 0x318(0x08)
	FBlueprintSessionResult Session; // 0x320(0x108)
	FMulticastInlineDelegate JoinServer; // 0x428(0x10)
	UBasic_ToolTip_C* MutatorToolTip; // 0x438(0x08)
	UBasic_ToolTip_C* WarningToolTip; // 0x440(0x08)
	UBiome_ToolTip_C* BiomeToolTip; // 0x448(0x08)
	UImage* Image_Warning_1; // 0x450(0x08)
	UMaterialInstanceDynamic* BiomeMaterial; // 0x458(0x08)
	bool ShowComplexity; // 0x460(0x01)
	bool ShowDifficulty; // 0x461(0x01)
	bool ShowLength; // 0x462(0x01)
	bool ShowTime; // 0x463(0x01)
	bool ShowWarningsAndMutators; // 0x464(0x01)
	bool FriendsArePlaying; // 0x465(0x01)

	void OpenProfile();
	void SetServername();
	FEventReply OnMouseButtonUp(FGeometry MyGeometry, FPointerEvent MouseEvent);
	FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	void SetMissionNameWidth(float Width);
	void SetVisibleElements(bool InShowComplexity, bool InShowDifficulty, bool InShowLength, bool InShowTime, bool InShowWarningsAndMutators);
	UWidget* GetMissionToolTip();
	void SetColumnWidths(TArray<float> InWidths);
	void ToggleMissionDetails(bool Visible);
	void SetNoMission();
	void SetBiomeIcon(UBiome* Biome);
	void SetupWarningsMutators(UGeneratedMission* mission);
	void UpdateMissionTime();
	void SetSession(FBlueprintSessionResult Session);
	void Construct();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
	void CustomEvent_1();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_ITM_ServerList_Entry(int32_t EntryPoint);
	void JoinServer__DelegateSignature(FBlueprintSessionResult Session);
};

