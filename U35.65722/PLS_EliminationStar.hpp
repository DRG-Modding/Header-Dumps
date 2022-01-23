#ifndef UE4SS_SDK_PLS_EliminationStar_HPP
#define UE4SS_SDK_PLS_EliminationStar_HPP

class APLS_EliminationStar_C : public APLS_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<class URoomGenerator*> RandomRooms;
    bool RandomRoomsAreUnique;
    FRoomGeneratorGroupInstance RoomGroupInstance;
    class URoomGeneratorGroup* RoomGenerators;

    class URoomGenerator* SelectRoom(class UMissionDNA* CallFunc_GetMissionDNA_ReturnValue, class URoomGenerator* CallFunc_GetRandomRoomWithTags_ReturnValue);
    void CreateCaveGraph();
    void ExecuteUbergraph_PLS_EliminationStar(int32 EntryPoint, class URoomGenerator* CallFunc_SelectRoom_ReturnValue, FVector CallFunc_AddRoom_outCenter, FRoomNode CallFunc_AddRoom_outRoom, int32 CallFunc_AddRoom_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue_1, FVector CallFunc_AddRoom_outCenter_1, FRoomNode CallFunc_AddRoom_outRoom_1, int32 CallFunc_AddRoom_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue_2, int32 CallFunc_ConnectRoomIds_ReturnValue, class URoomGenerator* CallFunc_SelectRoom_ReturnValue_1, FRoomGeneratorGroupInstance CallFunc_CreateGroupInstance_ReturnValue, FVector CallFunc_AddRoom_outCenter_2, FRoomNode CallFunc_AddRoom_outRoom_2, int32 CallFunc_AddRoom_ReturnValue_2, int32 CallFunc_ConnectRoomIds_ReturnValue_1, int32 CallFunc_ConnectRoomIds_ReturnValue_2, class URoomGenerator* CallFunc_SelectRoom_ReturnValue_2, FVector CallFunc_AddRoom_outCenter_3, FRoomNode CallFunc_AddRoom_outRoom_3, int32 CallFunc_AddRoom_ReturnValue_3, int32 CallFunc_ConnectRoomIds_ReturnValue_3, int32 CallFunc_ConnectRoomIds_ReturnValue_4);
};

#endif
