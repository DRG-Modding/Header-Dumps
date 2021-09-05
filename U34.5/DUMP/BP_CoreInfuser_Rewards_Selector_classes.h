// BlueprintGeneratedClass BP_CoreInfuser_Rewards_Selector.BP_CoreInfuser_Rewards_Selector_C
// Size: 0x258 (Inherited: 0x220)
struct ABP_CoreInfuser_Rewards_Selector_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UWidgetComponent* Widget_Rewards; // 0x228(0x08)
	UWidgetComponent* Widget_Bg; // 0x230(0x08)
	USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	bool IsVisible; // 0x240(0x01)
	FMulticastInlineDelegate OnRewardSelected; // 0x248(0x10)

	void GetBackgroundsWidget(UUI_CoreInfuser_Rewards_Background_C* Widget);
	void GetRewardsWidget(UUI_CoreInfuser_Rewards_Selector_C* Widget);
	void ReceiveBeginPlay();
	void SetVisible(bool InVisible);
	void OnRewardSelectedEvent(USchematic* Reward);
	void SetSelectedReward(USchematic* InReward);
	void SetDispenser(AEventRewardDispenser* InDispenser);
	void Set Selectable Rewards(TArray<USchematic*> InRewards);
	void ExecuteUbergraph_BP_CoreInfuser_Rewards_Selector(int32_t EntryPoint);
	void OnRewardSelected__DelegateSignature(USchematic* SchematicReward);
};

