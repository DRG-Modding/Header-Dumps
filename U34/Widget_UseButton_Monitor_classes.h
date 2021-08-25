// WidgetBlueprintGeneratedClass Widget_UseButton_Monitor.Widget_UseButton_Monitor_C
// Size: 0x268 (Inherited: 0x230)
struct UWidget_UseButton_Monitor_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* AnimMinimizeProgress; // 0x238(0x08)
	struct UWidgetAnimation* AnimArrow; // 0x240(0x08)
	struct UUI_ImageTinted_C* Img_Arrow; // 0x248(0x08)
	struct UUI_GenericLabel_C* Txt_Progress; // 0x250(0x08)
	struct UUI_GenericLabel_C* Txt_Status; // 0x258(0x08)
	struct AFSDRefinery* Refinery; // 0x260(0x08)

	bool IsDeepDive(); // Function Widget_UseButton_Monitor.Widget_UseButton_Monitor_C.IsDeepDive
	void OnStateChanged(enum class ERefineryState InRefineryState); // Function Widget_UseButton_Monitor.Widget_UseButton_Monitor_C.OnStateChanged
	void Construct(); // Function Widget_UseButton_Monitor.Widget_UseButton_Monitor_C.Construct
	void OnRefineryProgressChanged(float InProgress01); // Function Widget_UseButton_Monitor.Widget_UseButton_Monitor_C.OnRefineryProgressChanged
	void OnCanStartRefineryChanged(bool canUse); // Function Widget_UseButton_Monitor.Widget_UseButton_Monitor_C.OnCanStartRefineryChanged
	void ExecuteUbergraph_Widget_UseButton_Monitor(int32_t EntryPoint); // Function Widget_UseButton_Monitor.Widget_UseButton_Monitor_C.ExecuteUbergraph_Widget_UseButton_Monitor
};

