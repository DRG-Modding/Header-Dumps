// WidgetBlueprintGeneratedClass HUD_CrossHair_PickAxe.HUD_CrossHair_PickAxe_C
// Size: 0x248 (Inherited: 0x230)
struct UHUD_CrossHair_PickAxe_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* Image_1; // 0x238(0x08)
	UImage* Image_2; // 0x240(0x08)

	void PreConstruct(bool IsDesignTime);
	void SetData(APickaxeItem* pickAxe);
	void ActiveMiningEvent_Triggered(bool success);
	void ExecuteUbergraph_HUD_CrossHair_PickAxe(int32_t EntryPoint);
};

