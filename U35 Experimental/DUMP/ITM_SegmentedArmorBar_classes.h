// WidgetBlueprintGeneratedClass ITM_SegmentedArmorBar.ITM_SegmentedArmorBar_C
// Size: 0x298 (Inherited: 0x230)
struct UITM_SegmentedArmorBar_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBorder* Border_4; // 0x238(0x08)
	UImage* ICON_Armor; // 0x240(0x08)
	UITM_HealthBarSection_C* ITM_HealthBarSection1; // 0x248(0x08)
	UITM_HealthBarSection_C* ITM_HealthBarSection2; // 0x250(0x08)
	UITM_HealthBarSection_C* ITM_HealthBarSection3; // 0x258(0x08)
	UHorizontalBox* SegmentHolder; // 0x260(0x08)
	AActor* enemy; // 0x268(0x08)
	UEnemyHealthComponent* EnemyHealth; // 0x270(0x08)
	TArray<UITM_HealthBarSection_C*> Sections; // 0x278(0x10)
	TArray<USubHealthComponent*> SubHealthComps; // 0x288(0x10)

	void SetData(AActor* ArmoredEnemy, UEnemyHealthComponent* EnemyHealth);
	void AddSection(bool AddLeftPadding, USubHealthComponent* Health);
	void PreConstruct(bool IsDesignTime);
	void SetInvulnerability(bool IsInvulnerability);
	void OnSubHealthDamageTaken(float Health);
	void OnSubHealthCanTakeDamage(USubHealthComponent* subHealth);
	void ExecuteUbergraph_ITM_SegmentedArmorBar(int32_t EntryPoint);
};

