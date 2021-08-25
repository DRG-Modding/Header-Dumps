// WidgetBlueprintGeneratedClass ITM_MissionMap_Icon_BG.ITM_MissionMap_Icon_BG_C
// Size: 0x280 (Inherited: 0x230)
struct UITM_MissionMap_Icon_BG_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* BlinkWarning; // 0x238(0x08)
	struct UImage* bgB; // 0x240(0x08)
	struct UImage* bgB_Warning; // 0x248(0x08)
	struct UImage* bgM; // 0x250(0x08)
	struct UImage* bgM_Warning; // 0x258(0x08)
	struct UImage* bgT; // 0x260(0x08)
	struct UVerticalBox* BGwindow; // 0x268(0x08)
	struct UImage* edgeB; // 0x270(0x08)
	struct UImage* edgeT; // 0x278(0x08)

	void PreConstruct(bool IsDesignTime); // Function ITM_MissionMap_Icon_BG.ITM_MissionMap_Icon_BG_C.PreConstruct
	void PlayDoubleWarning(); // Function ITM_MissionMap_Icon_BG.ITM_MissionMap_Icon_BG_C.PlayDoubleWarning
	void ExecuteUbergraph_ITM_MissionMap_Icon_BG(int32_t EntryPoint); // Function ITM_MissionMap_Icon_BG.ITM_MissionMap_Icon_BG_C.ExecuteUbergraph_ITM_MissionMap_Icon_BG
};

