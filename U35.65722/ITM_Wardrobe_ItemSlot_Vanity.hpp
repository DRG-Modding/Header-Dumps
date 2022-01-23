#ifndef UE4SS_SDK_ITM_Wardrobe_ItemSlot_Vanity_HPP
#define UE4SS_SDK_ITM_Wardrobe_ItemSlot_Vanity_HPP

class UITM_Wardrobe_ItemSlot_Vanity_C : public UITM_Wardrobe_ItemSlot_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    EVanitySlot VanitySlot;
    class UITM_GeneratedIcon_Item_C* SelectedIcon;
    TArray<class UVanityItem*> vanityItems;
    class UVanityItem* DefaultItem;
    class UTexture2D* DefaultItemIcon;
    FText DefaultItemName;

    void ReceiveItemDLC(int32 Index, class UDLCBase*& FromDLC, class UVanityItem* CallFunc_Array_Get_Item);
    FText GetItemName(class UVanityItem* InVanityItembool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, FText CallFunc_GetEmptyText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const FText CallFunc_GetCraftableName_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const FText K2Node_Select_Default);
    void UpdateItemWidget(class UITM_GeneratedIcon_Item_C* InWidget, class UVanityItem* InVanityItem, bool In Show Tool Tip, bool IsDefaultItem, FText CallFunc_GetEmptyText_ReturnValue, FText CallFunc_GetItemName_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const FText CallFunc_GetCraftableDescription_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_BooleanAND_ReturnValue_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    void ReceiveEquipItem(int32 InIndex, bool& OutSuccess, class UVanityItem* CallFunc_Array_Get_Item);
    void ReceivePreviewItem(int32 Index, bool Show, bool& OutSuccess, class UVanityItem* CallFunc_Array_Get_Item, class AFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue, TScriptInterface<class ICraftable> CallFunc_PreviewItem_self_CastInput);
    void ReceiveItemNotificationData(int32 Index, TArray<class UObject*>& Array, class UVanityItem* CallFunc_Array_Get_Item, class UGameData* CallFunc_GetFSDGameData_ReturnValue, TArray<class UObject*>& K2Node_MakeArray_Array);
    void ReceiveInitialize(int32& AvailableItems, class UVanityItem* CallFunc_GetDefaultVanityItem_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TArray<class UVanityItem*>& CallFunc_GetUnLockedVanityItems_ReturnValue);
    void ReceiveGetSelectedIndex(int32& OutIndex, class UVanityItem* CallFunc_Receive_GetEquippedVanityItem_ReturnValue, int32 CallFunc_Array_Find_ReturnValue);
    void CreateItemWidget(class UVanityItem* InVanityItem, bool InBackgroundVisible, bool InShowToolTip, class UITM_GeneratedIcon_Item_C*& OutItemWidget, class UITM_GeneratedIcon_Item_C* ItemWidget, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UITM_GeneratedIcon_Item_C* CallFunc_Create_ReturnValue);
    void SetSelectedItem(class UVanityItem* Item, bool Equip, class APlayerCharacter* CharacterSelectorCharacter, class APlayerCharacter* CurrentPlayer, FText CallFunc_GetItemName_ReturnValue, class UITM_GeneratedIcon_Item_C* CallFunc_CreateItemWidget_OutItemWidget, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, EVanitySlot CallFunc_GetVanitySlot_ReturnValue, TSubclassOf<class APlayerCharacter> CallFunc_GetObjectClass_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, TSubclassOf<class APlayerCharacter> CallFunc_GetCharacterClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class APlayerCharacter* CallFunc_GetCharacterSelectorCharacter_ReturnValue);
    void ReceiveGenerateItems(TArray<class UWidget*>& OutItemWidgets, TArray<class UWidget*> Widgets, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UVanityItem* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UITM_GeneratedIcon_Item_C* CallFunc_CreateItemWidget_OutItemWidget, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
    void ReceiveReleaseResource(class UWidget* InWidget);
    void ReceivePreConstruct();
    void On Initialized();
    void ExecuteUbergraph_ITM_Wardrobe_ItemSlot_Vanity(int32 EntryPoint, class UTexture2D* CallFunc_GetVanitySlotIcon_AsTexture_2D, class UVanityItem* CallFunc_Receive_GetEquippedVanityItem_ReturnValue, class UWidget* K2Node_Event_InWidget, class UITM_GeneratedIcon_Item_C* K2Node_DynamicCast_AsITM_Generated_Icon_Item, bool K2Node_DynamicCast_bSuccess, FText CallFunc_GetVanitySlotTitle_OutTitle);
};

#endif
