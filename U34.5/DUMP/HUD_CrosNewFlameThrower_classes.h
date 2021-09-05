// WidgetBlueprintGeneratedClass HUD_CrosNewFlameThrower.HUD_CrosNewFlameThrower_C
// Size: 0x28c (Inherited: 0x230)
struct UHUD_CrosNewFlameThrower_C : UCrosshairWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* DotFade; // 0x238(0x08)
	UImage* CH_ArrowLeft; // 0x240(0x08)
	UImage* CH_ArrowRight; // 0x248(0x08)
	UImage* CH_LeftBottom; // 0x250(0x08)
	UImage* CH_LeftTop; // 0x258(0x08)
	UImage* CH_RightTop; // 0x260(0x08)
	UImage* Dot; // 0x268(0x08)
	UImage* Image_2; // 0x270(0x08)
	float Opacity High; // 0x278(0x04)
	APlayerCharacter* Character; // 0x280(0x08)
	float Opacity Low; // 0x288(0x04)

	void SetData(AItem* Item);
	void Construct();
	void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool isAtRest);
	void PreConstruct(bool IsDesignTime);
	void OnDamagedEnemy_Event(TScriptInterface<IHealth> EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
	void ExecuteUbergraph_HUD_CrosNewFlameThrower(int32_t EntryPoint);
};

