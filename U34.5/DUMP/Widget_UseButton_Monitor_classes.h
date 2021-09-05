// WidgetBlueprintGeneratedClass Widget_UseButton_Monitor.Widget_UseButton_Monitor_C
// Size: 0x268 (Inherited: 0x230)
struct UWidget_UseButton_Monitor_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* AnimMinimizeProgress; // 0x238(0x08)
	UWidgetAnimation* AnimArrow; // 0x240(0x08)
	UUI_ImageTinted_C* Img_Arrow; // 0x248(0x08)
	UUI_GenericLabel_C* Txt_Progress; // 0x250(0x08)
	UUI_GenericLabel_C* Txt_Status; // 0x258(0x08)
	AFSDRefinery* Refinery; // 0x260(0x08)

	bool IsDeepDive();
	void OnStateChanged(enum class ERefineryState InRefineryState);
	void Construct();
	void OnRefineryProgressChanged(float InProgress01);
	void OnCanStartRefineryChanged(bool canUse);
	void ExecuteUbergraph_Widget_UseButton_Monitor(int32_t EntryPoint);
};

