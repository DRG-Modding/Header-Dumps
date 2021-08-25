// WidgetBlueprintGeneratedClass HUD_CrossHair_PickAxe.HUD_CrossHair_PickAxe_C
// Size: 0x248 (Inherited: 0x230)
struct UHUD_CrossHair_PickAxe_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* Image_1; // 0x238(0x08)
	struct UImage* Image_2; // 0x240(0x08)

	void PreConstruct(bool IsDesignTime); // Function HUD_CrossHair_PickAxe.HUD_CrossHair_PickAxe_C.PreConstruct
	void SetData(struct APickaxeItem* pickAxe); // Function HUD_CrossHair_PickAxe.HUD_CrossHair_PickAxe_C.SetData
	void ActiveMiningEvent_Triggered(bool success); // Function HUD_CrossHair_PickAxe.HUD_CrossHair_PickAxe_C.ActiveMiningEvent_Triggered
	void ExecuteUbergraph_HUD_CrossHair_PickAxe(int32_t EntryPoint); // Function HUD_CrossHair_PickAxe.HUD_CrossHair_PickAxe_C.ExecuteUbergraph_HUD_CrossHair_PickAxe
};

