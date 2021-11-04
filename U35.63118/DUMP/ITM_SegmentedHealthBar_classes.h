// WidgetBlueprintGeneratedClass ITM_SegmentedHealthBar.ITM_SegmentedHealthBar_C
// Size: 0x281 (Inherited: 0x230)
struct UITM_SegmentedHealthBar_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBorder* Border_3; // 0x238(0x08)
	UImage* ICON_Armor; // 0x240(0x08)
	UITM_HealthBarSection_C* ITM_HealthBarSection1; // 0x248(0x08)
	UITM_HealthBarSection_C* ITM_HealthBarSection2; // 0x250(0x08)
	UITM_HealthBarSection_C* ITM_HealthBarSection3; // 0x258(0x08)
	UHorizontalBox* SegmentHolder; // 0x260(0x08)
	UHealthComponent* HealthComponent; // 0x268(0x08)
	TArray<UITM_HealthBarSection_C*> Sections; // 0x270(0x10)
	bool IsSegmented; // 0x280(0x01)

	void SetData(UHealthComponent* HealthComponent);
	void OnNewHealthSegment(int32_t currSegment, int32_t prevSegment);
	void PreConstruct(bool IsDesignTime);
	void AddSection(bool AddLeftPadding);
	void SetInvulnerability(bool IsInvulnerability);
	void OnHeal(float Amount);
	void OnDamage(float Amount);
	void ExecuteUbergraph_ITM_SegmentedHealthBar(int32_t EntryPoint);
};

