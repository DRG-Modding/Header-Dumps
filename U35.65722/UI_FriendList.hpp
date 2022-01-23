#ifndef UE4SS_SDK_UI_FriendList_HPP
#define UE4SS_SDK_UI_FriendList_HPP

class UUI_FriendList_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* ScrollItems;

    void RefreshList(int32 Temp_int_Array_Index_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UUI_FriendListEntry_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, FBlueprintFriend CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Refresh();
    void ExecuteUbergraph_UI_FriendList(int32 EntryPoint, FBlueprintFriend K2Node_MakeStruct_BlueprintFriend, bool K2Node_Event_IsDesignTime, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, FExecuteUbergraph_UI_FriendListK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUI_FriendListEntry_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
};

#endif
