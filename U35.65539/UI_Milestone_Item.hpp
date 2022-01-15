#ifndef UE4SS_SDK_UI_Milestone_Item_HPP
#define UE4SS_SDK_UI_Milestone_Item_HPP

class UUI_Milestone_Item_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* ClaimableAnim;
    UWidgetAnimation* CompletedAnim;
    UWidgetAnimation* ClaimAnim;
    UImage* BGgradient;
    UHorizontalBox* BigStarRewardBar;
    UBlurBackground_C* BlurBackground;
    UCanvasPanel* ClaimPanel;
    UTextBlock* ClaimText;
    UImage* Image;
    UImage* Image_491;
    UBorder* ItemBorder;
    UImage* KPI_CategoryImage;
    UImage* KPI_Image;
    UProgressBar* KPI_Progress;
    UTextBlock* KPI_TextProgress;
    UTextBlock* KPI_Title;
    UTextBlock* PerkPointsReward;
    UHorizontalBox* SmallStarRewardBar;
    UUI_Milestone_Tier_C* UI_Milestone_Tier;
    UMilestoneAsset* Milestone;
    int32 TierPreview;
    bool ItemClaimable;
    bool ItemHovered;
    bool ButtonDown;
    FUI_Milestone_Item_COnItemClaimableChanged OnItemClaimableChanged;
    void OnItemClaimableChanged(UUI_Milestone_Item_C* Milestone Item);
    FSlateBrush NoImageBrush;
    float AnimClaimProgress;

    void UpdateRewardStar(int32 Index, float ThisProgress, float StepSize, UWidget* StarWidget, float CallFunc_Lerp_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_FClamp_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_1, UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
    void GetIsClaimable(bool& ItemClaimable, bool CallFunc_IsClaimable_ReturnValue);
    void GetIcon(UTexture2D*& Icon, UTexture2D* CallFunc_GetCategoryIcon_ReturnValue);
    void SetCategoryFilter(TArray<UTexture2D*>& Filter, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UTexture2D* CallFunc_GetCategoryIcon_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, ESlateVisibility K2Node_Select_Default, UTexture2D* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsCompleted_ReturnValue, bool CallFunc_IsClaimable_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEventFEventReply CallFunc_Unhandled_ReturnValue, FKey CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, FEventReply CallFunc_Handled_ReturnValue);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEventFEventReply CallFunc_Unhandled_ReturnValue, FKey CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void SetHovered(bool Hovered, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool CallFunc_NotEqual_BoolBool_ReturnValue, float K2Node_Select_Default, FLinearColor K2Node_MakeStruct_LinearColor);
    void SetProgress(int32 Tier, float Progress, float CurrentCount, float TargetCount, bool IsClaimable, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, const FText CallFunc_GetTitleForTier_ReturnValue, ESlateVisibility K2Node_Select_Default, int32 CallFunc_Round_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_Round_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void UpdateItem();
    void OnCountChanged_Event(UMissionStat* MissionStat, float Value);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void Claim KPI();
    void CreateRewardStars(int32 StarCount);
    void SetAnimClaimProgress(float Progress);
    void OnClaimAnimFinished();
    void OnCompletedAnimFinished();
    void OnCompletedAnimStarted();
    void ExecuteUbergraph_UI_Milestone_Item(int32 EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor, int32 CallFunc_GetClaimedProgress_Tier, float CallFunc_GetClaimedProgress_Progress, float CallFunc_GetClaimedProgress_CurrentCount, float CallFunc_GetClaimedProgress_TargetCount, bool CallFunc_GetClaimedProgress_ReturnValue, int32 CallFunc_GetNextPerkPointsReward_ReturnValue, bool CallFunc_IsClaimable_ReturnValue, UMissionStat* K2Node_CustomEvent_MissionStat, float K2Node_CustomEvent_Value, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FLinearColor CallFunc_MenuColors_OutputColor_2, FGeometry K2Node_Event_MyGeometry, const FPointerEvent K2Node_Event_MouseEvent_1, const FPointerEvent K2Node_Event_MouseEvent, int32 CallFunc_GetNextPerkPointsReward_ReturnValue_1, FText CallFunc_Conv_IntToText_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_3, UTexture2D* CallFunc_GetCategoryIcon_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsClaimable_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsCompleted_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsClaimable_ReturnValue_2, bool CallFunc_IsCompleted_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, ESlateVisibility K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue_1, ESlateVisibility K2Node_Select_Default_1, FLinearColor CallFunc_MenuColors_OutputColor_4, FSlateColor K2Node_MakeStruct_SlateColor_1, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Percent_FloatFloat_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, int32 K2Node_CustomEvent_StarCount, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable_1, UImage* CallFunc_CreateImageSized_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, float K2Node_CustomEvent_progress, UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_ClaimNextTier_ReturnValue, UImage* CallFunc_CreateImageSized_ReturnValue_1, UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_1, StatCountChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_GetIsClaimable_ItemClaimable, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, int32 CallFunc_GetNextPerkPointsReward_ReturnValue_2, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, UAudioComponent* CallFunc_PlayPitched_ReturnValue, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, const FText CallFunc_GetTitle_ReturnValue, FText CallFunc_TextToUpper_ReturnValue);
    void OnItemClaimableChanged__DelegateSignature(UUI_Milestone_Item_C* Milestone Item);
}

#endif
