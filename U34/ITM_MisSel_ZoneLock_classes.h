// WidgetBlueprintGeneratedClass ITM_MisSel_ZoneLock.ITM_MisSel_ZoneLock_C
// Size: 0x289 (Inherited: 0x230)
struct UITM_MisSel_ZoneLock_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* LockBreak; // 0x238(0x08)
	struct UWidgetAnimation* Infobox_MouseOver; // 0x240(0x08)
	struct UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow; // 0x248(0x08)
	struct UBasic_Menu_MinimalWindow_C* BasicWindow_Minimal; // 0x250(0x08)
	struct UImage* IMG_Padlock; // 0x258(0x08)
	struct UImage* IMG_Shadow; // 0x260(0x08)
	struct UImage* IMG_TooltipArrow; // 0x268(0x08)
	struct UButton* MainButton; // 0x270(0x08)
	struct UVerticalBox* VertBox-Tooltip; // 0x278(0x08)
	struct UPlanetZone* Zone; // 0x280(0x08)
	bool IsNewZone; // 0x288(0x01)

	void Refresh(); // Function ITM_MisSel_ZoneLock.ITM_MisSel_ZoneLock_C.Refresh
	void PreConstruct(bool IsDesignTime); // Function ITM_MisSel_ZoneLock.ITM_MisSel_ZoneLock_C.PreConstruct
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function ITM_MisSel_ZoneLock.ITM_MisSel_ZoneLock_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function ITM_MisSel_ZoneLock.ITM_MisSel_ZoneLock_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void Construct(); // Function ITM_MisSel_ZoneLock.ITM_MisSel_ZoneLock_C.Construct
	void UpdateVisibility(); // Function ITM_MisSel_ZoneLock.ITM_MisSel_ZoneLock_C.UpdateVisibility
	void ExecuteUbergraph_ITM_MisSel_ZoneLock(int32_t EntryPoint); // Function ITM_MisSel_ZoneLock.ITM_MisSel_ZoneLock_C.ExecuteUbergraph_ITM_MisSel_ZoneLock
};

