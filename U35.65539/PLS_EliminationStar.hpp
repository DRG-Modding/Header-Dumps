#ifndef UE4SS_SDK_PLS_EliminationStar_HPP
#define UE4SS_SDK_PLS_EliminationStar_HPP

class APLS_EliminationStar_C : UPLS_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<URoomGenerator*> RandomRooms;
    bool RandomRoomsAreUnique;
    FRoomGeneratorGroupInstance RoomGroupInstance;
    URoomGeneratorGroup* RoomGenerators;

    URoomGenerator* SelectRoom(UMissionDNA* CallFunc_GetMissionDNA_ReturnValue, URoomGenerator* CallFunc_GetRandomRoomWithTags_ReturnValue);
    void CreateCaveGraph();
    void ExecuteUbergraph_PLS_EliminationStar(int32 EntryPoint, URoomGenerator* CallFunc_SelectRoom_ReturnValue, FVector CallFunc_AddRoom_outCenter, FRoomNode CallFunc_AddRoom_outRoom, int32 CallFunc_AddRoom_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue_1, FVector CallFunc_AddRoom_outCenter_1, FRoomNode CallFunc_AddRoom_outRoom_1, int32 CallFunc_AddRoom_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue_2, int32 CallFunc_ConnectRoomIds_ReturnValue, URoomGenerator* CallFunc_SelectRoom_ReturnValue_1, FRoomGeneratorGroupInstance CallFunc_CreateGroupInstance_ReturnValue, FVector CallFunc_AddRoom_outCenter_2, FRoomNode CallFunc_AddRoom_outRoom_2, int32 CallFunc_AddRoom_ReturnValue_2, int32 CallFunc_ConnectRoomIds_ReturnValue_1, int32 CallFunc_ConnectRoomIds_ReturnValue_2, URoomGenerator* CallFunc_SelectRoom_ReturnValue_2, FVector CallFunc_AddRoom_outCenter_3, FRoomNode CallFunc_AddRoom_outRoom_3, int32 CallFunc_AddRoom_ReturnValue_3, int32 CallFunc_ConnectRoomIds_ReturnValue_3, int32 CallFunc_ConnectRoomIds_ReturnValue_4);
}

#endif
