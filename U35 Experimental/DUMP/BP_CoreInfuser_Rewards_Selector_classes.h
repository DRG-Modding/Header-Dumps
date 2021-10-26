// BlueprintGeneratedClass BP_CoreInfuser_Rewards_Selector.BP_CoreInfuser_Rewards_Selector_C
// Size: 0x258 (Inherited: 0x220)
struct ABP_CoreInfuser_Rewards_Selector_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UWidgetComponent* Widget_Rewards; 
	UPROPERTY(BlueprintReadWrite) UWidgetComponent* Widget_Bg; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) bool IsVisible; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate OnRewardSelected; 

	UFUNCTION(BlueprintCallable) void GetBackgroundsWidget(UUI_CoreInfuser_Rewards_Background_C* Widget);
	UFUNCTION(BlueprintCallable) void GetRewardsWidget(UUI_CoreInfuser_Rewards_Selector_C* Widget);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void SetVisible(bool InVisible);
	UFUNCTION(BlueprintCallable) void OnRewardSelectedEvent(USchematic* Reward);
	UFUNCTION(BlueprintCallable) void SetSelectedReward(USchematic* InReward);
	UFUNCTION(BlueprintCallable) void SetDispenser(AEventRewardDispenser* InDispenser);
	UFUNCTION(BlueprintCallable) void Set Selectable Rewards(TArray<USchematic*> InRewards);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_CoreInfuser_Rewards_Selector(int32_t EntryPoint);
	UFUNCTION(BlueprintCallable) void OnRewardSelected__DelegateSignature(USchematic* SchematicReward);
};

