// WidgetBlueprintGeneratedClass ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C
// Size: 0x2d1 (Inherited: 0x230)
struct UITM_BasicTutorialWindow_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* TaskProgress; // 0x238(0x08)
	UWidgetAnimation* CompleteAnim; // 0x240(0x08)
	UWidgetAnimation* RemoveAnim; // 0x248(0x08)
	UBasic_CheckBox_C* Basic_CheckBox; // 0x250(0x08)
	UBorder* Border_Checkbox; // 0x258(0x08)
	UHorizontalBox* HorizontalBox_TaskBar; // 0x260(0x08)
	UImage* Image_80; // 0x268(0x08)
	UImage* Image_BG; // 0x270(0x08)
	UImage* Image_ColorBar; // 0x278(0x08)
	UImage* Image_Tutorial; // 0x280(0x08)
	URichTextSizable* MainText; // 0x288(0x08)
	UOverlay* Overlay_ContentHolder; // 0x290(0x08)
	URichTextSizable* TaskCounter; // 0x298(0x08)
	URichTextSizable* TaskText; // 0x2a0(0x08)
	UTextBlock* TextHeadline; // 0x2a8(0x08)
	FMulticastInlineDelegate CompleteAnimationFinished; // 0x2b0(0x10)
	FMulticastInlineDelegate RemoveAnimationFinished; // 0x2c0(0x10)
	bool TaskVisible; // 0x2d0(0x01)

	void SetText(FText Header, FText MainText, FText TaskText);
	void PlayRemove();
	void PlayShow();
	void PlayComplete();
	void CompleteAnimFinished();
	void SetImage(UTexture2D* Texture);
	void PlayTaskProgress();
	void SetTaskCounter(int32_t Counter, int32_t Denominator);
	void ExecuteUbergraph_ITM_BasicTutorialWindow(int32_t EntryPoint);
	void RemoveAnimationFinished__DelegateSignature();
	void CompleteAnimationFinished__DelegateSignature();
};

