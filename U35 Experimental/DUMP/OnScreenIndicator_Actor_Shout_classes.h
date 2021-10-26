// WidgetBlueprintGeneratedClass OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C
// Size: 0x2d4 (Inherited: 0x258)
struct UOnScreenIndicator_Actor_Shout_C : UShoutWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x258(0x08)
	UImage* CharacterIcon; // 0x260(0x08)
	UTextBlock* DATA_Class; // 0x268(0x08)
	UTextBlock* DATA_Distance; // 0x270(0x08)
	UTextBlock* DATA_Message; // 0x278(0x08)
	UBasic_HUD_BracketWindowSmall_C* NormalShout; // 0x280(0x08)
	URetainerBox* RetainerBox_3; // 0x288(0x08)
	UWidgetSwitcher* ShoutTypeSwitcher; // 0x290(0x08)
	UBorder* SubtitleShout; // 0x298(0x08)
	UTextBlock* SubtitleText; // 0x2a0(0x08)
	APlayerCharacter* Character; // 0x2a8(0x08)
	FVector2D LastPos; // 0x2b0(0x08)
	float TimeActive; // 0x2b8(0x04)
	float Opacity; // 0x2bc(0x04)
	FLinearColor BackgroundColor; // 0x2c0(0x10)
	float ShoutActive; // 0x2d0(0x04)

	void SetShoutLocation(UUserWidget* Widget, FVector2D Position, bool OwnShout);
	void UpdateIcon();
	bool IsOwnShout();
	void Shout();
	FVector2D CalculateScreenPos();
	void InViewport(FVector2D Pos, bool Result);
	bool IsSenderBehind(FVector ToSender);
	void Construct();
	void Update Widget();
	void Tick(FGeometry MyGeometry, float InDeltaTime);
	void OnShout();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_OnScreenIndicator_Actor_Shout(int32_t EntryPoint);
};

