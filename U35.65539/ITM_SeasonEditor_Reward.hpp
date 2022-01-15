#ifndef UE4SS_SDK_ITM_SeasonEditor_Reward_HPP
#define UE4SS_SDK_ITM_SeasonEditor_Reward_HPP

class UITM_SeasonEditor_Reward_C : USeasonEditorRewardWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UButton* Button_Outer;
    UImage* Image_Selected;
    UTextBlock* Text_Reward;
    UTextBlock* Text_Type;
    FITM_SeasonEditor_Reward_CRewardClicked RewardClicked;
    void RewardClicked(UITM_SeasonEditor_Reward_C* W_Reward);
    FITM_SeasonEditor_Reward_CRightMouseClicked RightMouseClicked;
    void RightMouseClicked(UITM_SeasonEditor_Reward_C* W_Reward);
    FLinearColor Color;

    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEventbool CallFunc_IsBackMenuMouse_ReturnValue, FEventReply CallFunc_Unhandled_ReturnValue, FEventReply CallFunc_Handled_ReturnValue);
    void SetData(UReward* Reward);
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void Refresh();
    void SetSelected(bool IsSelected);
    void SetTypeText(FText InText);
    void ExecuteUbergraph_ITM_SeasonEditor_Reward(int32 EntryPoint, ESchematicType Temp_byte_Variable, FText Temp_text_Variable, FText Temp_text_Variable_1, FText Temp_text_Variable_2, FText Temp_text_Variable_3, FLinearColor K2Node_MakeStruct_LinearColor, FLinearColor K2Node_MakeStruct_LinearColor_1, UReward* K2Node_CustomEvent_Reward, USeasonTokenReward* K2Node_DynamicCast_AsSeason_Token_Reward, bool K2Node_DynamicCast_bSuccess, UVanityReward* K2Node_DynamicCast_AsVanity_Reward, bool K2Node_DynamicCast_bSuccess_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, bool CallFunc_IsValid_ReturnValue, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, EVanitySlot CallFunc_GetVanitySlot_ReturnValue, FText CallFunc_GetVanitySlotTitle_OutTitle, const FText CallFunc_GetCraftableName_ReturnValue, bool K2Node_CustomEvent_IsSelected, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_IsValid_ReturnValue_1, TSubclassOf<UReward> CallFunc_GetObjectClass_ReturnValue, FString CallFunc_GetClassDisplayName_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, UPickaxeSetReward* K2Node_DynamicCast_AsPickaxe_Set_Reward, bool K2Node_DynamicCast_bSuccess_2, FText K2Node_CustomEvent_InText, USkinUnlock* K2Node_DynamicCast_AsSkin_Unlock, bool K2Node_DynamicCast_bSuccess_3, UVictoryPoseReward* K2Node_DynamicCast_AsVictory_Pose_Reward, bool K2Node_DynamicCast_bSuccess_4, UResourceReward* K2Node_DynamicCast_AsResource_Reward, bool K2Node_DynamicCast_bSuccess_5, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_2, USchematicReward* K2Node_DynamicCast_AsSchematic_Reward, bool K2Node_DynamicCast_bSuccess_6, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_1, FText CallFunc_Format_ReturnValue_1, FText K2Node_Select_Default, UPickaxePartReward* K2Node_DynamicCast_AsPickaxe_Part_Reward, bool K2Node_DynamicCast_bSuccess_7, EPickaxePartLocation CallFunc_GetPrefferedLocation_ReturnValue, FText CallFunc_GetPickaxePartLocationTitle_OutTitle);
    void RightMouseClicked__DelegateSignature(UITM_SeasonEditor_Reward_C* W_Reward);
    void RewardClicked__DelegateSignature(UITM_SeasonEditor_Reward_C* W_Reward);
}

#endif
