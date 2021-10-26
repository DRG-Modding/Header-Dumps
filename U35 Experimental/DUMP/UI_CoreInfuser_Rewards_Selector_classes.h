// WidgetBlueprintGeneratedClass UI_CoreInfuser_Rewards_Selector.UI_CoreInfuser_Rewards_Selector_C
// Size: 0x2c9 (Inherited: 0x230)
struct UUI_CoreInfuser_Rewards_Selector_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UUI_CoreInfuser_Reward_Icon_C* RewardIcon_Center; 
	UPROPERTY(BlueprintReadWrite) UUI_CoreInfuser_Reward_Icon_C* RewardIcon_Left; 
	UPROPERTY(BlueprintReadWrite) UUI_CoreInfuser_Reward_Icon_C* RewardIcon_Right; 
	UPROPERTY(BlueprintReadWrite) UUI_CoreInfuser_Rewards_Animator_C* RewardsAnimator; 
	UPROPERTY(BlueprintReadWrite) TArray<UUI_CoreInfuser_Reward_Icon_C*> RewardIcons; 
	UPROPERTY(BlueprintReadWrite) UUI_CoreInfuser_Reward_Icon_C* HoveredReward; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate OnRewardHovered; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate OnRewardUnhovered; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate OnRewardSelected; 
	UPROPERTY(BlueprintReadWrite) bool IsOpen; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate OnOpenChanged; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate OnRewardsChanged; 
	UPROPERTY(BlueprintReadWrite) bool IsRewardSelected; 

	UFUNCTION(BlueprintCallable) void SetOpen(bool InIsOpen);
	UFUNCTION(BlueprintCallable) void SetSelectedReward(USchematic* InReward, bool IsRewardValid);
	UFUNCTION(BlueprintCallable) void SetSchematicRewards(TArray<USchematic*> InRewards);
	UFUNCTION(BlueprintCallable) void Construct();
	UFUNCTION(BlueprintCallable) void RewardHovered(UUI_CoreInfuser_Reward_Icon_C* IconWidget);
	UFUNCTION(BlueprintCallable) void RewardUnhovered(UUI_CoreInfuser_Reward_Icon_C* IconWidget);
	UFUNCTION(BlueprintCallable) void RewardSelected(UUI_CoreInfuser_Reward_Icon_C* IconWidget);
	UFUNCTION(BlueprintCallable) void SetDispenser(AEventRewardDispenser* InDispenser);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_UI_CoreInfuser_Rewards_Selector(int32_t EntryPoint);
	UFUNCTION(BlueprintCallable) void OnRewardsChanged__DelegateSignature(TArray<USchematic*> Rewards);
	UFUNCTION(BlueprintCallable) void OnOpenChanged__DelegateSignature(bool Open);
	UFUNCTION(BlueprintCallable) void OnRewardSelected__DelegateSignature(USchematic* Reward);
	UFUNCTION(BlueprintCallable) void OnRewardUnhovered__DelegateSignature(UUI_CoreInfuser_Reward_Icon_C* Reward);
	UFUNCTION(BlueprintCallable) void OnRewardHovered__DelegateSignature(UUI_CoreInfuser_Reward_Icon_C* Reward);
};

