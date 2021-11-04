// WidgetBlueprintGeneratedClass ITM_MissionMap_Icon_BG.ITM_MissionMap_Icon_BG_C
// Size: 0x280 (Inherited: 0x230)
struct UITM_MissionMap_Icon_BG_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* BlinkWarning; // 0x238(0x08)
	UImage* bgB; // 0x240(0x08)
	UImage* bgB_Warning; // 0x248(0x08)
	UImage* bgM; // 0x250(0x08)
	UImage* bgM_Warning; // 0x258(0x08)
	UImage* bgT; // 0x260(0x08)
	UVerticalBox* BGwindow; // 0x268(0x08)
	UImage* edgeB; // 0x270(0x08)
	UImage* edgeT; // 0x278(0x08)

	void PreConstruct(bool IsDesignTime);
	void PlayDoubleWarning();
	void ExecuteUbergraph_ITM_MissionMap_Icon_BG(int32_t EntryPoint);
};

