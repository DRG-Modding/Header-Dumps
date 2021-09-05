// WidgetBlueprintGeneratedClass HUD_CrossHair_NewSawedOffShotgunDynamic.HUD_CrossHair_NewSawedOffShotgunDynamic_C
// Size: 0x28c (Inherited: 0x230)
struct UHUD_CrossHair_NewSawedOffShotgunDynamic_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* Image_79; // 0x238(0x08)
	UImage* Image_80; // 0x240(0x08)
	UNamedSlot* LeftCH; // 0x248(0x08)
	UNamedSlot* RightCH; // 0x250(0x08)
	UImage* Shell1A; // 0x258(0x08)
	UImage* Shell1B; // 0x260(0x08)
	UImage* Shell2A; // 0x268(0x08)
	UImage* Shell2B; // 0x270(0x08)
	float Opacity High; // 0x278(0x04)
	APlayerCharacter* Character; // 0x280(0x08)
	float Opacity Low; // 0x288(0x04)

	void PreConstruct(bool IsDesignTime);
	void SetData(AAmmoDrivenWeapon* Weapon);
	void OnClipCountChanged(int32_t amount);
	void Construct();
	void OnDamagedEnemy_Event(TScriptInterface<IHealth> EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
	void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool isAtRest);
	void ExecuteUbergraph_HUD_CrossHair_NewSawedOffShotgunDynamic(int32_t EntryPoint);
};

