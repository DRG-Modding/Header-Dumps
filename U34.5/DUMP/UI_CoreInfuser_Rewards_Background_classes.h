// WidgetBlueprintGeneratedClass UI_CoreInfuser_Rewards_Background.UI_CoreInfuser_Rewards_Background_C
// Size: 0x261 (Inherited: 0x230)
struct UUI_CoreInfuser_Rewards_Background_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UUI_CoreInfuser_Rewards_Animator_C* RewardsAnimator; // 0x238(0x08)
	UUI_CoreInfuser_Reward_Background_C* Wedge_Center; // 0x240(0x08)
	UUI_CoreInfuser_Reward_Background_C* Wedge_Left; // 0x248(0x08)
	UUI_CoreInfuser_Reward_Background_C* Wedge_Right; // 0x250(0x08)
	UUI_CoreInfuser_Rewards_Selector_C* RewardSelector; // 0x258(0x08)
	bool IsOpen; // 0x260(0x01)

	void SetOpen(bool IsOpen);
	void SetRewardGiven(int32_t Index);
	void SetRewards(TArray<USchematic*> InRewards);
	void GetIconWidget(int32_t Index, UUI_CoreInfuser_Reward_Background_C* IconWidget);
	void SetHovered(int32_t InIndex, bool InHovered);
	void OnRewardHovered_Event(UUI_CoreInfuser_Reward_Icon_C* Reward);
	void OnRewardUnhovered_Event(UUI_CoreInfuser_Reward_Icon_C* Reward);
	void OnRewardSelectedEvent(USchematic* Reward);
	void BindToRewardSelector(UUI_CoreInfuser_Rewards_Selector_C* RewardSelector);
	void Construct();
	void ExecuteUbergraph_UI_CoreInfuser_Rewards_Background(int32_t EntryPoint);
};

