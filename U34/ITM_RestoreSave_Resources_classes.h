// WidgetBlueprintGeneratedClass ITM_RestoreSave_Resources.ITM_RestoreSave_Resources_C
// Size: 0x2a9 (Inherited: 0x230)
struct UITM_RestoreSave_Resources_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UHorizontalBox* ParentBox; // 0x238(0x08)
	struct UHorizontalBox* ParentBox2; // 0x240(0x08)
	struct TArray<struct UResourceData*> Resources; // 0x248(0x10)
	struct TMap<struct UResourceData*, struct UITM_TopBar_ResourceCounter_C*> ResourceWidgets; // 0x258(0x50)
	bool IsDesignTime; // 0x2a8(0x01)

	void AddResource(struct UResourceData* InResource, bool InHideWhenZero, int32_t Index); // Function ITM_RestoreSave_Resources.ITM_RestoreSave_Resources_C.AddResource
	void SetResources(struct TArray<struct UResourceData*> InResources); // Function ITM_RestoreSave_Resources.ITM_RestoreSave_Resources_C.SetResources
	void PreConstruct(bool IsDesignTime); // Function ITM_RestoreSave_Resources.ITM_RestoreSave_Resources_C.PreConstruct
	void Construct(); // Function ITM_RestoreSave_Resources.ITM_RestoreSave_Resources_C.Construct
	void OnResourceAmountChanged(struct UResourceData* Resource, float currentAmount); // Function ITM_RestoreSave_Resources.ITM_RestoreSave_Resources_C.OnResourceAmountChanged
	void ExecuteUbergraph_ITM_RestoreSave_Resources(int32_t EntryPoint); // Function ITM_RestoreSave_Resources.ITM_RestoreSave_Resources_C.ExecuteUbergraph_ITM_RestoreSave_Resources
};

