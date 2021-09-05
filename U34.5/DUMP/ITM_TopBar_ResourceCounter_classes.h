// WidgetBlueprintGeneratedClass ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C
// Size: 0x271 (Inherited: 0x230)
struct UITM_TopBar_ResourceCounter_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_AnimatedNumber_C* Number; // 0x238(0x08)
	UBasic_ResourceIcon_C* ResourceLeft; // 0x240(0x08)
	UBasic_ResourceIcon_C* ResourceRight; // 0x248(0x08)
	UResourceData* Resource; // 0x250(0x08)
	float amount; // 0x258(0x04)
	float RequiredAmount; // 0x25c(0x04)
	bool IconOnRight; // 0x260(0x01)
	bool HideWhenZero; // 0x261(0x01)
	UBasic_ToolTip_C* ToolTip; // 0x268(0x08)
	bool DoCountAnim; // 0x270(0x01)

	void SetResourceData(UResourceData* InResource, float InAmount, float InRequiredAmount);
	void PreConstruct(bool IsDesignTime);
	void UpdateAmount(float InAmount);
	void Construct();
	void OnResourceAmountChanged_Event(UResourceData* Resource, float currentAmount);
	void UpdateFromSave();
	void UpdateResourceBehavior(bool HideWhenZero, bool DoCountAnim);
	void ExecuteUbergraph_ITM_TopBar_ResourceCounter(int32_t EntryPoint);
};

