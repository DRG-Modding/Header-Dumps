// BlueprintGeneratedClass BP_CoreInfuser_Rewards_Selector.BP_CoreInfuser_Rewards_Selector_C
// Size: 0x258 (Inherited: 0x220)
struct ABP_CoreInfuser_Rewards_Selector_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UWidgetComponent* Widget_Rewards; // 0x228(0x08)
	struct UWidgetComponent* Widget_Bg; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	bool IsVisible; // 0x240(0x01)
	char UnknownData_241[0x7]; // 0x241(0x07)
	struct FMulticastInlineDelegate OnRewardSelected; // 0x248(0x10)

	void GetBackgroundsWidget(struct UUI_CoreInfuser_Rewards_Background_C* Widget); // Function BP_CoreInfuser_Rewards_Selector.BP_CoreInfuser_Rewards_Selector_C.GetBackgroundsWidget
	void GetRewardsWidget(struct UUI_CoreInfuser_Rewards_Selector_C* Widget); // Function BP_CoreInfuser_Rewards_Selector.BP_CoreInfuser_Rewards_Selector_C.GetRewardsWidget
	void ReceiveBeginPlay(); // Function BP_CoreInfuser_Rewards_Selector.BP_CoreInfuser_Rewards_Selector_C.ReceiveBeginPlay
	void SetVisible(bool InVisible); // Function BP_CoreInfuser_Rewards_Selector.BP_CoreInfuser_Rewards_Selector_C.SetVisible
	void OnRewardSelectedEvent(struct USchematic* Reward); // Function BP_CoreInfuser_Rewards_Selector.BP_CoreInfuser_Rewards_Selector_C.OnRewardSelectedEvent
	void SetSelectedReward(struct USchematic* InReward); // Function BP_CoreInfuser_Rewards_Selector.BP_CoreInfuser_Rewards_Selector_C.SetSelectedReward
	void SetDispenser(struct AEventRewardDispenser* InDispenser); // Function BP_CoreInfuser_Rewards_Selector.BP_CoreInfuser_Rewards_Selector_C.SetDispenser
	void Set Selectable Rewards(struct TArray<struct USchematic*> InRewards); // Function BP_CoreInfuser_Rewards_Selector.BP_CoreInfuser_Rewards_Selector_C.Set Selectable Rewards
	void ExecuteUbergraph_BP_CoreInfuser_Rewards_Selector(int32_t EntryPoint); // Function BP_CoreInfuser_Rewards_Selector.BP_CoreInfuser_Rewards_Selector_C.ExecuteUbergraph_BP_CoreInfuser_Rewards_Selector
	void OnRewardSelected__DelegateSignature(struct USchematic* SchematicReward); // Function BP_CoreInfuser_Rewards_Selector.BP_CoreInfuser_Rewards_Selector_C.OnRewardSelected__DelegateSignature
};

