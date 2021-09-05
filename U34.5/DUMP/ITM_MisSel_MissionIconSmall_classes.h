// WidgetBlueprintGeneratedClass ITM_MisSel_MissionIconSmall.ITM_MisSel_MissionIconSmall_C
// Size: 0x248 (Inherited: 0x230)
struct UITM_MisSel_MissionIconSmall_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UITM_MisSel_MissionIconBasic_C* ITEM_MissionSelection_MissionIconBasic; // 0x238(0x08)
	UITM_MisSel_MissionIconBasic_Locked_C* ITM_MisSel_MissionIconBasic_Locked; // 0x240(0x08)

	void SetData(UGeneratedMission* mission);
	void BndEvt__ITEM_MissionSelection_MissionIconBasic_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature();
	void ExecuteUbergraph_ITM_MisSel_MissionIconSmall(int32_t EntryPoint);
};

