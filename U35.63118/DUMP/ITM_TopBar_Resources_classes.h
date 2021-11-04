// WidgetBlueprintGeneratedClass ITM_TopBar_Resources.ITM_TopBar_Resources_C
// Size: 0x2a3 (Inherited: 0x230)
struct UITM_TopBar_Resources_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UHorizontalBox* ParentBox; // 0x238(0x08)
	TArray<UResourceData*> Resources; // 0x240(0x10)
	TMap<UResourceData*, UITM_TopBar_ResourceCounter_C*> ResourceWidgets; // 0x250(0x50)
	bool IsDesignTime; // 0x2a0(0x01)
	bool HideWhenZero; // 0x2a1(0x01)
	bool DoCountAnim; // 0x2a2(0x01)

	void GetResourceAmount(UResourceData* Resource, float Amount);
	void AddResource(UResourceData* InResource, bool InHideWhenZero);
	void SetResources(TArray<UResourceData*> InResources);
	void PreConstruct(bool IsDesignTime);
	void UpdateResourceBehavior(bool HideWhenZero, bool DoCountAnim);
	void ExecuteUbergraph_ITM_TopBar_Resources(int32_t EntryPoint);
};

