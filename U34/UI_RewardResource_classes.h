// WidgetBlueprintGeneratedClass UI_RewardResource.UI_RewardResource_C
// Size: 0x278 (Inherited: 0x238)
struct UUI_RewardResource_C : URewardWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UWidgetAnimation* CelebrateAnim; // 0x240(0x08)
	struct UBasic_AnimatedNumber_C* Basic_AnimatedNumber; // 0x248(0x08)
	struct UImage* ResourceIcon; // 0x250(0x08)
	struct USizeBox* SizeBox_3; // 0x258(0x08)
	struct UResourceData* Resource; // 0x260(0x08)
	int32_t amount; // 0x268(0x04)
	char UnknownData_26C[0x4]; // 0x26c(0x04)
	struct UAudioComponent* AudioCounting; // 0x270(0x08)

	void PreConstruct(bool IsDesignTime); // Function UI_RewardResource.UI_RewardResource_C.PreConstruct
	void PlayReceiveAnim(); // Function UI_RewardResource.UI_RewardResource_C.PlayReceiveAnim
	void ExecuteUbergraph_UI_RewardResource(int32_t EntryPoint); // Function UI_RewardResource.UI_RewardResource_C.ExecuteUbergraph_UI_RewardResource
};

