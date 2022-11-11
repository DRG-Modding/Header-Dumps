#ifndef UE4SS_SDK_PLS_Collection_HPP
#define UE4SS_SDK_PLS_Collection_HPP

class APLS_Collection_C : public APLS_Fractured_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class URoomGeneratorGroup* RoomGroup;
    FRoomGeneratorGroupInstance groupInstance;
    float RoomDistance;

    class URoomGenerator* SelectRoomFromDNA();
    void CreateCaveGraph();
    void ExecuteUbergraph_PLS_Collection(int32 EntryPoint);
};

#endif
