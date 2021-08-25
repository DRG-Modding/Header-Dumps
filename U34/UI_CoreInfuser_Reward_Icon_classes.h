// WidgetBlueprintGeneratedClass UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C
// Size: 0x2e8 (Inherited: 0x230)
struct UUI_CoreInfuser_Reward_Icon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* AnimFade; // 0x238(0x08)
	struct UWidgetAnimation* AnimHover; // 0x240(0x08)
	struct UButton* IconButton; // 0x248(0x08)
	struct USizeBox* IconSizer; // 0x250(0x08)
	struct UITM_CharacterIcon_C* ITM_CharacterIcon; // 0x258(0x08)
	struct UImage* RewardIcon_Back; // 0x260(0x08)
	struct UImage* RewardIcon_Front; // 0x268(0x08)
	struct UProgressBar* SelectProgressBar; // 0x270(0x08)
	struct UVerticalBox* UseBox; // 0x278(0x08)
	struct UUI_AdvancedLabel_C* UseInstructionsLabel; // 0x280(0x08)
	struct FMulticastInlineDelegate OnHovered; // 0x288(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x298(0x10)
	struct FMulticastInlineDelegate OnRewardSelected; // 0x2a8(0x10)
	bool IsIconFaded; // 0x2b8(0x01)
	bool IsIconHovered; // 0x2b9(0x01)
	char UnknownData_2BA[0x2]; // 0x2ba(0x02)
	int32_t IconIndex; // 0x2bc(0x04)
	struct FTimerHandle ProgressTimer; // 0x2c0(0x08)
	bool IsRewardSelected; // 0x2c8(0x01)
	char UnknownData_2C9[0x7]; // 0x2c9(0x07)
	struct USchematic* SchematicReward; // 0x2d0(0x08)
	struct AEventRewardDispenser* RewardDispenser; // 0x2d8(0x08)
	struct UAudioComponent* ActivateAudio; // 0x2e0(0x08)

	void ToggleActivateAudio(bool AudioActive); // Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.ToggleActivateAudio
	void GetReward(struct USchematic* SchematicReward); // Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.GetReward
	void SetSchematicReward(struct USchematic* InSchematic); // Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.SetSchematicReward
	void GetIsRewardSelected(bool IsSelected); // Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.GetIsRewardSelected
	void TrySelectReward(bool Reward Given); // Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.TrySelectReward
	void GetUseProgress(float Progress); // Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.GetUseProgress
	void SetUseProgress(float InProgress, bool Finished); // Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.SetUseProgress
	bool IsInteractable(); // Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.IsInteractable
	void SetFaded(bool InFade); // Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.SetFaded
	void SetHover(bool InHovering); // Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.SetHover
	void BndEvt__IconButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.BndEvt__IconButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	void BndEvt__IconButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature(); // Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.BndEvt__IconButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	void BndEvt__IconButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature(); // Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.BndEvt__IconButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
	void OnProgressTick(); // Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.OnProgressTick
	void Construct(); // Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.Construct
	void BndEvt__IconButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.BndEvt__IconButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	void SetDispenser(struct AEventRewardDispenser* InDispenser); // Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.SetDispenser
	void ExecuteUbergraph_UI_CoreInfuser_Reward_Icon(int32_t EntryPoint); // Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.ExecuteUbergraph_UI_CoreInfuser_Reward_Icon
	void OnRewardSelected__DelegateSignature(struct UUI_CoreInfuser_Reward_Icon_C* IconWidget); // Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.OnRewardSelected__DelegateSignature
	void OnUnhovered__DelegateSignature(struct UUI_CoreInfuser_Reward_Icon_C* IconWidget); // Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.OnUnhovered__DelegateSignature
	void OnHovered__DelegateSignature(struct UUI_CoreInfuser_Reward_Icon_C* IconWidget); // Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.OnHovered__DelegateSignature
};

