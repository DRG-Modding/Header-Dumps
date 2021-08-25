// WidgetBlueprintGeneratedClass UI_RewardSchematic.UI_RewardSchematic_C
// Size: 0x258 (Inherited: 0x238)
struct UUI_RewardSchematic_C : URewardWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UWidgetAnimation* CelebrationAnim; // 0x240(0x08)
	struct UUI_Forge_Schematic_C* UI_Forge_Schematic; // 0x248(0x08)
	struct UTextBlock* UnlockedText; // 0x250(0x08)

	void PreConstruct(bool IsDesignTime); // Function UI_RewardSchematic.UI_RewardSchematic_C.PreConstruct
	void Construct(); // Function UI_RewardSchematic.UI_RewardSchematic_C.Construct
	void PlayReceiveAnim(); // Function UI_RewardSchematic.UI_RewardSchematic_C.PlayReceiveAnim
	void ExecuteUbergraph_UI_RewardSchematic(int32_t EntryPoint); // Function UI_RewardSchematic.UI_RewardSchematic_C.ExecuteUbergraph_UI_RewardSchematic
};

