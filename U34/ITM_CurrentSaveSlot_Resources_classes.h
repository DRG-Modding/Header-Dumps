// WidgetBlueprintGeneratedClass ITM_CurrentSaveSlot_Resources.ITM_CurrentSaveSlot_Resources_C
// Size: 0x2a9 (Inherited: 0x230)
struct UITM_CurrentSaveSlot_Resources_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UITM_TopBar_ResourceCounter_C* CreditsCounter; // 0x238(0x08)
	struct UVerticalBox* VerticalBox_1; // 0x240(0x08)
	struct TArray<struct UResourceData*> Resources; // 0x248(0x10)
	struct TMap<struct UResourceData*, struct UITM_TopBar_ResourceCounter_C*> ResourceWidgets; // 0x258(0x50)
	bool IsDesignTime; // 0x2a8(0x01)

	void UpdateResourceAmount(struct UFSDSaveGame* SaveSlot); // Function ITM_CurrentSaveSlot_Resources.ITM_CurrentSaveSlot_Resources_C.UpdateResourceAmount
	void AddResource(struct UResourceData* InResource, bool InHideWhenZero, int32_t Index); // Function ITM_CurrentSaveSlot_Resources.ITM_CurrentSaveSlot_Resources_C.AddResource
	void SetResources(struct TArray<struct UResourceData*> InResources); // Function ITM_CurrentSaveSlot_Resources.ITM_CurrentSaveSlot_Resources_C.SetResources
	void PreConstruct(bool IsDesignTime); // Function ITM_CurrentSaveSlot_Resources.ITM_CurrentSaveSlot_Resources_C.PreConstruct
	void ExecuteUbergraph_ITM_CurrentSaveSlot_Resources(int32_t EntryPoint); // Function ITM_CurrentSaveSlot_Resources.ITM_CurrentSaveSlot_Resources_C.ExecuteUbergraph_ITM_CurrentSaveSlot_Resources
};

