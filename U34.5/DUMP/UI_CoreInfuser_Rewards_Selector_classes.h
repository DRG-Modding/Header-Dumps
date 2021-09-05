// WidgetBlueprintGeneratedClass UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C
// Size: 0x2c9 (Inherited: 0x230)
struct UUI_CoreInfuser_Rewards_Selector_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UUI_CoreInfuser_Reward_Icon_C* RewardIcon_Center; // 0x238(0x08)
	UUI_CoreInfuser_Reward_Icon_C* RewardIcon_Left; // 0x240(0x08)
	UUI_CoreInfuser_Reward_Icon_C* RewardIcon_Right; // 0x248(0x08)
	UUI_CoreInfuser_Rewards_Animator_C* RewardsAnimator; // 0x250(0x08)
	TArray<UUI_CoreInfuser_Reward_Icon_C*> RewardIcons; // 0x258(0x10)
	UUI_CoreInfuser_Reward_Icon_C* HoveredReward; // 0x268(0x08)
	FMulticastInlineDelegate OnRewardHovered; // 0x270(0x10)
	FMulticastInlineDelegate OnRewardUnhovered; // 0x280(0x10)
	FMulticastInlineDelegate OnRewardSelected; // 0x290(0x10)
	bool IsOpen; // 0x2a0(0x01)
	FMulticastInlineDelegate OnOpenChanged; // 0x2a8(0x10)
	FMulticastInlineDelegate OnRewardsChanged; // 0x2b8(0x10)
	bool IsRewardSelected; // 0x2c8(0x01)

	void SetOpen(bool InIsOpen);
	void SetSelectedReward(USchematic* InReward, bool IsRewardValid);
	void SetSchematicRewards(TArray<USchematic*> InRewards);
	void Construct();
	void RewardHovered(UUI_CoreInfuser_Reward_Icon_C* IconWidget);
	void RewardUnhovered(UUI_CoreInfuser_Reward_Icon_C* IconWidget);
	void RewardSelected(UUI_CoreInfuser_Reward_Icon_C* IconWidget);
	void SetDispenser(AEventRewardDispenser* InDispenser);
	void ExecuteUbergraph_UI_CoreInfuser_Rewards_Selector(int32_t EntryPoint);
	void OnRewardsChanged__DelegateSignature(TArray<USchematic*> Rewards);
	void OnOpenChanged__DelegateSignature(bool Open);
	void OnRewardSelected__DelegateSignature(USchematic* Reward);
	void OnRewardUnhovered__DelegateSignature(UUI_CoreInfuser_Reward_Icon_C* Reward);
	void OnRewardHovered__DelegateSignature(UUI_CoreInfuser_Reward_Icon_C* Reward);
};

