#ifndef UE4SS_SDK_PLS_Escort_HPP
#define UE4SS_SDK_PLS_Escort_HPP

class APLS_Escort_C : public APLS_Linear_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FRoomGeneratorGroupInstance RoomGroupInstance;
    class URoomGeneratorGroup* Room Group;
    class URoomGenerator* Starting Room;
    class URoomGenerator* End Room;
    class URoomGeneratorGroup* Small Room Group;
    FRoomGeneratorGroupInstance Small Room Group Instance;
    float Min Room Distance;
    float Max Room Distance;
    int32 NumberOfMainRooms;
    bool MidWayRoom1;
    bool MidWayRoom2;
    bool MidWayRoom3;
    class URoomGenerator* FirstStopRoom;
    class URoomGenerator* SecondStopRoom;
    class URoomGenerator* LastStopRoom;
    int32 LastStopRoomID;
    TArray<bool> BigMidWayRoom;
    FVector LastStopRoomCenter;

    void AddOilShaleInfluencers();
    class URoomGenerator* SelectRoom(int32 DNARoomIndex);
    void CreateGraphSecondPass();
    void CreateCaveGraph();
    void ExecuteUbergraph_PLS_Escort(int32 EntryPoint);
};

#endif
