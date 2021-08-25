// WidgetBlueprintGeneratedClass HUD_MapTool.HUD_MapTool_C
// Size: 0x2da (Inherited: 0x230)
struct UHUD_MapTool_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* MainTurnOn; // 0x238(0x08)
	struct UWidgetAnimation* MapTurnOn; // 0x240(0x08)
	struct UWidgetAnimation* RecordingDot; // 0x248(0x08)
	struct UUI_AdvancedLabel_C* AlignLabel; // 0x250(0x08)
	struct UBasic_HUD_BracketWindowBig_C* Basic_HUD_BracketWindowBig; // 0x258(0x08)
	struct UBasic_HUD_BracketWindowBig_C* Basic_HUD_BracketWindowBig_C_1; // 0x260(0x08)
	struct UBorder* Border_1; // 0x268(0x08)
	struct UImage* ImgrecordingDot; // 0x270(0x08)
	struct UBasic_InputSpecific_Widget_C* InputSpecificController; // 0x278(0x08)
	struct UBasic_InputSpecific_Widget_C* InputSpecificMouse; // 0x280(0x08)
	struct UImage* LT; // 0x288(0x08)
	struct UImage* MapView; // 0x290(0x08)
	struct UImage* RT; // 0x298(0x08)
	struct UImage* ScrollWheel; // 0x2a0(0x08)
	struct UTextBlock* TEXT_Header; // 0x2a8(0x08)
	struct UTextBlock* TEXT_Header_2; // 0x2b0(0x08)
	struct UTextBlock* TEXT_Header_3; // 0x2b8(0x08)
	struct UTextBlock* TEXT_Recording; // 0x2c0(0x08)
	struct UUI_AdvancedLabel_C* ZoomLabel; // 0x2c8(0x08)
	struct APlayerCharacter* Character; // 0x2d0(0x08)
	bool MapVisible; // 0x2d8(0x01)
	bool ForwardPlayMode; // 0x2d9(0x01)

	void Construct(); // Function HUD_MapTool.HUD_MapTool_C.Construct
	void OnToggleMapTool(bool Visible); // Function HUD_MapTool.HUD_MapTool_C.OnToggleMapTool
	void PreConstruct(bool IsDesignTime); // Function HUD_MapTool.HUD_MapTool_C.PreConstruct
	void OnMainTurnOnFinished(); // Function HUD_MapTool.HUD_MapTool_C.OnMainTurnOnFinished
	void ExecuteUbergraph_HUD_MapTool(int32_t EntryPoint); // Function HUD_MapTool.HUD_MapTool_C.ExecuteUbergraph_HUD_MapTool
};

