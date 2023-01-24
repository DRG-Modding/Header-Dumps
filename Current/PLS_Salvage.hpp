#ifndef UE4SS_SDK_PLS_Salvage_HPP
#define UE4SS_SDK_PLS_Salvage_HPP

class APLS_Salvage_C : public APLS_Fractured_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class URoomGeneratorGroup* RoomGroup;
    FRoomGeneratorGroupInstance groupInstance;
    class URoomGenerator* StartRoom;

    class URoomGenerator* SelectRoomFromDNA();
    void CreateCaveGraph();
    void ExecuteUbergraph_PLS_Salvage(int32 EntryPoint);
};

#endif
