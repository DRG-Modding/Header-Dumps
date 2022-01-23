#ifndef UE4SS_SDK_Cheat_RoomList_HPP
#define UE4SS_SDK_Cheat_RoomList_HPP

class UCheat_RoomList_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* RoomsVertBox;
    class UTextBlock* TextBlock_0;
    class UTextBlock* TextBlock_DNA;
    class UTextBlock* TextBlock_Lvl;
    class UVerticalBox* VertBox;
    class UTerrainMaterial* Material;

    void Construct();
    void BP_OnRefresh();
    void ExecuteUbergraph_Cheat_RoomList(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, class UFSDCheatManager* CallFunc_GetCheatManager_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<FString>& CallFunc_GetListOfRoomNames_roomNames, FString CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UCheat_RoomItem_C* CallFunc_Create_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool CallFunc_IsValid_ReturnValue, FString CallFunc_Conv_IntToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, class UMissionDNA* CallFunc_GetMissionDNA_ReturnValue, FString CallFunc_GetObjectName_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, FString CallFunc_GetObjectName_ReturnValue_1, class UCheat_RoomItem_C* CallFunc_Create_ReturnValue_1, FText CallFunc_Conv_StringToText_ReturnValue_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1);
};

#endif
