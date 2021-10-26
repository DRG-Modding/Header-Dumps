// WidgetBlueprintGeneratedClass ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C
// Size: 0x2c0 (Inherited: 0x230)
struct UConsoleScreenMemorialWall_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* TextAnim; // 0x238(0x08)
	UAnimatedStaticOverlay_WithScanlines_C* AnimatedStaticOverlay_WithScanlines; // 0x240(0x08)
	UImage* Image_1; // 0x248(0x08)
	UOverlay* Overlay_1; // 0x250(0x08)
	UTextBlock* TextBlock_3; // 0x258(0x08)
	UTextBlock* TextBlock_7; // 0x260(0x08)
	UTextBlock* TextBlock_147; // 0x268(0x08)
	UDataTable* TestersDataTable; // 0x270(0x08)
	TArray<int32_t> RowsToDisplay; // 0x278(0x10)
	int32_t SpawnIndex; // 0x288(0x04)
	float TimeBetweenLines; // 0x28c(0x04)
	float AnimationSpeed; // 0x290(0x04)
	TArray<UUI_ConsoleMemorialLine_C*> Lines; // 0x298(0x10)
	float Timer; // 0x2a8(0x04)
	bool IsFast; // 0x2ac(0x01)
	float FastTimeToSpawn; // 0x2b0(0x04)
	float SlowTimeToSpawn; // 0x2b4(0x04)
	float FastSpeed; // 0x2b8(0x04)
	float SlowSpeed; // 0x2bc(0x04)

	void SetLinesSpeed(float Speed);
	void RemoveLine(UUI_ConsoleMemorialLine_C* NewParam);
	void SetAnimationSpeed(bool IsFast);
	void SpawnNewLine();
	FText GetNameFromRow(int32_t Row);
	void Tick(FGeometry MyGeometry, float InDeltaTime);
	void Construct();
	void ExecuteUbergraph_ConsoleScreenMemorialWall(int32_t EntryPoint);
};

