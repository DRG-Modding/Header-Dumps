// WidgetBlueprintGeneratedClass HUD_CrosCryospray.HUD_CrosCryospray_C
// Size: 0x28c (Inherited: 0x230)
struct UHUD_CrosCryospray_C : UCrosshairWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* DotFade; // 0x238(0x08)
	struct UImage* CH_ArrowLeft; // 0x240(0x08)
	struct UImage* CH_ArrowRight; // 0x248(0x08)
	struct UImage* CH_LeftBottom; // 0x250(0x08)
	struct UImage* CH_LeftTop; // 0x258(0x08)
	struct UImage* CH_RightTop; // 0x260(0x08)
	struct UImage* Dot; // 0x268(0x08)
	struct UImage* Image_2; // 0x270(0x08)
	float Opacity High; // 0x278(0x04)
	char UnknownData_27C[0x4]; // 0x27c(0x04)
	struct APlayerCharacter* Character; // 0x280(0x08)
	float Opacity Low; // 0x288(0x04)

	void SetData(struct AItem* Item); // Function HUD_CrosCryospray.HUD_CrosCryospray_C.SetData
	void Construct(); // Function HUD_CrosCryospray.HUD_CrosCryospray_C.Construct
	void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool isAtRest); // Function HUD_CrosCryospray.HUD_CrosCryospray_C.OnSpreadChanged
	void PreConstruct(bool IsDesignTime); // Function HUD_CrosCryospray.HUD_CrosCryospray_C.PreConstruct
	void OnDamagedEnemy_Event(struct TScriptInterface<None> EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial); // Function HUD_CrosCryospray.HUD_CrosCryospray_C.OnDamagedEnemy_Event
	void ExecuteUbergraph_HUD_CrosCryospray(int32_t EntryPoint); // Function HUD_CrosCryospray.HUD_CrosCryospray_C.ExecuteUbergraph_HUD_CrosCryospray
};

