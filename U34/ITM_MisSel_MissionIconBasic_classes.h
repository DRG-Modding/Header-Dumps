// WidgetBlueprintGeneratedClass ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C
// Size: 0x291 (Inherited: 0x230)
struct UITM_MisSel_MissionIconBasic_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* Icon_BG; // 0x238(0x08)
	struct UImage* ICON_Frame; // 0x240(0x08)
	struct UImage* ICON_MissionType; // 0x248(0x08)
	struct UImage* ICON_Outline; // 0x250(0x08)
	struct USizeBox* IconSize; // 0x258(0x08)
	struct UBasic_ToolTip_C* ToolTip; // 0x260(0x08)
	bool ThickOutline; // 0x268(0x01)
	char UnknownData_269[0x3]; // 0x269(0x03)
	float Size; // 0x26c(0x04)
	bool Show Frame; // 0x270(0x01)
	char Frame Color; // 0x271(0x01)
	bool Selected; // 0x272(0x01)
	char UnknownData_273[0x5]; // 0x273(0x05)
	struct FObjectiveMissionIcon MissionIcon; // 0x278(0x18)
	bool DataSet; // 0x290(0x01)

	void SetTemplate(struct UMissionTemplate* Template); // Function ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C.SetTemplate
	void SetSelected(bool inSelected); // Function ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C.SetSelected
	void SetMission(struct UGeneratedMission* InMission); // Function ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C.SetMission
	void PreConstruct(bool IsDesignTime); // Function ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C.PreConstruct
	void SetData(struct FObjectiveMissionIcon MissionIcon); // Function ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C.SetData
	void ExecuteUbergraph_ITM_MisSel_MissionIconBasic(int32_t EntryPoint); // Function ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C.ExecuteUbergraph_ITM_MisSel_MissionIconBasic
};

