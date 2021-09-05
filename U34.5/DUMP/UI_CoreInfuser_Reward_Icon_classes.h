// WidgetBlueprintGeneratedClass UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C
// Size: 0x2e8 (Inherited: 0x230)
struct UUI_CoreInfuser_Reward_Icon_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* AnimFade; // 0x238(0x08)
	UWidgetAnimation* AnimHover; // 0x240(0x08)
	UButton* IconButton; // 0x248(0x08)
	USizeBox* IconSizer; // 0x250(0x08)
	UITM_CharacterIcon_C* ITM_CharacterIcon; // 0x258(0x08)
	UImage* RewardIcon_Back; // 0x260(0x08)
	UImage* RewardIcon_Front; // 0x268(0x08)
	UProgressBar* SelectProgressBar; // 0x270(0x08)
	UVerticalBox* UseBox; // 0x278(0x08)
	UUI_AdvancedLabel_C* UseInstructionsLabel; // 0x280(0x08)
	FMulticastInlineDelegate OnHovered; // 0x288(0x10)
	FMulticastInlineDelegate OnUnhovered; // 0x298(0x10)
	FMulticastInlineDelegate OnRewardSelected; // 0x2a8(0x10)
	bool IsIconFaded; // 0x2b8(0x01)
	bool IsIconHovered; // 0x2b9(0x01)
	int32_t IconIndex; // 0x2bc(0x04)
	FTimerHandle ProgressTimer; // 0x2c0(0x08)
	bool IsRewardSelected; // 0x2c8(0x01)
	USchematic* SchematicReward; // 0x2d0(0x08)
	AEventRewardDispenser* RewardDispenser; // 0x2d8(0x08)
	UAudioComponent* ActivateAudio; // 0x2e0(0x08)

	void ToggleActivateAudio(bool AudioActive);
	void GetReward(USchematic* SchematicReward);
	void SetSchematicReward(USchematic* InSchematic);
	void GetIsRewardSelected(bool IsSelected);
	void TrySelectReward(bool Reward Given);
	void GetUseProgress(float Progress);
	void SetUseProgress(float InProgress, bool Finished);
	bool IsInteractable();
	void SetFaded(bool InFade);
	void SetHover(bool InHovering);
	void BndEvt__IconButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__IconButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__IconButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
	void OnProgressTick();
	void Construct();
	void BndEvt__IconButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void SetDispenser(AEventRewardDispenser* InDispenser);
	void ExecuteUbergraph_UI_CoreInfuser_Reward_Icon(int32_t EntryPoint);
	void OnRewardSelected__DelegateSignature(UUI_CoreInfuser_Reward_Icon_C* IconWidget);
	void OnUnhovered__DelegateSignature(UUI_CoreInfuser_Reward_Icon_C* IconWidget);
	void OnHovered__DelegateSignature(UUI_CoreInfuser_Reward_Icon_C* IconWidget);
};

