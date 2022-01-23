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
    class UTextureRenderTarget2D* RenderTexture;
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
    void CreateMaterial(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    void Set Skin Icon(class UItemSkin* InSkin, class UMaterialInterface* inMaterial, TEnumAsByte<ENUM_SkinWidgetTypes::Type> InBucketIcon, bool CallFunc_IsValid_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Multiply_FloatFloat_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UITM_SkinIcon_C* CallFunc_Create_ReturnValue, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue);
    void GetPickaxe(class UPlayerCharacterID* characterID, class UItemID*& Output, class UGameData* CallFunc_GetFSDGameData_ReturnValue, class UInventoryList* CallFunc_GetInventoryList_ReturnValue, const TArray<class UItemID*>& CallFunc_GetItemList_ReturnValue, class UItemID* CallFunc_Array_Get_Item);
    class UWidget* Get_Image_Main_ToolTipWidget(class UTOOLTIP_Season_Reward_C* ToolTip, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_GetOrCreateSingletonWidget_WidgetCreated, class UTOOLTIP_Season_Reward_C* CallFunc_GetOrCreateSingletonWidget_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void AnimTick();
    void PreConstruct(bool IsDesignTime);
    void SetData(class UReward* Reward, bool ShowToolTip, bool PlayRewardGained, const bool DoHoverAnim, bool ShowClaimedEffects, ESeasonVisibilityState inNodeState, TEnumAsByte<ENUM_MenuColors::Type> BoughtColor);
    void ImageReadyTick();
    void SetDataFromDynMat(class UMaterialInstanceDynamic* DynMat, class UReward* Reward, bool ShowToolTip);
    void OnRewardGainFinished();
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void SetRenderTexture(class UTextureRenderTarget2D* RenderTexture);
    void OnImageReady();
    void AnimHoverFinished();
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void SetDoHover(bool InDoHover);
    void SetVanityIcon(class UVanityItem* Item);
    void ChangeSize(FVector2D Size);
    void SetActiveLook(ESeasonVisibilityState IsActiveLook);
    void SetSkin(class UItemSkin* Item);
    void UpdateWidgetColor();
    void ExecuteUbergraph_ITM_Season_RewardImageSingle(int32 EntryPoint, FLinearColor Temp_struct_Variable, FLinearColor Temp_struct_Variable_1, ESeasonVisibilityState Temp_byte_Variable, FLinearColor Temp_struct_Variable_2, FLinearColor Temp_struct_Variable_3, bool Temp_bool_Variable, FExecuteUbergraph_ITM_Season_RewardImageSingleK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Multiply_FloatFloat_ReturnValue, FExecuteUbergraph_ITM_Season_RewardImageSingleK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, FVector2D CallFunc_MakeVector2D_ReturnValue, FMargin K2Node_MakeStruct_Margin, FLinearColor Temp_struct_Variable_4, ESeasonVisibilityState Temp_byte_Variable_1, FLinearColor Temp_struct_Variable_5, FLinearColor Temp_struct_Variable_6, class UITM_MatrixCore_C* CallFunc_Create_ReturnValue, class UVanityReward* K2Node_DynamicCast_AsVanity_Reward, bool K2Node_DynamicCast_bSuccess, FLinearColor Temp_struct_Variable_7, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetRealTimeSeconds_ReturnValue, ESeasonVisibilityState Temp_byte_Variable_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_Sin_ReturnValue, float CallFunc_Sin_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue_6, float CallFunc_Multiply_FloatFloat_ReturnValue_7, FVector CallFunc_MakeVector_ReturnValue, float CallFunc_Sin_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_8, float CallFunc_Multiply_FloatFloat_ReturnValue_9, float CallFunc_Sin_ReturnValue_3, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_10, FRotator CallFunc_MakeRotator_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue_1, FTransform CallFunc_MakeTransform_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UPickaxePartReward* K2Node_DynamicCast_AsPickaxe_Part_Reward, bool K2Node_DynamicCast_bSuccess_1, class USkinUnlock* K2Node_DynamicCast_AsSkin_Unlock, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, EPickaxePartLocation CallFunc_GetPrefferedLocation_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, FExecuteUbergraph_ITM_Season_RewardImageSingleK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, bool K2Node_Event_IsDesignTime, class UReward* K2Node_CustomEvent_Reward_1, bool K2Node_CustomEvent_ShowTooltip_1, bool K2Node_CustomEvent_PlayRewardGained, const bool K2Node_CustomEvent_DoHoverAnim, bool K2Node_CustomEvent_ShowClaimedEffects, ESeasonVisibilityState K2Node_CustomEvent_inNodeState, TEnumAsByte<ENUM_MenuColors::Type> K2Node_CustomEvent_BoughtColor, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UIconGenerationManager* CallFunc_GetIconGenerationManager_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, float CallFunc_GetEndTime_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, float CallFunc_GetAnimationCurrentTime_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, FLinearColor Temp_struct_Variable_8, class UMaterialInstanceDynamic* K2Node_CustomEvent_DynMat, class UReward* K2Node_CustomEvent_Reward, bool K2Node_CustomEvent_ShowTooltip, FLinearColor Temp_struct_Variable_9, class UVanityReward* K2Node_DynamicCast_AsVanity_Reward_1, bool K2Node_DynamicCast_bSuccess_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UTextureRenderTarget2D* K2Node_CustomEvent_RenderTexture, ESeasonVisibilityState Temp_byte_Variable_3, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, class UIconGenerationManager* CallFunc_GetIconGenerationManager_ReturnValue_1, class UResourceReward* K2Node_DynamicCast_AsResource_Reward, bool K2Node_DynamicCast_bSuccess_4, float Temp_float_Variable, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_2, class USeasonTokenReward* K2Node_DynamicCast_AsSeason_Token_Reward, bool K2Node_DynamicCast_bSuccess_5, class UPickaxePartReward* K2Node_DynamicCast_AsPickaxe_Part_Reward_1, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_Greater_IntInt_ReturnValue, EPickaxePartLocation CallFunc_GetPrefferedLocation_ReturnValue_1, class UPickaxeMaterialPart* K2Node_DynamicCast_AsPickaxe_Material_Part, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UTextureRenderTarget2D* CallFunc_GeneratePickaxePartIcon_Async_icon, class UMaterialInterface* K2Node_DynamicCast_AsMaterial_Interface, bool K2Node_DynamicCast_bSuccess_8, bool CallFunc_IsValid_ReturnValue_6, class USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UTextureRenderTarget2D* CallFunc_GenerateSkinRewardIcon_ReturnValue, class USchematicReward* K2Node_DynamicCast_AsSchematic_Reward, bool K2Node_DynamicCast_bSuccess_9, bool CallFunc_IsValid_ReturnValue_7, class USkinUnlock* K2Node_DynamicCast_AsSkin_Unlock_1, bool K2Node_DynamicCast_bSuccess_10, bool CallFunc_IsHovered_ReturnValue, float Temp_float_Variable_1, bool K2Node_CustomEvent_InDoHover, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float Temp_float_Variable_2, ESeasonVisibilityState Temp_byte_Variable_4, class USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_2, class UTextureRenderTarget2D* CallFunc_GeneratePickaxeRewardIcon_ReturnValue, class UIconGenerationManager* CallFunc_GetIconGenerationManager_ReturnValue_2, float Temp_float_Variable_3, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_3, class UPickaxeSetReward* K2Node_DynamicCast_AsPickaxe_Set_Reward, bool K2Node_DynamicCast_bSuccess_11, float Temp_float_Variable_4, FPickaxeSet K2Node_MakeStruct_PickaxeSet, class UVanityCollectionReward* K2Node_DynamicCast_AsVanity_Collection_Reward, bool K2Node_DynamicCast_bSuccess_12, class UTextureRenderTarget2D* CallFunc_GeneratePickaxeSetIcon_Async_icon, class UVanityItem* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_8, class UVictoryPoseReward* K2Node_DynamicCast_AsVictory_Pose_Reward, bool K2Node_DynamicCast_bSuccess_13, float Temp_float_Variable_5, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue, ESeasonVisibilityState Temp_byte_Variable_5, FLinearColor Temp_struct_Variable_10, class UVanityItem* K2Node_CustomEvent_Item_1, bool CallFunc_IsValid_ReturnValue_9, class UArmorMaterialVanityItem* K2Node_DynamicCast_AsArmor_Material_Vanity_Item, bool K2Node_DynamicCast_bSuccess_14, FLinearColor Temp_struct_Variable_11, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_1, class UMaterialInterface* K2Node_DynamicCast_AsMaterial_Interface_1, bool K2Node_DynamicCast_bSuccess_15, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_4, class UTextureRenderTarget2D* CallFunc_GenerateVanityIcon_Async_icon, bool CallFunc_IsValid_ReturnValue_10, class USkinUnlock* K2Node_DynamicCast_AsSkin_Unlock_2, bool K2Node_DynamicCast_bSuccess_16, class UPickaxePartReward* K2Node_DynamicCast_AsPickaxe_Part_Reward_2, bool K2Node_DynamicCast_bSuccess_17, EPickaxePartLocation CallFunc_GetPrefferedLocation_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UVanityReward* K2Node_DynamicCast_AsVanity_Reward_2, bool K2Node_DynamicCast_bSuccess_18, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, EVanitySlot CallFunc_GetVanitySlot_ReturnValue, FLinearColor Temp_struct_Variable_12, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, ESeasonVisibilityState Temp_byte_Variable_6, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, FLinearColor CallFunc_MenuColors_OutputColor, FVector2D K2Node_CustomEvent_Size, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_3, class UIconGenerationManager* CallFunc_GetIconGenerationManager_ReturnValue_3, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_5, ESeasonVisibilityState K2Node_CustomEvent_IsActiveLook, class USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, class UTextureRenderTarget2D* CallFunc_GenerateVanityRewardIcon_ReturnValue, bool CallFunc_IsValid_ReturnValue_11, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, FVector2D Temp_struct_Variable_13, class UItemSkin* K2Node_CustomEvent_Item, FVector2D Temp_struct_Variable_14, class UTextureRenderTarget2D* CallFunc_GenerateWeaponIcon_Async_icon, bool CallFunc_IsValid_ReturnValue_12, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_bool_Variable_1, bool CallFunc_IsValid_ReturnValue_13, FVector2D K2Node_Select_Default, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, bool Temp_bool_Variable_2, class UTexture2D* K2Node_Select_Default_1, bool CallFunc_IsValid_ReturnValue_14, class UTexture2D* Temp_object_Variable_2, FLinearColor K2Node_Select_Default_2, float K2Node_Select_Default_3, float K2Node_Select_Default_4, FLinearColor K2Node_Select_Default_5, FLinearColor K2Node_Select_Default_6, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor K2Node_Select_Default_7, FLinearColor CallFunc_MenuColors_OutputColor_2, FLinearColor K2Node_Select_Default_8, class UTexture2D* Temp_object_Variable_3, class UTexture2D* K2Node_Select_Default_9);
    void OnClicked__DelegateSignature();
    void OnUnhovered__DelegateSignature();
    void OnHovered__DelegateSignature();
    void ImageIsReady__DelegateSignature();
    void RewardGainFinished__DelegateSignature();
};

#endif
