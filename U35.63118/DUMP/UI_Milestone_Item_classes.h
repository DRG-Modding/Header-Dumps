// WidgetBlueprintGeneratedClass UI_Milestone_Item.UI_Milestone_Item_C
// Size: 0x37c (Inherited: 0x230)
struct UUI_Milestone_Item_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* ClaimableAnim; // 0x238(0x08)
	UWidgetAnimation* CompletedAnim; // 0x240(0x08)
	UWidgetAnimation* ClaimAnim; // 0x248(0x08)
	UImage* BGgradient; // 0x250(0x08)
	UHorizontalBox* BigStarRewardBar; // 0x258(0x08)
	UBlurBackground_C* BlurBackground; // 0x260(0x08)
	UCanvasPanel* ClaimPanel; // 0x268(0x08)
	UTextBlock* ClaimText; // 0x270(0x08)
	UImage* Image; // 0x278(0x08)
	UImage* Image_492; // 0x280(0x08)
	UBorder* ItemBorder; // 0x288(0x08)
	UImage* KPI_CategoryImage; // 0x290(0x08)
	UImage* KPI_Image; // 0x298(0x08)
	UProgressBar* KPI_Progress; // 0x2a0(0x08)
	UTextBlock* KPI_TextProgress; // 0x2a8(0x08)
	UTextBlock* KPI_Title; // 0x2b0(0x08)
	UTextBlock* PerkPointsReward; // 0x2b8(0x08)
	UHorizontalBox* SmallStarRewardBar; // 0x2c0(0x08)
	UUI_Milestone_Tier_C* UI_Milestone_Tier; // 0x2c8(0x08)
	UMilestoneAsset* Milestone; // 0x2d0(0x08)
	int32_t TierPreview; // 0x2d8(0x04)
	bool ItemClaimable; // 0x2dc(0x01)
	bool ItemHovered; // 0x2dd(0x01)
	bool ButtonDown; // 0x2de(0x01)
	FMulticastInlineDelegate OnItemClaimableChanged; // 0x2e0(0x10)
	FSlateBrush NoImageBrush; // 0x2f0(0x88)
	float AnimClaimProgress; // 0x378(0x04)

	void UpdateRewardStar(int32_t Index);
	void GetIsClaimable(bool ItemClaimable);
	void GetIcon(UTexture2D* Icon);
	void SetCategoryFilter(TArray<UTexture2D*> Filter);
	FEventReply OnMouseButtonUp(FGeometry MyGeometry, FPointerEvent MouseEvent);
	FEventReply OnMouseButtonDown(FGeometry MyGeometry, FPointerEvent MouseEvent);
	void SetHovered(bool Hovered);
	void SetProgress(int32_t Tier, float Progress, float CurrentCount, float TargetCount, bool IsClaimable);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void UpdateItem();
	void OnCountChanged_Event(UMissionStat* MissionStat, float Value);
	void OnMouseEnter(FGeometry MyGeometry, FPointerEvent MouseEvent);
	void OnMouseLeave(FPointerEvent MouseEvent);
	void Claim KPI();
	void CreateRewardStars(int32_t StarCount);
	void SetAnimClaimProgress(float Progress);
	void OnClaimAnimFinished();
	void OnCompletedAnimFinished();
	void OnCompletedAnimStarted();
	void ExecuteUbergraph_UI_Milestone_Item(int32_t EntryPoint);
	void OnItemClaimableChanged__DelegateSignature(UUI_Milestone_Item_C* Milestone Item);
};

