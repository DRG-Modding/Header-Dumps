// WidgetBlueprintGeneratedClass ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C
// Size: 0x271 (Inherited: 0x230)
struct UITM_TopBar_ResourceCounter_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_AnimatedNumber_C* Number; // 0x238(0x08)
	struct UBasic_ResourceIcon_C* ResourceLeft; // 0x240(0x08)
	struct UBasic_ResourceIcon_C* ResourceRight; // 0x248(0x08)
	struct UResourceData* Resource; // 0x250(0x08)
	float amount; // 0x258(0x04)
	float RequiredAmount; // 0x25c(0x04)
	bool IconOnRight; // 0x260(0x01)
	bool HideWhenZero; // 0x261(0x01)
	char UnknownData_262[0x6]; // 0x262(0x06)
	struct UBasic_ToolTip_C* ToolTip; // 0x268(0x08)
	bool DoCountAnim; // 0x270(0x01)

	void SetResourceData(struct UResourceData* InResource, float InAmount, float InRequiredAmount); // Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.SetResourceData
	void PreConstruct(bool IsDesignTime); // Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.PreConstruct
	void UpdateAmount(float InAmount); // Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.UpdateAmount
	void Construct(); // Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.Construct
	void OnResourceAmountChanged_Event(struct UResourceData* Resource, float currentAmount); // Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.OnResourceAmountChanged_Event
	void UpdateFromSave(); // Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.UpdateFromSave
	void UpdateResourceBehavior(bool HideWhenZero, bool DoCountAnim); // Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.UpdateResourceBehavior
	void ExecuteUbergraph_ITM_TopBar_ResourceCounter(int32_t EntryPoint); // Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.ExecuteUbergraph_ITM_TopBar_ResourceCounter
};

