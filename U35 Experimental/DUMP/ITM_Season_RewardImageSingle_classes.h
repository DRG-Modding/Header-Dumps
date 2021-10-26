// WidgetBlueprintGeneratedClass ITM_Season_RewardImageSingle.ITM_Season_RewardImageSingle_C
// Size: 0x35a (Inherited: 0x230)
struct UITM_Season_RewardImageSingle_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* AnimRewardMove; // 0x238(0x08)
	UWidgetAnimation* AnimMoveTick; // 0x240(0x08)
	UWidgetAnimation* OnHover; // 0x248(0x08)
	UWidgetAnimation* RewardGained; // 0x250(0x08)
	UWidgetAnimation* ImageReady; // 0x258(0x08)
	UButton* Button_Outer; // 0x260(0x08)
	UImage* I_SkinType; // 0x268(0x08)
	UImage* Image_Glow; // 0x270(0x08)
	UImage* Image_Main; // 0x278(0x08)
	UImage* Image_Shadow; // 0x280(0x08)
	UOverlay* Overlay_MatrixCore; // 0x288(0x08)
	UOverlay* Overlay_Outer; // 0x290(0x08)
	UOverlay* Overlay_Skin; // 0x298(0x08)
	USizeBox* SizeBox_4; // 0x2a0(0x08)
	FVector2D Size; // 0x2a8(0x08)
	UTextureRenderTarget2D* RenderTexture; // 0x2b0(0x08)
	UReward* Reward; // 0x2b8(0x08)
	bool ShowToolTip; // 0x2c0(0x01)
	UMaterialInstanceDynamic* DynMaterial; // 0x2c8(0x08)
	bool PlayRewardGained; // 0x2d0(0x01)
	FMulticastInlineDelegate RewardGainFinished; // 0x2d8(0x10)
	FMulticastInlineDelegate ImageIsReady; // 0x2e8(0x10)
	bool DoHoverAnim; // 0x2f8(0x01)
	bool IsRenderTextureReady; // 0x2f9(0x01)
	UMaterialInterface* MaterialBase; // 0x300(0x08)
	FMulticastInlineDelegate OnHovered; // 0x308(0x10)
	FMulticastInlineDelegate OnUnhovered; // 0x318(0x10)
	FMulticastInlineDelegate OnClicked; // 0x328(0x10)
	bool ShowClaimedEvent; // 0x338(0x01)
	bool ShowGlow; // 0x339(0x01)
	UTextureRenderTarget2D* RenderTex; // 0x340(0x08)
	enum class ESeasonVisibilityState NodeState; // 0x348(0x01)
	UITM_SkinIcon_C* SkinWidget; // 0x350(0x08)
	bool dimOutline; // 0x358(0x01)
	enum class ENUM_MenuColors BoughtColor; // 0x359(0x01)

	void SequenceEvent__ENTRYPOINTITM_Season_RewardImageSingle_2();
	void SequenceEvent__ENTRYPOINTITM_Season_RewardImageSingle_1();
	void CreateMaterial();
	void Set Skin Icon(UItemSkin* InSkin, UMaterialInterface* inMaterial, enum class ENUM_SkinWidgetTypes InBucketIcon);
	void GetPickaxe(UPlayerCharacterID* characterID, UItemID* Output);
	UWidget* Get_Image_Main_ToolTipWidget();
	void AnimTick();
	void PreConstruct(bool IsDesignTime);
	void SetData(UReward* Reward, bool ShowToolTip, bool PlayRewardGained, bool DoHoverAnim, bool ShowClaimedEffects, enum class ESeasonVisibilityState inNodeState, enum class ENUM_MenuColors BoughtColor);
	void ImageReadyTick();
	void SetDataFromDynMat(UMaterialInstanceDynamic* DynMat, UReward* Reward, bool ShowToolTip);
	void OnRewardGainFinished();
	void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void SetRenderTexture(UTextureRenderTarget2D* RenderTexture);
	void OnImageReady();
	void AnimHoverFinished();
	void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void SetDoHover(bool InDoHover);
	void SetVanityIcon(UVanityItem* Item);
	void ChangeSize(FVector2D Size);
	void SetActiveLook(enum class ESeasonVisibilityState IsActiveLook);
	void SetSkin(UItemSkin* Item);
	void UpdateWidgetColor();
	void ExecuteUbergraph_ITM_Season_RewardImageSingle(int32_t EntryPoint);
	void OnClicked__DelegateSignature();
	void OnUnhovered__DelegateSignature();
	void OnHovered__DelegateSignature();
	void ImageIsReady__DelegateSignature();
	void RewardGainFinished__DelegateSignature();
};

