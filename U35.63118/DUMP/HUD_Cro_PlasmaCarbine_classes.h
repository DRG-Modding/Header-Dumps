// WidgetBlueprintGeneratedClass HUD_Cro_PlasmaCarbine.HUD_Cro_PlasmaCarbine_C
// Size: 0x340 (Inherited: 0x230)
struct UHUD_Cro_PlasmaCarbine_C : UCrosshairWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* DotFade; // 0x238(0x08)
	UImage* CA_Down1; // 0x240(0x08)
	UImage* CA_Down2; // 0x248(0x08)
	UImage* CA_Down3; // 0x250(0x08)
	UImage* CA_Left1; // 0x258(0x08)
	UImage* CA_Left2; // 0x260(0x08)
	UImage* CA_Left3; // 0x268(0x08)
	UImage* CA_Right1; // 0x270(0x08)
	UImage* CA_Right2; // 0x278(0x08)
	UImage* CA_Right3; // 0x280(0x08)
	UImage* Center_Down; // 0x288(0x08)
	UImage* Center_Left; // 0x290(0x08)
	UImage* Center_Right; // 0x298(0x08)
	UImage* CH_Bottom; // 0x2a0(0x08)
	UImage* CH_BottomLine; // 0x2a8(0x08)
	UImage* CH_BottomLine_2; // 0x2b0(0x08)
	UImage* CH_FullBottom; // 0x2b8(0x08)
	UImage* CH_FullLeft; // 0x2c0(0x08)
	UImage* CH_FullRight; // 0x2c8(0x08)
	UImage* CH_FullTop; // 0x2d0(0x08)
	UImage* CH_Left; // 0x2d8(0x08)
	UImage* CH_LeftLine; // 0x2e0(0x08)
	UImage* CH_LeftLine_2; // 0x2e8(0x08)
	UImage* CH_Right; // 0x2f0(0x08)
	UImage* CH_RightLine; // 0x2f8(0x08)
	UImage* CH_RightLine_2; // 0x300(0x08)
	UImage* CH_Top; // 0x308(0x08)
	UImage* CH_TopLine; // 0x310(0x08)
	UImage* CH_TopLine_2; // 0x318(0x08)
	UImage* Dot; // 0x320(0x08)
	UImage* Outside; // 0x328(0x08)
	APlayerCharacter* Character; // 0x330(0x08)
	float OpacityLow; // 0x338(0x04)
	float OpacityHigh; // 0x33c(0x04)

	void Construct();
	void SetData(AItem* Item);
	void PreConstruct(bool IsDesignTime);
	void OnDamagedEnemy_Event(TScriptInterface<IHealth> EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
	void ExecuteUbergraph_HUD_Cro_PlasmaCarbine(int32_t EntryPoint);
};

