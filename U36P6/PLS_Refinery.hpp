#ifndef UE4SS_SDK_PLS_Refinery_HPP
#define UE4SS_SDK_PLS_Refinery_HPP

class APLS_Refinery_C : public APLS_Fractured_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class URoomGeneratorGroup* Room Group;
    FRoomGeneratorGroupInstance Group Instance;
    class URoomGenerator* Start Room;
    float ChanceOfTunnelRoom;

    void GetDNARoomCount(int32& RoomCount);
    class URoomGenerator* SelectRoomFromDNA(int32 QueryIndex);
    void CreateCaveGraph();
    void ExecuteUbergraph_PLS_Refinery(int32 EntryPoint);
};

#endif
