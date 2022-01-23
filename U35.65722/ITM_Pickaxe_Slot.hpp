#ifndef UE4SS_SDK_ITM_Pickaxe_Slot_HPP
#define UE4SS_SDK_ITM_Pickaxe_Slot_HPP

class UITM_Pickaxe_Slot_C : public UITM_Wardrobe_ItemSlot_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FText CategoryText;
    TArray<class UPickaxePart*> Items;
    EPickaxePartLocation PickaxePartLocation;
    class UItemID* pickAxe;
    class UITM_GeneratedIcon_Item_C* EquippedWidget;

    void ReceiveItemDLC(int32 Index, class UDLCBase*& FromDLC, class UPickaxePart* CallFunc_Array_Get_Item);
    void UpdateEquippedItem(class UPickaxePart* EquippedItem, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UITM_GeneratedIcon_Item_C* CallFunc_CreateItemWidget_OutWidget, class UPickaxePart* CallFunc_GetEquippedPickaxePart_ReturnValue);
    void ReceiveEquipItem(int32 InIndex, bool& OutSuccess, class UPickaxePart* Equipped, class UPickaxePart* CallFunc_Array_Get_Item, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetViewerActor_ReturnValue, class APickaxePreviewActor* K2Node_DynamicCast_AsPickaxe_Preview_Actor, bool K2Node_DynamicCast_bSuccess);
    void ReceivePreviewItem(int32 Index, bool Show, bool& OutSuccess, class UPickaxePart* Temp_object_Variable, bool Temp_bool_Variable, class UPickaxePart* CallFunc_Array_Get_Item, class UPickaxePart* K2Node_Select_Default, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class AActor* CallFunc_GetViewerActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APickaxePreviewActor* K2Node_DynamicCast_AsPickaxe_Preview_Actor, bool K2Node_DynamicCast_bSuccess);
    void ReceiveItemNotificationData(int32 Index, TArray<class UObject*>& Array, class UGameData* CallFunc_GetFSDGameData_ReturnValue, class UPickaxePart* CallFunc_Array_Get_Item, TArray<class UObject*>& K2Node_MakeArray_Array);
    void ReceiveGenerateItems(TArray<class UWidget*>& OutItemWidgets, TArray<class UWidget*> Widgets, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UPickaxePart* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UITM_GeneratedIcon_Item_C* CallFunc_CreateItemWidget_OutWidget, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
    void CreateItemWidget(class UPickaxePart* InPart, class UITM_GeneratedIcon_Item_C*& OutWidget, class UITM_GeneratedIcon_Item_C* Widget, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UITM_GeneratedIcon_Item_C* CallFunc_Create_ReturnValue);
    void ReceiveGetSelectedIndex(int32& OutIndex, class UPickaxePart* CallFunc_GetEquippedPickaxePart_ReturnValue, int32 CallFunc_Array_Find_ReturnValue);
    void ReceiveInitialize(int32& AvailableItems, int32 CallFunc_Array_Length_ReturnValue, TArray<class UPickaxePart*>& CallFunc_GetUnlockedPickaxeParts_ReturnValue);
    bool IsInteractable();
    void InitializePickAxe(class UPlayerCharacterID* InCharacter, class UItemID* InItem, class UPickaxePart* EquippedItem);
    void ReceivePreConstruct();
    void ReceiveReleaseResource(class UWidget* InWidget);
    void ReleaseResources();
    void ExecuteUbergraph_ITM_Pickaxe_Slot(int32 EntryPoint, FText CallFunc_GetPickaxePartLocationTitle_OutTitle, bool CallFunc_IsValid_ReturnValue, class UWidget* K2Node_Event_InWidget, class UITM_GeneratedIcon_Item_C* K2Node_DynamicCast_AsITM_Generated_Icon_Item, bool K2Node_DynamicCast_bSuccess);
};

#endif
