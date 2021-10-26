// WidgetBlueprintGeneratedClass TOOLTIP_Season_Reward.TOOLTIP_Season_Reward_C
// Size: 0x2a8 (Inherited: 0x230)
struct UTOOLTIP_Season_Reward_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Intro; // 0x238(0x08)
	UNamedSlot* BelowTooltipSlot; // 0x240(0x08)
	UNamedSlot* BottomSlot; // 0x248(0x08)
	UHorizontalBox* HorizontalBox_Cost; // 0x250(0x08)
	UImage* Image_214; // 0x258(0x08)
	UImage* Image_Background; // 0x260(0x08)
	UITM_Season_CharacterIcon_C* ITM_Season_CharacterIcon; // 0x268(0x08)
	UITM_Season_RewardImageSingle_C* ITM_Season_RewardImageSingle; // 0x270(0x08)
	UOverlay* Overlay_Skin; // 0x278(0x08)
	UTextBlock* Text_Cost; // 0x280(0x08)
	UTextBlock* Text_Count; // 0x288(0x08)
	UTextBlock* TextBlock_Category; // 0x290(0x08)
	UTextBlock* TextBlock_Title; // 0x298(0x08)
	UReward* Reward; // 0x2a0(0x08)

	void SetInfo(FText InTitle, FText InCategory, UPlayerCharacterID* InCharacterID, bool inShowIcon);
	void SetData(UMaterialInstanceDynamic* DynMat, UReward* Reward, bool ShowCost, int32_t Cost);
	void SetCount(int32_t count);
	void SetDataFromReward(UReward* Reward, bool ShowCost, int32_t Cost);
	void setup(bool ShowCost, int32_t Cost);
	void ExecuteUbergraph_TOOLTIP_Season_Reward(int32_t EntryPoint);
};

