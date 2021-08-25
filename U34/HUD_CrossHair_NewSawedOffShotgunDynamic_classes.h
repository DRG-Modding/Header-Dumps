// WidgetBlueprintGeneratedClass HUD_CrossHair_NewSawedOffShotgunDynamic.HUD_CrossHair_NewSawedOffShotgunDynamic_C
// Size: 0x28c (Inherited: 0x230)
struct UHUD_CrossHair_NewSawedOffShotgunDynamic_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* Image_79; // 0x238(0x08)
	struct UImage* Image_80; // 0x240(0x08)
	struct UNamedSlot* LeftCH; // 0x248(0x08)
	struct UNamedSlot* RightCH; // 0x250(0x08)
	struct UImage* Shell1A; // 0x258(0x08)
	struct UImage* Shell1B; // 0x260(0x08)
	struct UImage* Shell2A; // 0x268(0x08)
	struct UImage* Shell2B; // 0x270(0x08)
	float Opacity High; // 0x278(0x04)
	char UnknownData_27C[0x4]; // 0x27c(0x04)
	struct APlayerCharacter* Character; // 0x280(0x08)
	float Opacity Low; // 0x288(0x04)

	void PreConstruct(bool IsDesignTime); // Function HUD_CrossHair_NewSawedOffShotgunDynamic.HUD_CrossHair_NewSawedOffShotgunDynamic_C.PreConstruct
	void SetData(struct AAmmoDrivenWeapon* Weapon); // Function HUD_CrossHair_NewSawedOffShotgunDynamic.HUD_CrossHair_NewSawedOffShotgunDynamic_C.SetData
	void OnClipCountChanged(int32_t amount); // Function HUD_CrossHair_NewSawedOffShotgunDynamic.HUD_CrossHair_NewSawedOffShotgunDynamic_C.OnClipCountChanged
	void Construct(); // Function HUD_CrossHair_NewSawedOffShotgunDynamic.HUD_CrossHair_NewSawedOffShotgunDynamic_C.Construct
	void OnDamagedEnemy_Event(struct TScriptInterface<None> EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial); // Function HUD_CrossHair_NewSawedOffShotgunDynamic.HUD_CrossHair_NewSawedOffShotgunDynamic_C.OnDamagedEnemy_Event
	void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool isAtRest); // Function HUD_CrossHair_NewSawedOffShotgunDynamic.HUD_CrossHair_NewSawedOffShotgunDynamic_C.OnSpreadChanged
	void ExecuteUbergraph_HUD_CrossHair_NewSawedOffShotgunDynamic(int32_t EntryPoint); // Function HUD_CrossHair_NewSawedOffShotgunDynamic.HUD_CrossHair_NewSawedOffShotgunDynamic_C.ExecuteUbergraph_HUD_CrossHair_NewSawedOffShotgunDynamic
};

