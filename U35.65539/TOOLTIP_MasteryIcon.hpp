#ifndef UE4SS_SDK_TOOLTIP_MasteryIcon_HPP
#define UE4SS_SDK_TOOLTIP_MasteryIcon_HPP

class UTOOLTIP_MasteryIcon_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow;
    UTextBlock* HeaderLabel;
    UVerticalBox* LinesBox;
    TArray<UUnlockReward*> Unlocks;
    UItemID* Item;
    TSoftClassPtr<AActor> BoscoSoftRef;

    void SetUnlocks(TArray<UUnlockReward*>& Array, UUnlockReward* Unlock, FText Text, bool Temp_bool_Variable, EItemSkinType Temp_byte_Variable, FText Temp_text_Variable, FText Temp_text_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FText Temp_text_Variable_2, UVanityReward* K2Node_DynamicCast_AsVanity_Reward, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const FText CallFunc_GetCraftableName_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, FText Temp_text_Variable_3, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, UOverclockingUnlockReward* K2Node_DynamicCast_AsOverclocking_Unlock_Reward, bool K2Node_DynamicCast_bSuccess_1, EItemSkinType Temp_byte_Variable_1, UPermanentItemUpgradeReward* K2Node_DynamicCast_AsPermanent_Item_Upgrade_Reward, bool K2Node_DynamicCast_bSuccess_2, USkinUnlock* K2Node_DynamicCast_AsSkin_Unlock, bool K2Node_DynamicCast_bSuccess_3, FText CallFunc_TextToUpper_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, FText K2Node_Select_Default, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_1, FText CallFunc_Format_ReturnValue_1, FText K2Node_Select_Default_1, FText K2Node_Select_Default_2, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_2, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_3, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_2, FText CallFunc_Format_ReturnValue_2, UUnlockReward* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FText CallFunc_Conv_ObjectToText_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UUI_MasteryUnlockLine_C* CallFunc_Create_ReturnValue, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_TOOLTIP_MasteryIcon(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
}

#endif
