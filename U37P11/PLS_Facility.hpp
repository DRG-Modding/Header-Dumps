#ifndef UE4SS_SDK_PLS_Facility_HPP
#define UE4SS_SDK_PLS_Facility_HPP

class APLS_Facility_C : public APLS_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FRoomGeneratorGroupInstance Room Group Instance;
    class URoomGeneratorGroup* RoomGenerators;
    FRoomGeneratorGroupInstance Room Group MainStation Instance;
    int32 MainStationRoomIndex;
    class URoomGeneratorGroup* RoomGeneratorMainStation;
    TArray<int32> GeneratorRoomIndex;
    int32 TotalRooms;
    class URoomGenerator* MainFacilityRoomRef;
    class URoomGenerator* GeneratorRoom1Ref;
    class URoomGenerator* GeneratorRoom2Ref;
    class URoomGenerator* ChallengeRoom2Ref;
    TArray<int32> ChallengeRoomIndex;
    class URoomGenerator* StartingRoom;
    class URoomGenerator* SecondBranchRoom;
    class URoomGenerator* MainBranchRoom;
    float Room5VerticalOffset;

    void AddRoomLinear(const FRoomNode& PreviousRoom, FVector Direction, float DistanceRadiusMultiplier, bool PlaceDirt, class URoomGeneratorBase*& RoomGenerator, FRoomNode& NewRoom);
    class URoomGenerator* SelectTraversalChallenge();
    void SetFacilityRoom(int32 FacilityRoom);
    class URoomGenerator* SelectRoomMainStation();
    class URoomGenerator* SelectRoom();
    void Circular Complex();
    void Linear();
    void LinearShort();
    void SuperCompactCircular();
    void SuperCompactLinear();
    void Circular Simple();
    void CustomEvent();
    void CreateCaveGraph();
    void ExecuteUbergraph_PLS_Facility(int32 EntryPoint);
};

#endif
