// WidgetBlueprintGeneratedClass HUD_Cro_GooCannon.HUD_Cro_GooCannon_C
// Size: 0x390 (Inherited: 0x230)
struct UHUD_Cro_GooCannon_C : UCrosshairWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* DotFade; // 0x238(0x08)
	UImage* CA_Left1; // 0x240(0x08)
	UImage* CA_Left2; // 0x248(0x08)
	UImage* CA_Left3; // 0x250(0x08)
	UImage* CA_Right1; // 0x258(0x08)
	UImage* CA_Right2; // 0x260(0x08)
	UImage* CA_Right3; // 0x268(0x08)
	UImage* Center_Left; // 0x270(0x08)
	UImage* Center_Right; // 0x278(0x08)
	UImage* CH_Bottom; // 0x280(0x08)
	UImage* CH_FullLeft; // 0x288(0x08)
	UImage* CH_FullRight; // 0x290(0x08)
	UImage* CH_FullTop; // 0x298(0x08)
	UImage* CH_Left; // 0x2a0(0x08)
	UImage* CH_Right; // 0x2a8(0x08)
	UImage* CH_Top; // 0x2b0(0x08)
	UImage* Charge1; // 0x2b8(0x08)
	UImage* Charge2; // 0x2c0(0x08)
	UImage* Charge3; // 0x2c8(0x08)
	UImage* Charge4; // 0x2d0(0x08)
	UImage* Charge5; // 0x2d8(0x08)
	UImage* Charge6; // 0x2e0(0x08)
	UImage* Dot; // 0x2e8(0x08)
	UImage* Dot_2; // 0x2f0(0x08)
	UImage* Image_2; // 0x2f8(0x08)
	UImage* Image_3; // 0x300(0x08)
	UImage* Image_5; // 0x308(0x08)
	UImage* Image_6; // 0x310(0x08)
	UImage* Image_7; // 0x318(0x08)
	UImage* Image_8; // 0x320(0x08)
	UImage* Image_9; // 0x328(0x08)
	UImage* Image_1L; // 0x330(0x08)
	UImage* Image_1r; // 0x338(0x08)
	UImage* Image_2L; // 0x340(0x08)
	UImage* Image_2R; // 0x348(0x08)
	UImage* Image_3L; // 0x350(0x08)
	UImage* Image_3R; // 0x358(0x08)
	UImage* Image_4L; // 0x360(0x08)
	UImage* Image_4R; // 0x368(0x08)
	UImage* Outside; // 0x370(0x08)
	APlayerCharacter* Character; // 0x378(0x08)
	FLinearColor ChargeProgressColor; // 0x380(0x10)

	void Construct();
	void SetData(AItem* Item);
	void PreConstruct(bool IsDesignTime);
	void OnDamagedEnemy_Event(TScriptInterface<IHealth> EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
	void OnChargeChanged(float charge);
	void ChargeEnd();
	void ExecuteUbergraph_HUD_Cro_GooCannon(int32_t EntryPoint);
};

