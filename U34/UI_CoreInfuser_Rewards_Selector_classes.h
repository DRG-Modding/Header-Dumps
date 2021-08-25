// WidgetBlueprintGeneratedClass UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C
// Size: 0x2c9 (Inherited: 0x230)
struct UUI_CoreInfuser_Rewards_Selector_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UUI_CoreInfuser_Reward_Icon_C* RewardIcon_Center; // 0x238(0x08)
	struct UUI_CoreInfuser_Reward_Icon_C* RewardIcon_Left; // 0x240(0x08)
	struct UUI_CoreInfuser_Reward_Icon_C* RewardIcon_Right; // 0x248(0x08)
	struct UUI_CoreInfuser_Rewards_Animator_C* RewardsAnimator; // 0x250(0x08)
	struct TArray<struct UUI_CoreInfuser_Reward_Icon_C*> RewardIcons; // 0x258(0x10)
	struct UUI_CoreInfuser_Reward_Icon_C* HoveredReward; // 0x268(0x08)
	struct FMulticastInlineDelegate OnRewardHovered; // 0x270(0x10)
	struct FMulticastInlineDelegate OnRewardUnhovered; // 0x280(0x10)
	struct FMulticastInlineDelegate OnRewardSelected; // 0x290(0x10)
	bool IsOpen; // 0x2a0(0x01)
	char UnknownData_2A1[0x7]; // 0x2a1(0x07)
	struct FMulticastInlineDelegate OnOpenChanged; // 0x2a8(0x10)
	struct FMulticastInlineDelegate OnRewardsChanged; // 0x2b8(0x10)
	bool IsRewardSelected; // 0x2c8(0x01)

	void SetOpen(bool InIsOpen); // Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.SetOpen
	void SetSelectedReward(struct USchematic* InReward, bool IsRewardValid); // Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.SetSelectedReward
	void SetSchematicRewards(struct TArray<struct USchematic*> InRewards); // Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.SetSchematicRewards
	void Construct(); // Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.Construct
	void RewardHovered(struct UUI_CoreInfuser_Reward_Icon_C* IconWidget); // Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.RewardHovered
	void RewardUnhovered(struct UUI_CoreInfuser_Reward_Icon_C* IconWidget); // Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.RewardUnhovered
	void RewardSelected(struct UUI_CoreInfuser_Reward_Icon_C* IconWidget); // Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.RewardSelected
	void SetDispenser(struct AEventRewardDispenser* InDispenser); // Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.SetDispenser
	void ExecuteUbergraph_UI_CoreInfuser_Rewards_Selector(int32_t EntryPoint); // Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.ExecuteUbergraph_UI_CoreInfuser_Rewards_Selector
	void OnRewardsChanged__DelegateSignature(struct TArray<struct USchematic*> Rewards); // Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.OnRewardsChanged__DelegateSignature
	void OnOpenChanged__DelegateSignature(bool Open); // Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.OnOpenChanged__DelegateSignature
	void OnRewardSelected__DelegateSignature(struct USchematic* Reward); // Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.OnRewardSelected__DelegateSignature
	void OnRewardUnhovered__DelegateSignature(struct UUI_CoreInfuser_Reward_Icon_C* Reward); // Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.OnRewardUnhovered__DelegateSignature
	void OnRewardHovered__DelegateSignature(struct UUI_CoreInfuser_Reward_Icon_C* Reward); // Function UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C.OnRewardHovered__DelegateSignature
};

