#ifndef UE4SS_SDK_ITM_Pickaxe_Slot_HPP
#define UE4SS_SDK_ITM_Pickaxe_Slot_HPP

class UITM_Pickaxe_Slot_C : UITM_Wardrobe_ItemSlot_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FText CategoryText;
    TArray<UPickaxePart*> Items;
    EPickaxePartLocation PickaxePartLocation;
    UItemID* pickAxe;
    UITM_GeneratedIcon_Item_C* EquippedWidget;

    void ReceiveItemDLC(int32 Index, UDLCBase*& FromDLC, UPickaxePart* CallFunc_Array_Get_Item);
    void UpdateEquippedItem(UPickaxePart* EquippedItem, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UITM_GeneratedIcon_Item_C* CallFunc_CreateItemWidget_OutWidget, UPickaxePart* CallFunc_GetEquippedPickaxePart_ReturnValue);
    void ReceiveEquipItem(int32 InIndex, bool& OutSuccess, UPickaxePart* Equipped, UPickaxePart* CallFunc_Array_Get_Item, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, AActor* CallFunc_GetViewerActor_ReturnValue, APickaxePreviewActor* K2Node_DynamicCast_AsPickaxe_Preview_Actor, bool K2Node_DynamicCast_bSuccess);
    void ReceivePreviewItem(int32 Index, bool Show, bool& OutSuccess, UPickaxePart* Temp_object_Variable, bool Temp_bool_Variable, UPickaxePart* CallFunc_Array_Get_Item, UPickaxePart* K2Node_Select_Default, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, AActor* CallFunc_GetViewerActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, APickaxePreviewActor* K2Node_DynamicCast_AsPickaxe_Preview_Actor, bool K2Node_DynamicCast_bSuccess);
    void ReceiveItemNotificationData(int32 Index, TArray<UObject*>& Array, UGameData* CallFunc_GetFSDGameData_ReturnValue, UPickaxePart* CallFunc_Array_Get_Item, TArray<UObject*>& K2Node_MakeArray_Array);
    void ReceiveGenerateItems(TArray<UWidget*>& OutItemWidgets, TArray<UWidget*> Widgets, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UPickaxePart* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, UITM_GeneratedIcon_Item_C* CallFunc_CreateItemWidget_OutWidget, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
    void CreateItemWidget(UPickaxePart* InPart, UITM_GeneratedIcon_Item_C*& OutWidget, UITM_GeneratedIcon_Item_C* Widget, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UITM_GeneratedIcon_Item_C* CallFunc_Create_ReturnValue);
    void ReceiveGetSelectedIndex(int32& OutIndex, UPickaxePart* CallFunc_GetEquippedPickaxePart_ReturnValue, int32 CallFunc_Array_Find_ReturnValue);
    void ReceiveInitialize(int32& AvailableItems, int32 CallFunc_Array_Length_ReturnValue, TArray<UPickaxePart*>& CallFunc_GetUnlockedPickaxeParts_ReturnValue);
    bool IsInteractable();
    void InitializePickAxe(UPlayerCharacterID* InCharacter, UItemID* InItem, UPickaxePart* EquippedItem);
    void ReceivePreConstruct();
    void ReceiveReleaseResource(UWidget* InWidget);
    void ReleaseResources();
    void ExecuteUbergraph_ITM_Pickaxe_Slot(int32 EntryPoint, FText CallFunc_GetPickaxePartLocationTitle_OutTitle, bool CallFunc_IsValid_ReturnValue, UWidget* K2Node_Event_InWidget, UITM_GeneratedIcon_Item_C* K2Node_DynamicCast_AsITM_Generated_Icon_Item, bool K2Node_DynamicCast_bSuccess);
}

#endif
