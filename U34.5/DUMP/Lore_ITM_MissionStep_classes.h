// WidgetBlueprintGeneratedClass Lore_ITM_MissionStep.Lore_ITM_MissionStep_C
// Size: 0x2d8 (Inherited: 0x230)
struct ULore_ITM_MissionStep_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* HoverZoom; // 0x238(0x08)
	UButton* Button_Image; // 0x240(0x08)
	UImage* Image_60; // 0x248(0x08)
	UImage* Image_125; // 0x250(0x08)
	UImage* Image_Header; // 0x258(0x08)
	URichTextBlock* RichTextBlock_Headline; // 0x260(0x08)
	UTextBlock* TextBlock_Headline; // 0x268(0x08)
	UTextBlock* TextBlock_StepNumber; // 0x270(0x08)
	FMissionStepDescription StepInfo; // 0x278(0x38)
	FMulticastInlineDelegate OnHovered; // 0x2b0(0x10)
	FMulticastInlineDelegate OnUnhovered; // 0x2c0(0x10)
	int32_t StepNumber; // 0x2d0(0x04)
	int32_t StepsInRow; // 0x2d4(0x04)

	void BndEvt__Button_Image_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Image_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void SetData(FMissionStepDescription step, int32_t StepNumber, int32_t StepsInRow);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_Lore_ITM_MissionStep(int32_t EntryPoint);
	void OnUnhovered__DelegateSignature();
	void OnHovered__DelegateSignature(FMissionStepDescription step, int32_t StepIndex, int32_t StepsInRow);
};

