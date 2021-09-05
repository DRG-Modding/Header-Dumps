// WidgetBlueprintGeneratedClass HUD_Armor_Base.HUD_Armor_Base_C
// Size: 0x258 (Inherited: 0x230)
struct UHUD_Armor_Base_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBorder* Border_1; // 0x238(0x08)
	UImage* IconImage; // 0x240(0x08)
	UProgressBar* ProgressBar; // 0x248(0x08)
	UHealthComponent* HealthComponent; // 0x250(0x08)

	void ArmorChanged(float Health);
	void Bind To Health Component(UHealthComponent* HealthComponent);
	void PreConstruct(bool IsDesignTime);
	void Unbind Health Component();
	void Set Armor Pct(float InPercent);
	void Bind To Player(APlayerCharacter* Player);
	void ExecuteUbergraph_HUD_Armor_Base(int32_t EntryPoint);
};

