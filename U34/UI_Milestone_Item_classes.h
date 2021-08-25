// WidgetBlueprintGeneratedClass UI_Milestone_Item.UI_Milestone_Item_C
// Size: 0x37c (Inherited: 0x230)
struct UUI_Milestone_Item_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* ClaimableAnim; // 0x238(0x08)
	struct UWidgetAnimation* CompletedAnim; // 0x240(0x08)
	struct UWidgetAnimation* ClaimAnim; // 0x248(0x08)
	struct UImage* BGgradient; // 0x250(0x08)
	struct UHorizontalBox* BigStarRewardBar; // 0x258(0x08)
	struct UBlurBackground_C* BlurBackground; // 0x260(0x08)
	struct UCanvasPanel* ClaimPanel; // 0x268(0x08)
	struct UTextBlock* ClaimText; // 0x270(0x08)
	struct UImage* Image; // 0x278(0x08)
	struct UImage* Image_492; // 0x280(0x08)
	struct UBorder* ItemBorder; // 0x288(0x08)
	struct UImage* KPI_CategoryImage; // 0x290(0x08)
	struct UImage* KPI_Image; // 0x298(0x08)
	struct UProgressBar* KPI_Progress; // 0x2a0(0x08)
	struct UTextBlock* KPI_TextProgress; // 0x2a8(0x08)
	struct UTextBlock* KPI_Title; // 0x2b0(0x08)
	struct UTextBlock* PerkPointsReward; // 0x2b8(0x08)
	struct UHorizontalBox* SmallStarRewardBar; // 0x2c0(0x08)
	struct UUI_Milestone_Tier_C* UI_Milestone_Tier; // 0x2c8(0x08)
	struct UMilestoneAsset* Milestone; // 0x2d0(0x08)
	int32_t TierPreview; // 0x2d8(0x04)
	bool ItemClaimable; // 0x2dc(0x01)
	bool ItemHovered; // 0x2dd(0x01)
	bool ButtonDown; // 0x2de(0x01)
	char UnknownData_2DF[0x1]; // 0x2df(0x01)
	struct FMulticastInlineDelegate OnItemClaimableChanged; // 0x2e0(0x10)
	struct FSlateBrush NoImageBrush; // 0x2f0(0x88)
	float AnimClaimProgress; // 0x378(0x04)

	void UpdateRewardStar(int32_t Index); // Function UI_Milestone_Item.UI_Milestone_Item_C.UpdateRewardStar
	void GetIsClaimable(bool ItemClaimable); // Function UI_Milestone_Item.UI_Milestone_Item_C.GetIsClaimable
	void GetIcon(struct UTexture2D* Icon); // Function UI_Milestone_Item.UI_Milestone_Item_C.GetIcon
	void SetCategoryFilter(struct TArray<struct UTexture2D*> Filter); // Function UI_Milestone_Item.UI_Milestone_Item_C.SetCategoryFilter
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UI_Milestone_Item.UI_Milestone_Item_C.OnMouseButtonUp
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UI_Milestone_Item.UI_Milestone_Item_C.OnMouseButtonDown
	void SetHovered(bool Hovered); // Function UI_Milestone_Item.UI_Milestone_Item_C.SetHovered
	void SetProgress(int32_t Tier, float Progress, float CurrentCount, float TargetCount, bool IsClaimable); // Function UI_Milestone_Item.UI_Milestone_Item_C.SetProgress
	void PreConstruct(bool IsDesignTime); // Function UI_Milestone_Item.UI_Milestone_Item_C.PreConstruct
	void Construct(); // Function UI_Milestone_Item.UI_Milestone_Item_C.Construct
	void UpdateItem(); // Function UI_Milestone_Item.UI_Milestone_Item_C.UpdateItem
	void OnCountChanged_Event(struct UMissionStat* MissionStat, float Value); // Function UI_Milestone_Item.UI_Milestone_Item_C.OnCountChanged_Event
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UI_Milestone_Item.UI_Milestone_Item_C.OnMouseEnter
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function UI_Milestone_Item.UI_Milestone_Item_C.OnMouseLeave
	void Claim KPI(); // Function UI_Milestone_Item.UI_Milestone_Item_C.Claim KPI
	void CreateRewardStars(int32_t StarCount); // Function UI_Milestone_Item.UI_Milestone_Item_C.CreateRewardStars
	void SetAnimClaimProgress(float Progress); // Function UI_Milestone_Item.UI_Milestone_Item_C.SetAnimClaimProgress
	void OnClaimAnimFinished(); // Function UI_Milestone_Item.UI_Milestone_Item_C.OnClaimAnimFinished
	void OnCompletedAnimFinished(); // Function UI_Milestone_Item.UI_Milestone_Item_C.OnCompletedAnimFinished
	void OnCompletedAnimStarted(); // Function UI_Milestone_Item.UI_Milestone_Item_C.OnCompletedAnimStarted
	void ExecuteUbergraph_UI_Milestone_Item(int32_t EntryPoint); // Function UI_Milestone_Item.UI_Milestone_Item_C.ExecuteUbergraph_UI_Milestone_Item
	void OnItemClaimableChanged__DelegateSignature(struct UUI_Milestone_Item_C* Milestone Item); // Function UI_Milestone_Item.UI_Milestone_Item_C.OnItemClaimableChanged__DelegateSignature
};

