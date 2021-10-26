// WidgetBlueprintGeneratedClass ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C
// Size: 0x291 (Inherited: 0x230)
struct UITM_MisSel_MissionIconBasic_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* Icon_BG; // 0x238(0x08)
	UImage* ICON_Frame; // 0x240(0x08)
	UImage* ICON_MissionType; // 0x248(0x08)
	UImage* ICON_Outline; // 0x250(0x08)
	USizeBox* IconSize; // 0x258(0x08)
	UBasic_ToolTip_C* ToolTip; // 0x260(0x08)
	bool ThickOutline; // 0x268(0x01)
	float Size; // 0x26c(0x04)
	bool Show Frame; // 0x270(0x01)
	enum class ENUM_MenuColors Frame Color; // 0x271(0x01)
	bool Selected; // 0x272(0x01)
	FObjectiveMissionIcon MissionIcon; // 0x278(0x18)
	bool DataSet; // 0x290(0x01)

	void SetTemplate(UMissionTemplate* Template, bool UseSimpleIcon);
	void SetSelected(bool InSelected);
	void SetMission(UGeneratedMission* InMission);
	void PreConstruct(bool IsDesignTime);
	void SetData(FObjectiveMissionIcon MissionIcon);
	void ExecuteUbergraph_ITM_MisSel_MissionIconBasic(int32_t EntryPoint);
};

