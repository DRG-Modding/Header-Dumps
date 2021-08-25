// WidgetBlueprintGeneratedClass UI_CoreInfuser_Rewards_Background.UI_CoreInfuser_Rewards_Background_C
// Size: 0x261 (Inherited: 0x230)
struct UUI_CoreInfuser_Rewards_Background_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UUI_CoreInfuser_Rewards_Animator_C* RewardsAnimator; // 0x238(0x08)
	struct UUI_CoreInfuser_Reward_Background_C* Wedge_Center; // 0x240(0x08)
	struct UUI_CoreInfuser_Reward_Background_C* Wedge_Left; // 0x248(0x08)
	struct UUI_CoreInfuser_Reward_Background_C* Wedge_Right; // 0x250(0x08)
	struct UUI_CoreInfuser_Rewards_Selector_C* RewardSelector; // 0x258(0x08)
	bool IsOpen; // 0x260(0x01)

	void SetOpen(bool IsOpen); // Function UI_CoreInfuser_Rewards_Background.UI_CoreInfuser_Rewards_Background_C.SetOpen
	void SetRewardGiven(int32_t Index); // Function UI_CoreInfuser_Rewards_Background.UI_CoreInfuser_Rewards_Background_C.SetRewardGiven
	void SetRewards(struct TArray<struct USchematic*> InRewards); // Function UI_CoreInfuser_Rewards_Background.UI_CoreInfuser_Rewards_Background_C.SetRewards
	void GetIconWidget(int32_t Index, struct UUI_CoreInfuser_Reward_Background_C* IconWidget); // Function UI_CoreInfuser_Rewards_Background.UI_CoreInfuser_Rewards_Background_C.GetIconWidget
	void SetHovered(int32_t InIndex, bool InHovered); // Function UI_CoreInfuser_Rewards_Background.UI_CoreInfuser_Rewards_Background_C.SetHovered
	void OnRewardHovered_Event(struct UUI_CoreInfuser_Reward_Icon_C* Reward); // Function UI_CoreInfuser_Rewards_Background.UI_CoreInfuser_Rewards_Background_C.OnRewardHovered_Event
	void OnRewardUnhovered_Event(struct UUI_CoreInfuser_Reward_Icon_C* Reward); // Function UI_CoreInfuser_Rewards_Background.UI_CoreInfuser_Rewards_Background_C.OnRewardUnhovered_Event
	void OnRewardSelectedEvent(struct USchematic* Reward); // Function UI_CoreInfuser_Rewards_Background.UI_CoreInfuser_Rewards_Background_C.OnRewardSelectedEvent
	void BindToRewardSelector(struct UUI_CoreInfuser_Rewards_Selector_C* RewardSelector); // Function UI_CoreInfuser_Rewards_Background.UI_CoreInfuser_Rewards_Background_C.BindToRewardSelector
	void Construct(); // Function UI_CoreInfuser_Rewards_Background.UI_CoreInfuser_Rewards_Background_C.Construct
	void ExecuteUbergraph_UI_CoreInfuser_Rewards_Background(int32_t EntryPoint); // Function UI_CoreInfuser_Rewards_Background.UI_CoreInfuser_Rewards_Background_C.ExecuteUbergraph_UI_CoreInfuser_Rewards_Background
};

