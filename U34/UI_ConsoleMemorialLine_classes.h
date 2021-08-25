// WidgetBlueprintGeneratedClass UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C
// Size: 0x258 (Inherited: 0x230)
struct UUI_ConsoleMemorialLine_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* Move; // 0x238(0x08)
	struct UTextBlock* TXT_Main; // 0x240(0x08)
	float Duration; // 0x248(0x04)
	float AnimationSpeed; // 0x24c(0x04)
	struct UConsoleScreenMemorialWall_C* Mywall; // 0x250(0x08)

	void AddBoard(struct UConsoleScreenMemorialWall_C* NewParam); // Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.AddBoard
	void SetSpeed(float Speed); // Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.SetSpeed
	void SetText(struct FText Text); // Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.SetText
	void Construct(); // Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.Construct
	void OnMoveFinished(); // Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.OnMoveFinished
	void ExecuteUbergraph_UI_ConsoleMemorialLine(int32_t EntryPoint); // Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.ExecuteUbergraph_UI_ConsoleMemorialLine
};

