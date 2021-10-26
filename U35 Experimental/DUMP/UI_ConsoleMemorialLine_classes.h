// WidgetBlueprintGeneratedClass UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C
// Size: 0x258 (Inherited: 0x230)
struct UUI_ConsoleMemorialLine_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Move; // 0x238(0x08)
	UTextBlock* TXT_Main; // 0x240(0x08)
	float Duration; // 0x248(0x04)
	float AnimationSpeed; // 0x24c(0x04)
	UConsoleScreenMemorialWall_C* Mywall; // 0x250(0x08)

	void AddBoard(UConsoleScreenMemorialWall_C* NewParam);
	void SetSpeed(float Speed);
	void SetText(FText Text);
	void Construct();
	void OnMoveFinished();
	void ExecuteUbergraph_UI_ConsoleMemorialLine(int32_t EntryPoint);
};

