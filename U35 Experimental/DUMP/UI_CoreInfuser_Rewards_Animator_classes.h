// WidgetBlueprintGeneratedClass UI_CoreInfuser_Rewards_Animator.UI_CoreInfuser_Rewards_Animator_C
// Size: 0x270 (Inherited: 0x230)
struct UUI_CoreInfuser_Rewards_Animator_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) UWidgetAnimation* AnimOpen; 
	UPROPERTY(BlueprintReadWrite) UNamedSlot* CenterSlot; 
	UPROPERTY(BlueprintReadWrite) UNamedSlot* LeftSlot; 
	UPROPERTY(BlueprintReadWrite) UNamedSlot* RewardSlot; 
	UPROPERTY(BlueprintReadWrite) UNamedSlot* RightSlot; 
	UPROPERTY(BlueprintReadWrite) bool IsOpen; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate OnOpenChanged; 

	UFUNCTION(BlueprintCallable) void ShowAsReward(bool IsReward);
	UFUNCTION(BlueprintCallable) void GetIsOpen(bool IsOpen);
	UFUNCTION(BlueprintCallable) void SetOpen(bool InIsOpen);
	UFUNCTION(BlueprintCallable) void OnOpenChanged__DelegateSignature(bool Open);
};

