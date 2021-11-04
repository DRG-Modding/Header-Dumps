// BlueprintGeneratedClass BP_TextField_Screen_SeeThrough.BP_TextField_Screen_SeeThrough_C
// Size: 0x241 (Inherited: 0x220)
struct ABP_TextField_Screen_SeeThrough_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UTextRenderComponent* TextRender; // 0x228(0x08)
	UWidgetComponent* Widget; // 0x230(0x08)
	USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	bool ShowBG; // 0x240(0x01)

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_TextField_Screen_SeeThrough(int32_t EntryPoint);
};

