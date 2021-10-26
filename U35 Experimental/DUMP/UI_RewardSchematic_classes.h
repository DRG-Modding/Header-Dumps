// WidgetBlueprintGeneratedClass UI_RewardSchematic.UI_RewardSchematic_C
// Size: 0x258 (Inherited: 0x238)
struct UUI_RewardSchematic_C : URewardWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	UWidgetAnimation* CelebrationAnim; // 0x240(0x08)
	UUI_Forge_Schematic_C* UI_Forge_Schematic; // 0x248(0x08)
	UTextBlock* UnlockedText; // 0x250(0x08)

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void PlayReceiveAnim();
	void ExecuteUbergraph_UI_RewardSchematic(int32_t EntryPoint);
};

