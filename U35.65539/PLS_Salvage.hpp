#ifndef UE4SS_SDK_PLS_Salvage_HPP
#define UE4SS_SDK_PLS_Salvage_HPP

class APLS_Salvage_C : UPLS_Fractured_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    URoomGeneratorGroup* RoomGroup;
    FRoomGeneratorGroupInstance groupInstance;
    URoomGenerator* StartRoom;

    URoomGenerator* SelectRoomFromDNA(UMissionDNA* CallFunc_GetMissionDNA_ReturnValue, URoomGenerator* CallFunc_GetRandomRoomWithTags_ReturnValue);
    void CreateCaveGraph();
    void ExecuteUbergraph_PLS_Salvage(int32 EntryPoint, FVector CallFunc_AddRoom_outCenter, FRoomNode CallFunc_AddRoom_outRoom, int32 CallFunc_AddRoom_ReturnValue, URoomGenerator* CallFunc_SelectRoomFromDNA_ReturnValue, FRoomGeneratorGroupInstance CallFunc_CreateGroupInstance_ReturnValue, FVector CallFunc_AddRoom_outCenter_1, FRoomNode CallFunc_AddRoom_outRoom_1, int32 CallFunc_AddRoom_ReturnValue_1, URoomGenerator* CallFunc_SelectRoomFromDNA_ReturnValue_1, URoomGenerator* CallFunc_SelectRoomFromDNA_ReturnValue_2, FVector CallFunc_AddRoom_outCenter_2, FRoomNode CallFunc_AddRoom_outRoom_2, int32 CallFunc_AddRoom_ReturnValue_2, FVector CallFunc_AddRoom_outCenter_3, FRoomNode CallFunc_AddRoom_outRoom_3, int32 CallFunc_AddRoom_ReturnValue_3, URoomGenerator* CallFunc_SelectRoomFromDNA_ReturnValue_3, int32 CallFunc_ConnectRoomIds_ReturnValue, FVector CallFunc_AddRoom_outCenter_4, FRoomNode CallFunc_AddRoom_outRoom_4, int32 CallFunc_AddRoom_ReturnValue_4, URoomGenerator* CallFunc_SelectRoomFromDNA_ReturnValue_4, int32 CallFunc_ConnectRoomIds_ReturnValue_1, FVector CallFunc_AddRoom_outCenter_5, FRoomNode CallFunc_AddRoom_outRoom_5, int32 CallFunc_AddRoom_ReturnValue_5, int32 CallFunc_ConnectRoomIds_ReturnValue_2, URoomGenerator* CallFunc_GetRandomRoom_Room);
}

#endif
