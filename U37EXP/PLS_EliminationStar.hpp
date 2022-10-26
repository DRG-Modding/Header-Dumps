#ifndef UE4SS_SDK_PLS_EliminationStar_HPP
#define UE4SS_SDK_PLS_EliminationStar_HPP

class APLS_EliminationStar_C : public APLS_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<class URoomGenerator*> RandomRooms;
    bool RandomRoomsAreUnique;
    FRoomGeneratorGroupInstance RoomGroupInstance;
    class URoomGeneratorGroup* RoomGenerators;

    class URoomGenerator* SelectRoom();
    void CreateCaveGraph();
    void ExecuteUbergraph_PLS_EliminationStar(int32 EntryPoint);
};

#endif
