// WidgetBlueprintGeneratedClass OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C
// Size: 0x2d4 (Inherited: 0x258)
struct UOnScreenIndicator_Actor_Shout_C : UShoutWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x258(0x08)
	struct UImage* CharacterIcon; // 0x260(0x08)
	struct UTextBlock* DATA_Class; // 0x268(0x08)
	struct UTextBlock* DATA_Distance; // 0x270(0x08)
	struct UTextBlock* DATA_Message; // 0x278(0x08)
	struct UBasic_HUD_BracketWindowSmall_C* NormalShout; // 0x280(0x08)
	struct URetainerBox* RetainerBox_3; // 0x288(0x08)
	struct UWidgetSwitcher* ShoutTypeSwitcher; // 0x290(0x08)
	struct UBorder* SubtitleShout; // 0x298(0x08)
	struct UTextBlock* SubtitleText; // 0x2a0(0x08)
	struct APlayerCharacter* Character; // 0x2a8(0x08)
	struct FVector2D LastPos; // 0x2b0(0x08)
	float TimeActive; // 0x2b8(0x04)
	float Opacity; // 0x2bc(0x04)
	struct FLinearColor BackgroundColor; // 0x2c0(0x10)
	float ShoutActive; // 0x2d0(0x04)

	void SetShoutLocation(struct UUserWidget* Widget, struct FVector2D Position, bool OwnShout); // Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.SetShoutLocation
	void UpdateIcon(); // Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.UpdateIcon
	bool IsOwnShout(); // Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.IsOwnShout
	void Shout(); // Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.Shout
	struct FVector2D CalculateScreenPos(); // Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.CalculateScreenPos
	void InViewport(struct FVector2D Pos, bool Result); // Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.InViewport
	bool IsSenderBehind(struct FVector ToSender); // Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.IsSenderBehind
	void Construct(); // Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.Construct
	void Update Widget(); // Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.Update Widget
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.Tick
	void OnShout(); // Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.OnShout
	void PreConstruct(bool IsDesignTime); // Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.PreConstruct
	void ExecuteUbergraph_OnScreenIndicator_Actor_Shout(int32_t EntryPoint); // Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.ExecuteUbergraph_OnScreenIndicator_Actor_Shout
};

