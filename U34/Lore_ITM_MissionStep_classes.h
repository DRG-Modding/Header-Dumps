// WidgetBlueprintGeneratedClass Lore_ITM_MissionStep.Lore_ITM_MissionStep_C
// Size: 0x2d8 (Inherited: 0x230)
struct ULore_ITM_MissionStep_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* HoverZoom; // 0x238(0x08)
	struct UButton* Button_Image; // 0x240(0x08)
	struct UImage* Image_60; // 0x248(0x08)
	struct UImage* Image_125; // 0x250(0x08)
	struct UImage* Image_Header; // 0x258(0x08)
	struct URichTextBlock* RichTextBlock_Headline; // 0x260(0x08)
	struct UTextBlock* TextBlock_Headline; // 0x268(0x08)
	struct UTextBlock* TextBlock_StepNumber; // 0x270(0x08)
	struct FMissionStepDescription StepInfo; // 0x278(0x38)
	struct FMulticastInlineDelegate OnHovered; // 0x2b0(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x2c0(0x10)
	int32_t StepNumber; // 0x2d0(0x04)
	int32_t StepsInRow; // 0x2d4(0x04)

	void BndEvt__Button_Image_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function Lore_ITM_MissionStep.Lore_ITM_MissionStep_C.BndEvt__Button_Image_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_Image_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function Lore_ITM_MissionStep.Lore_ITM_MissionStep_C.BndEvt__Button_Image_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void SetData(struct FMissionStepDescription step, int32_t StepNumber, int32_t StepsInRow); // Function Lore_ITM_MissionStep.Lore_ITM_MissionStep_C.SetData
	void PreConstruct(bool IsDesignTime); // Function Lore_ITM_MissionStep.Lore_ITM_MissionStep_C.PreConstruct
	void ExecuteUbergraph_Lore_ITM_MissionStep(int32_t EntryPoint); // Function Lore_ITM_MissionStep.Lore_ITM_MissionStep_C.ExecuteUbergraph_Lore_ITM_MissionStep
	void OnUnhovered__DelegateSignature(); // Function Lore_ITM_MissionStep.Lore_ITM_MissionStep_C.OnUnhovered__DelegateSignature
	void OnHovered__DelegateSignature(struct FMissionStepDescription step, int32_t StepIndex, int32_t StepsInRow); // Function Lore_ITM_MissionStep.Lore_ITM_MissionStep_C.OnHovered__DelegateSignature
};

