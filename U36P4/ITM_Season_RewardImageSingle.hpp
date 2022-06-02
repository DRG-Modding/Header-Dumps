#ifndef UE4SS_SDK_ITM_Season_RewardImageSingle_HPP
#define UE4SS_SDK_ITM_Season_RewardImageSingle_HPP

class UITM_Season_RewardImageSingle_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimRewardMove;
    class UWidgetAnimation* AnimMoveTick;
    class UWidgetAnimation* OnHover;
    class UWidgetAnimation* RewardGained;
    class UWidgetAnimation* ImageReady;
    class UButton* Button_Outer;
    class UImage* I_SkinType;
    class UImage* Image_Glow;
    class UImage* Image_Main;
    class UImage* Image_Shadow;
    class UOverlay* Overlay_MatrixCore;
    class UOverlay* Overlay_Outer;
    class UOverlay* Overlay_Skin;
    class USizeBox* SizeBox_3;
    FVector2D Size;
    class UReward* Reward;
    bool ShowToolTip;
    class UMaterialInstanceDynamic* DynMaterial;
    bool PlayRewardGained;
    FITM_Season_RewardImageSingle_CRewardGainFinished RewardGainFinished;
    void RewardGainFinished();
    FITM_Season_RewardImageSingle_CImageIsReady ImageIsReady;
    void ImageIsReady();
    bool DoHoverAnim;
    bool IsRenderTextureReady;
    class UMaterialInterface* MaterialBase;
    FITM_Season_RewardImageSingle_COnHovered OnHovered;
    void OnHovered();
    FITM_Season_RewardImageSingle_COnUnhovered OnUnhovered;
    void OnUnhovered();
    FITM_Season_RewardImageSingle_COnClicked OnClicked;
    void OnClicked();
    bool ShowClaimedEvent;
    bool ShowGlow;
    class UTextureRenderTarget2D* RenderTex;
    ESeasonVisibilityState NodeState;
    class UITM_SkinIcon_C* SkinWidget;
    bool dimOutline;
    TEnumAsByte<ENUM_MenuColors::Type> BoughtColor;

    void SequenceEvent__ENTRYPOINTITM_Season_RewardImageSingle_1();
    void SequenceEvent__ENTRYPOINTITM_Season_RewardImageSingle_0();
    void SetupMaterial();
    void Set Skin Icon(class UItemSkin* InSkin, class UMaterialInterface* InMaterial, TEnumAsByte<ENUM_SkinWidgetTypes::Type> InBucketIcon);
    void GetPickaxe(class UPlayerCharacterID* characterID, class UItemID*& Output);
    class UWidget* Get_Image_Main_ToolTipWidget();
    void AnimTick();
    void PreConstruct(bool IsDesignTime);
    void SetData(class UReward* Reward, bool ShowToolTip, bool PlayRewardGained, const bool DoHoverAnim, bool ShowClaimedEffects, ESeasonVisibilityState inNodeState, TEnumAsByte<ENUM_MenuColors::Type> BoughtColor);
    void ImageReadyTick();
    void SetDataFromDynMat(class UMaterialInstanceDynamic* DynMat, class UReward* Reward, bool ShowToolTip);
    void OnRewardGainFinished();
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void SetTextureReady(class UTextureRenderTarget2D* OptionalTexture);
    void OnImageReady();
    void AnimHoverFinished();
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void SetDoHover(bool InDoHover);
    void SetVanityIcon(class UVanityItem* Item);
    void ChangeSize(FVector2D Size);
    void SetActiveLook(ESeasonVisibilityState IsActiveLook);
    void SetSkin(class UItemSkin* Item);
    void UpdateWidgetColor();
    void ExecuteUbergraph_ITM_Season_RewardImageSingle(int32 EntryPoint);
    void OnClicked__DelegateSignature();
    void OnUnhovered__DelegateSignature();
    void OnHovered__DelegateSignature();
    void ImageIsReady__DelegateSignature();
    void RewardGainFinished__DelegateSignature();
};

#endif
