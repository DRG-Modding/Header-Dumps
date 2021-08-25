// WidgetBlueprintGeneratedClass Menu_StatusScreen.Menu_StatusScreen_C
// Size: 0x338 (Inherited: 0x270)
struct UMenu_StatusScreen_C : UWindowWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UWidgetAnimation* LoadoutClicked; // 0x278(0x08)
	struct UBasic_IconWithOutline_C* Basic_IconWithOutline; // 0x280(0x08)
	struct UButton* Button_Loadout; // 0x288(0x08)
	struct UTextBlock* dataReadout; // 0x290(0x08)
	struct UTextBlock* dataReadout_isModded; // 0x298(0x08)
	struct UTextBlock* dataReadout_SeedGlobal; // 0x2a0(0x08)
	struct UTextBlock* dataReadout_SeedMission; // 0x2a8(0x08)
	struct UTextBlock* dataReadout_SeedPLS; // 0x2b0(0x08)
	struct UHUD_TabPlayerList_InteractableV2_C* FriendsTab; // 0x2b8(0x08)
	struct UImage* Image_BottomSmoke; // 0x2c0(0x08)
	struct UImage* Image_GradientBottom; // 0x2c8(0x08)
	struct UImage* Image_Separator; // 0x2d0(0x08)
	struct UImage* Image_Separator_2; // 0x2d8(0x08)
	struct UImage* Image_Separator_3; // 0x2e0(0x08)
	struct UITM_EscMenu_BriefingV2_C* ITM_EscMenu_BriefingV2; // 0x2e8(0x08)
	struct UITM_PreventDuplicateCharacters_C* ITM_PreventDuplicateCharacters; // 0x2f0(0x08)
	struct UITM_PrivatePublic_C* ITM_PrivatePublic; // 0x2f8(0x08)
	struct UITM_WeaponAndPerkInfo_C* ITM_WeaponAndPerkInfo1; // 0x300(0x08)
	struct UHUD_TabPlayerListEntry_InteractableV2_C* LocalPlayer; // 0x308(0x08)
	struct UImage* PlayerCharacterImage; // 0x310(0x08)
	struct UTextBlock* TextBlock; // 0x318(0x08)
	struct UTextBlock* TextBlock_4; // 0x320(0x08)
	struct FMulticastInlineDelegate OpenMinersManual; // 0x328(0x10)

	void Construct(); // Function Menu_StatusScreen.Menu_StatusScreen_C.Construct
	void Update(); // Function Menu_StatusScreen.Menu_StatusScreen_C.Update
	void Close(); // Function Menu_StatusScreen.Menu_StatusScreen_C.Close
	void BndEvt__ITM_EscMenu_BriefingV2_K2Node_ComponentBoundEvent_1_MissionTypeClicked__DelegateSignature(); // Function Menu_StatusScreen.Menu_StatusScreen_C.BndEvt__ITM_EscMenu_BriefingV2_K2Node_ComponentBoundEvent_1_MissionTypeClicked__DelegateSignature
	void BndEvt__ITM_EscMenu_BriefingV2_K2Node_ComponentBoundEvent_2_MutatorClicked__DelegateSignature(); // Function Menu_StatusScreen.Menu_StatusScreen_C.BndEvt__ITM_EscMenu_BriefingV2_K2Node_ComponentBoundEvent_2_MutatorClicked__DelegateSignature
	void BndEvt__ITM_EscMenu_BriefingV2_K2Node_ComponentBoundEvent_3_WarningClicked__DelegateSignature(); // Function Menu_StatusScreen.Menu_StatusScreen_C.BndEvt__ITM_EscMenu_BriefingV2_K2Node_ComponentBoundEvent_3_WarningClicked__DelegateSignature
	void PreConstruct(bool IsDesignTime); // Function Menu_StatusScreen.Menu_StatusScreen_C.PreConstruct
	void BndEvt__Button_Loadout_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function Menu_StatusScreen.Menu_StatusScreen_C.BndEvt__Button_Loadout_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	void BndEvt__ITM_EscMenu_BriefingV2_K2Node_ComponentBoundEvent_7_BiomeClicked__DelegateSignature(); // Function Menu_StatusScreen.Menu_StatusScreen_C.BndEvt__ITM_EscMenu_BriefingV2_K2Node_ComponentBoundEvent_7_BiomeClicked__DelegateSignature
	void RefreshShowroom(); // Function Menu_StatusScreen.Menu_StatusScreen_C.RefreshShowroom
	void ExecuteUbergraph_Menu_StatusScreen(int32_t EntryPoint); // Function Menu_StatusScreen.Menu_StatusScreen_C.ExecuteUbergraph_Menu_StatusScreen
	void OpenMinersManual__DelegateSignature(struct UObject* IdentifyingObject, bool OpenSpecificPage, enum class EMinersManualSinglePage Page); // Function Menu_StatusScreen.Menu_StatusScreen_C.OpenMinersManual__DelegateSignature
};

