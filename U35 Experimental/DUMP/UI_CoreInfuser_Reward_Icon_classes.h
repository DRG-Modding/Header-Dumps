// WidgetBlueprintGeneratedClass UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C
// Size: 0x2e8 (Inherited: 0x230)
struct UUI_CoreInfuser_Reward_Icon_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UWidgetAnimation* AnimFade; 
	UPROPERTY(BlueprintReadWrite) UWidgetAnimation* AnimHover; 
	UPROPERTY(BlueprintReadWrite) UButton* IconButton; 
	UPROPERTY(BlueprintReadWrite) USizeBox* IconSizer; 
	UPROPERTY(BlueprintReadWrite) UITM_CharacterIcon_C* ITM_CharacterIcon; 
	UPROPERTY(BlueprintReadWrite) UImage* RewardIcon_Back; 
	UPROPERTY(BlueprintReadWrite) UImage* RewardIcon_Front; 
	UPROPERTY(BlueprintReadWrite) UProgressBar* SelectProgressBar; 
	UPROPERTY(BlueprintReadWrite) UVerticalBox* UseBox; 
	UPROPERTY(BlueprintReadWrite) UUI_AdvancedLabel_C* UseInstructionsLabel; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate OnHovered; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate OnUnhovered; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate OnRewardSelected; 
	UPROPERTY(BlueprintReadWrite) bool IsIconFaded; 
	UPROPERTY(BlueprintReadWrite) bool IsIconHovered; 
	UPROPERTY(BlueprintReadWrite) int32_t IconIndex; 
	UPROPERTY(BlueprintReadWrite) FTimerHandle ProgressTimer; 
	UPROPERTY(BlueprintReadWrite) bool IsRewardSelected; 
	UPROPERTY(BlueprintReadWrite) USchematic* SchematicReward; 
	UPROPERTY(BlueprintReadWrite) AEventRewardDispenser* RewardDispenser; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* ActivateAudio; 

	UFUNCTION(BlueprintCallable) void ToggleActivateAudio(bool AudioActive);
	UFUNCTION(BlueprintCallable) void GetReward(USchematic* SchematicReward);
	UFUNCTION(BlueprintCallable) void SetSchematicReward(USchematic* InSchematic);
	UFUNCTION(BlueprintCallable) void GetIsRewardSelected(bool IsSelected);
	UFUNCTION(BlueprintCallable) void TrySelectReward(bool Reward Given);
	UFUNCTION(BlueprintCallable) void GetUseProgress(float Progress);
	UFUNCTION(BlueprintCallable) void SetUseProgress(float InProgress, bool Finished);
	UFUNCTION(BlueprintCallable) bool IsInteractable();
	UFUNCTION(BlueprintCallable) void SetFaded(bool InFade);
	UFUNCTION(BlueprintCallable) void SetHover(bool InHovering);
	UFUNCTION(BlueprintCallable) void BndEvt__IconButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BndEvt__IconButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BndEvt__IconButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void OnProgressTick();
	UFUNCTION(BlueprintCallable) void Construct();
	UFUNCTION(BlueprintCallable) void BndEvt__IconButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void SetDispenser(AEventRewardDispenser* InDispenser);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_UI_CoreInfuser_Reward_Icon(int32_t EntryPoint);
	UFUNCTION(BlueprintCallable) void OnRewardSelected__DelegateSignature(UUI_CoreInfuser_Reward_Icon_C* IconWidget);
	UFUNCTION(BlueprintCallable) void OnUnhovered__DelegateSignature(UUI_CoreInfuser_Reward_Icon_C* IconWidget);
	UFUNCTION(BlueprintCallable) void OnHovered__DelegateSignature(UUI_CoreInfuser_Reward_Icon_C* IconWidget);
};

