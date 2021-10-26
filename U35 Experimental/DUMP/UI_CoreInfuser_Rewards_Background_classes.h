// WidgetBlueprintGeneratedClass UI_CoreInfuser_Rewards_Background.UI_CoreInfuser_Rewards_Background_C
// Size: 0x261 (Inherited: 0x230)
struct UUI_CoreInfuser_Rewards_Background_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UUI_CoreInfuser_Rewards_Animator_C* RewardsAnimator; 
	UPROPERTY(BlueprintReadWrite) UUI_CoreInfuser_Reward_Background_C* Wedge_Center; 
	UPROPERTY(BlueprintReadWrite) UUI_CoreInfuser_Reward_Background_C* Wedge_Left; 
	UPROPERTY(BlueprintReadWrite) UUI_CoreInfuser_Reward_Background_C* Wedge_Right; 
	UPROPERTY(BlueprintReadWrite) UUI_CoreInfuser_Rewards_Selector_C* RewardSelector; 
	UPROPERTY(BlueprintReadWrite) bool IsOpen; 

	UFUNCTION(BlueprintCallable) void SetOpen(bool IsOpen);
	UFUNCTION(BlueprintCallable) void SetRewardGiven(int32_t Index);
	UFUNCTION(BlueprintCallable) void SetRewards(TArray<USchematic*> InRewards);
	UFUNCTION(BlueprintCallable) void GetIconWidget(int32_t Index, UUI_CoreInfuser_Reward_Background_C* IconWidget);
	UFUNCTION(BlueprintCallable) void SetHovered(int32_t InIndex, bool InHovered);
	UFUNCTION(BlueprintCallable) void OnRewardHovered_Event(UUI_CoreInfuser_Reward_Icon_C* Reward);
	UFUNCTION(BlueprintCallable) void OnRewardUnhovered_Event(UUI_CoreInfuser_Reward_Icon_C* Reward);
	UFUNCTION(BlueprintCallable) void OnRewardSelectedEvent(USchematic* Reward);
	UFUNCTION(BlueprintCallable) void BindToRewardSelector(UUI_CoreInfuser_Rewards_Selector_C* RewardSelector);
	UFUNCTION(BlueprintCallable) void Construct();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_UI_CoreInfuser_Rewards_Background(int32_t EntryPoint);
};

