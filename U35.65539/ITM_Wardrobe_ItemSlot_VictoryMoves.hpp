#ifndef UE4SS_SDK_ITM_Wardrobe_ItemSlot_VictoryMoves_HPP
#define UE4SS_SDK_ITM_Wardrobe_ItemSlot_VictoryMoves_HPP

class UITM_Wardrobe_ItemSlot_VictoryMoves_C : UITM_Wardrobe_ItemSlot_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<UVictoryPose*> VictoryPoses;
    UWidget* SelectedWidget;

    void ReceiveEquipItem(int32 InIndex, bool& OutSuccess, UVictoryPose* CallFunc_Array_Get_Item);
    void PreviewItem(UVictoryPose* Item, bool Show, bool& OutSuccess, bool Temp_bool_Variable, UVictoryPose* Temp_object_Variable, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UVictoryPose* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue);
    void ReceivePreviewItem(int32 Index, bool Show, bool& OutSuccess, UVictoryPose* CallFunc_Array_Get_Item, bool CallFunc_PreviewItem_OutSuccess);
    void ReceiveItemNotificationData(int32 Index, TArray<UObject*>& Array, UVictoryPose* CallFunc_Array_Get_Item, UGameData* CallFunc_GetFSDGameData_ReturnValue, TArray<UObject*>& K2Node_MakeArray_Array);
    void ReceiveInitialize(int32& AvailableItems, int32 CallFunc_Array_Length_ReturnValue, TArray<UVictoryPose*>& CallFunc_GetOwnedVictoryPoses_ReturnValue);
    void ReceiveGetSelectedIndex(int32& OutIndex, UVictoryPose* CallFunc_GetEquippedVictoryPose_ReturnValue, int32 CallFunc_Array_Find_ReturnValue);
    void UpdateOrCreateItemWidget(UVictoryPose* InVictoryMove, UWidget* InReuseWidget, bool InShowToolTip, UWidget*& OutWidget, UITM_GeneratedIcon_Item_C* Widget, FText inToolTip, UImage* Image, UTexture2D* Texture, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, UTexture2D* Temp_object_Variable, UTexture2D* Temp_object_Variable_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsRandomVictoryPose_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UTexture2D* K2Node_Select_Default, UITM_GeneratedIcon_Item_C* CallFunc_Create_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    void ReceiveGenerateItems(TArray<UWidget*>& OutItemWidgets, TArray<UWidget*> Widgets, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UVictoryPose* CallFunc_Array_Get_Item, UWidget* CallFunc_UpdateOrCreateItemWidget_OutWidget, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
    void UpdateEquipped(UVictoryPose* Equipped, bool CallFunc_IsValid_ReturnValue, UWidget* CallFunc_UpdateOrCreateItemWidget_OutWidget, UVictoryPose* CallFunc_GetEquippedVictoryPose_ReturnValue);
    void ReceivePreConstruct();
    void SetHovered(bool InSlotHovered);
    void ExecuteUbergraph_ITM_Wardrobe_ItemSlot_VictoryMoves(int32 EntryPoint, bool K2Node_Event_InSlotHovered, UVictoryPose* CallFunc_GetEquippedVictoryPose_ReturnValue, bool CallFunc_PreviewItem_OutSuccess);
}

#endif
