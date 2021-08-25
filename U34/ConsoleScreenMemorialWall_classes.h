// WidgetBlueprintGeneratedClass ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C
// Size: 0x2c0 (Inherited: 0x230)
struct UConsoleScreenMemorialWall_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* TextAnim; // 0x238(0x08)
	struct UAnimatedStaticOverlay_WithScanlines_C* AnimatedStaticOverlay_WithScanlines; // 0x240(0x08)
	struct UImage* Image_1; // 0x248(0x08)
	struct UOverlay* Overlay_1; // 0x250(0x08)
	struct UTextBlock* TextBlock_3; // 0x258(0x08)
	struct UTextBlock* TextBlock_7; // 0x260(0x08)
	struct UTextBlock* TextBlock_147; // 0x268(0x08)
	struct UDataTable* TestersDataTable; // 0x270(0x08)
	struct TArray<int32_t> RowsToDisplay; // 0x278(0x10)
	int32_t SpawnIndex; // 0x288(0x04)
	float TimeBetweenLines; // 0x28c(0x04)
	float AnimationSpeed; // 0x290(0x04)
	char UnknownData_294[0x4]; // 0x294(0x04)
	struct TArray<struct UUI_ConsoleMemorialLine_C*> Lines; // 0x298(0x10)
	float Timer; // 0x2a8(0x04)
	bool IsFast; // 0x2ac(0x01)
	char UnknownData_2AD[0x3]; // 0x2ad(0x03)
	float FastTimeToSpawn; // 0x2b0(0x04)
	float SlowTimeToSpawn; // 0x2b4(0x04)
	float FastSpeed; // 0x2b8(0x04)
	float SlowSpeed; // 0x2bc(0x04)

	void SetLinesSpeed(float Speed); // Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.SetLinesSpeed
	void RemoveLine(struct UUI_ConsoleMemorialLine_C* NewParam); // Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.RemoveLine
	void SetAnimationSpeed(bool IsFast); // Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.SetAnimationSpeed
	void SpawnNewLine(); // Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.SpawnNewLine
	struct FText GetNameFromRow(int32_t Row); // Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.GetNameFromRow
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.Tick
	void Construct(); // Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.Construct
	void ExecuteUbergraph_ConsoleScreenMemorialWall(int32_t EntryPoint); // Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.ExecuteUbergraph_ConsoleScreenMemorialWall
};

