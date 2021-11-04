// WidgetBlueprintGeneratedClass ITM_MisSel_MissionIconBasic_Locked.ITM_MisSel_MissionIconBasic_Locked_C
// Size: 0x252 (Inherited: 0x230)
struct UITM_MisSel_MissionIconBasic_Locked_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* Icon_BG; // 0x238(0x08)
	UImage* ICON_MissionType; // 0x240(0x08)
	UImage* ICON_Outline; // 0x248(0x08)
	bool Border; // 0x250(0x01)
	bool ThickOutline; // 0x251(0x01)

	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ITM_MisSel_MissionIconBasic_Locked(int32_t EntryPoint);
};

