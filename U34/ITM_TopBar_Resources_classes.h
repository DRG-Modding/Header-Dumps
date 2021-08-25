// WidgetBlueprintGeneratedClass ITM_TopBar_Resources.ITM_TopBar_Resources_C
// Size: 0x2a3 (Inherited: 0x230)
struct UITM_TopBar_Resources_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UHorizontalBox* ParentBox; // 0x238(0x08)
	struct TArray<struct UResourceData*> Resources; // 0x240(0x10)
	struct TMap<struct UResourceData*, struct UITM_TopBar_ResourceCounter_C*> ResourceWidgets; // 0x250(0x50)
	bool IsDesignTime; // 0x2a0(0x01)
	bool HideWhenZero; // 0x2a1(0x01)
	bool DoCountAnim; // 0x2a2(0x01)

	void AddResource(struct UResourceData* InResource, bool InHideWhenZero); // Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.AddResource
	void SetResources(struct TArray<struct UResourceData*> InResources); // Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.SetResources
	void PreConstruct(bool IsDesignTime); // Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.PreConstruct
	void UpdateResourceBehavior(bool HideWhenZero, bool DoCountAnim); // Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.UpdateResourceBehavior
	void ExecuteUbergraph_ITM_TopBar_Resources(int32_t EntryPoint); // Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.ExecuteUbergraph_ITM_TopBar_Resources
};

