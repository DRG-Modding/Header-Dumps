// WidgetBlueprintGeneratedClass ITM_RestoreSave_Resources.ITM_RestoreSave_Resources_C
// Size: 0x2a9 (Inherited: 0x230)
struct UITM_RestoreSave_Resources_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UHorizontalBox* ParentBox; // 0x238(0x08)
	UHorizontalBox* ParentBox2; // 0x240(0x08)
	TArray<UResourceData*> Resources; // 0x248(0x10)
	TMap<UResourceData*, UITM_TopBar_ResourceCounter_C*> ResourceWidgets; // 0x258(0x50)
	bool IsDesignTime; // 0x2a8(0x01)

	void AddResource(UResourceData* InResource, bool InHideWhenZero, int32_t Index);
	void SetResources(TArray<UResourceData*> InResources);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnResourceAmountChanged(UResourceData* Resource, float currentAmount);
	void ExecuteUbergraph_ITM_RestoreSave_Resources(int32_t EntryPoint);
};

