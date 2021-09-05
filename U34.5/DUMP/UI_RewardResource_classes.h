// WidgetBlueprintGeneratedClass UI_RewardResource.UI_RewardResource_C
// Size: 0x278 (Inherited: 0x238)
struct UUI_RewardResource_C : URewardWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	UWidgetAnimation* CelebrateAnim; // 0x240(0x08)
	UBasic_AnimatedNumber_C* Basic_AnimatedNumber; // 0x248(0x08)
	UImage* ResourceIcon; // 0x250(0x08)
	USizeBox* SizeBox_3; // 0x258(0x08)
	UResourceData* Resource; // 0x260(0x08)
	int32_t amount; // 0x268(0x04)
	UAudioComponent* AudioCounting; // 0x270(0x08)

	void PreConstruct(bool IsDesignTime);
	void PlayReceiveAnim();
	void ExecuteUbergraph_UI_RewardResource(int32_t EntryPoint);
};

