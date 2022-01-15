#ifndef UE4SS_SDK_ITM_TreeOfVanity_Node_HPP
#define UE4SS_SDK_ITM_TreeOfVanity_Node_HPP

class UITM_TreeOfVanity_Node_C : UTreeOfVanityItemWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* BoughtBigAnim;
    UWidgetAnimation* BoughtAnim;
    UWidgetAnimation* GlowAnim;
    UWidgetAnimation* NodeUnlocked;
    UButton* Button_Outer;
    UImage* Image_Empty_BG;
    UImage* Image_Empty_Center;
    UImage* Image_Glow;
    UImage* Image_Glow_1;
    UImage* Image_IsPlaceHolder;
    UImage* Image_LockedShade;
    UImage* Image_NormalCheckmark;
    UImage* Image_TypeOutline;
    UITM_Season_RewardImageSingle_C* ITM_Season_RewardImageSingle;
    UOverlay* Overlay_Empty;
    UOverlay* Overlay_Glow;
    UScaleBox* ScaleBox_Glow;
    UTextBlock* TextBlock_Details;
    FITM_TreeOfVanity_Node_CNodeClicked NodeClicked;
    void NodeClicked(UITM_TreeOfVanity_Node_C* Node);
    FVector2D NormalNodeSize;
    FVector2D PrimaryNodeSize;
    FITM_TreeOfVanity_Node_COnHover OnHover;
    void OnHover(UITM_TreeOfVanity_Node_C* Node);
    FITM_TreeOfVanity_Node_COnUnhover OnUnhover;
    void OnUnhover(UITM_TreeOfVanity_Node_C* Node);
    bool IsEditing;
    bool IsPlaceholder;
    FText Title;
    UPlayerCharacterID* OptionalCharacterID;
    ESeasonVisibilityState NodeState;
    float HoldTime;
    bool IsHolding;
    float TotalHoldDuration;
    UTooltip_TreeOfVanityReward_C* CurrTooltip;
    UAudioComponent* HoldSound;

    void UpdateBoughtLook(FLinearColor Temp_struct_Variable, ESeasonVisibilityState Temp_byte_Variable, FLinearColor Temp_struct_Variable_1, FLinearColor Temp_struct_Variable_2, bool Temp_bool_Variable, FVector2D Temp_struct_Variable_3, FVector2D Temp_struct_Variable_4, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FLinearColor Temp_struct_Variable_5, FLinearColor CallFunc_MenuColors_OutputColor, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FLinearColor K2Node_Select_Default, ESeasonVisibilityState Temp_byte_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, FLinearColor K2Node_Select_Default_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, FVector2D K2Node_Select_Default_2, UUserWidget* CallFunc_Array_Get_Item, UItm_TreeOfVanity_NodeConnection_C* K2Node_DynamicCast_AsItm_Tree_Of_Vanity_Node_Connection, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void SetInfo(FText Title, UPlayerCharacterID* OptionalCharacterID, int32 Seed, FRandomStream CallFunc_MakeRandomStream_ReturnValue, float CallFunc_RandomFloatFromStream_ReturnValue, float CallFunc_RandomFloatFromStream_ReturnValue_1, float CallFunc_RandomFloatFromStream_ReturnValue_2, FLinearColor K2Node_MakeStruct_LinearColor, bool CallFunc_IsValid_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor, FString CallFunc_Conv_GuidToString_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_GetCharacterAsNumber_ReturnValue, int32 CallFunc_GetCharacterAsNumber_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetCharacterAsNumber_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Len_ReturnValue, int32 CallFunc_Min_ReturnValue, FString CallFunc_GetSubstring_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue);
    void AdjacentNodeBought(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UUserWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, UItm_TreeOfVanity_NodeConnection_C* K2Node_DynamicCast_AsItm_Tree_Of_Vanity_Node_Connection, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsNodeUnlocked_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void Node Bought(bool Temp_bool_Variable, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, APawn* CallFunc_K2_GetPawn_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, UWidgetAnimation* K2Node_Select_Default, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    UWidget* Get_ToolTipWidget(UTooltip_TreeOfVanityReward_C* ToolTip, UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_GetOrCreateSingletonWidget_WidgetCreated, UTOOLTIP_Season_BlankNode_C* CallFunc_GetOrCreateSingletonWidget_ReturnValue, UWindowManager* CallFunc_GetWindowManager_ReturnValue_1, bool CallFunc_GetOrCreateSingletonWidget_WidgetCreated_1, UTooltip_TreeOfVanityReward_C* CallFunc_GetOrCreateSingletonWidget_ReturnValue_1, UWindowManager* CallFunc_GetWindowManager_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void OnDataUpdated();
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void SetIsEditing();
    void SetSelectedEditor(bool IsSelected);
    void SetGlow(bool ShouldGlow);
    void ShowDetailsText(bool InShow);
    void SetUnknown();
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_ITM_TreeOfVanity_Node(int32 EntryPoint, USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool K2Node_Event_IsDesignTime, UVanityReward* K2Node_DynamicCast_AsVanity_Reward, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_2, const FText CallFunc_GetCraftableName_ReturnValue, USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, int32 CallFunc_GetNumberOfTokens_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, ESeasonVisibilityState Temp_byte_Variable, bool CallFunc_IsNodeBought_ReturnValue, bool CallFunc_IsNodeUnlocked_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool K2Node_CustomEvent_IsSelected, FVector2D K2Node_Select_Default, bool K2Node_CustomEvent_ShouldGlow, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1, ESeasonVisibilityState Temp_byte_Variable_1, float CallFunc_RandomFloatInRange_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_CustomEvent_InShow, bool CallFunc_SelectVisibility_IsVisible_2, bool CallFunc_SelectVisibility_VisibilityChanged_2, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_2, USkinUnlock* K2Node_DynamicCast_AsSkin_Unlock, bool K2Node_DynamicCast_bSuccess_1, UVictoryPoseReward* K2Node_DynamicCast_AsVictory_Pose_Reward, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_SelectVisibility_IsVisible_3, bool CallFunc_SelectVisibility_VisibilityChanged_3, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_3, bool CallFunc_NotEqual_ObjectObject_ReturnValue, ESeasonVisibilityState Temp_byte_Variable_2, FMargin K2Node_MakeStruct_Margin, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, FMargin K2Node_MakeStruct_Margin_1, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1, bool Temp_bool_Variable_2, ESeasonVisibilityState K2Node_Select_Default_1, UResourceReward* K2Node_DynamicCast_AsResource_Reward, bool K2Node_DynamicCast_bSuccess_3, ESeasonVisibilityState K2Node_Select_Default_2, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsNodeBought_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, UAudioComponent* CallFunc_SpawnSound2D_ReturnValue);
    void OnUnhover__DelegateSignature(UITM_TreeOfVanity_Node_C* Node);
    void OnHover__DelegateSignature(UITM_TreeOfVanity_Node_C* Node);
    void NodeClicked__DelegateSignature(UITM_TreeOfVanity_Node_C* Node);
}

#endif
