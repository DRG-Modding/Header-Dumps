// WidgetBlueprintGeneratedClass LoreScreen_MissionType.LoreScreen_MissionType_C
// Size: 0x360 (Inherited: 0x2c8)
struct ULoreScreen_MissionType_C : ULoreScreen_Master_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UWidgetAnimation* HoverStep; // 0x2d0(0x08)
	struct UTextBlock* Big_Headline; // 0x2d8(0x08)
	struct UImage* BigHeader_Header; // 0x2e0(0x08)
	struct UImage* Image_60; // 0x2e8(0x08)
	struct UImage* Image_125; // 0x2f0(0x08)
	struct UImage* Image_BG; // 0x2f8(0x08)
	struct UImage* Image_Outline; // 0x300(0x08)
	struct ULore_ITM_MissionStepRow_C* Lore_ITM_MissionStepRow1; // 0x308(0x08)
	struct ULore_ITM_MissionStepRow_C* Lore_ITM_MissionStepRow2; // 0x310(0x08)
	struct ULoreScreen_Template_C* LoreScreen_Template; // 0x318(0x08)
	struct UOverlay* Overlay_BigDescription; // 0x320(0x08)
	struct URichTextSizable* RichTextSizable_128; // 0x328(0x08)
	struct UTextBlock* TextBlock_StepNumber; // 0x330(0x08)
	struct UVerticalBox* VerticalBox_StepsHolder; // 0x338(0x08)
	struct UMissionTemplate* MissionTemplate; // 0x340(0x08)
	bool IsHovering; // 0x348(0x01)
	char UnknownData_349[0x7]; // 0x349(0x07)
	struct UAudioComponent* HoverSound; // 0x350(0x08)
	int32_t NumberPerRow; // 0x358(0x04)
	int32_t NumberOnCurrRow; // 0x35c(0x04)

	void StepHovered(struct FMissionStepDescription step, int32_t StepIndex, int32_t StepsInRow); // Function LoreScreen_MissionType.LoreScreen_MissionType_C.StepHovered
	void Construct(); // Function LoreScreen_MissionType.LoreScreen_MissionType_C.Construct
	void RefreshContent(); // Function LoreScreen_MissionType.LoreScreen_MissionType_C.RefreshContent
	void StepUnhovered(); // Function LoreScreen_MissionType.LoreScreen_MissionType_C.StepUnhovered
	void PreConstruct(bool IsDesignTime); // Function LoreScreen_MissionType.LoreScreen_MissionType_C.PreConstruct
	void ExecuteUbergraph_LoreScreen_MissionType(int32_t EntryPoint); // Function LoreScreen_MissionType.LoreScreen_MissionType_C.ExecuteUbergraph_LoreScreen_MissionType
};

