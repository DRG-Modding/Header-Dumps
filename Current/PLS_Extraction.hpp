#ifndef UE4SS_SDK_PLS_Extraction_HPP
#define UE4SS_SDK_PLS_Extraction_HPP

class APLS_Extraction_C : public APLS_Linear_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class URoomGeneratorGroup* Room_Group;
    class URoomGenerator* StartingRoom;
    class URoomGenerator* EndRoom_Linear;
    FRoomGeneratorGroupInstance groupInstance;

    void CreateCaveGraph();
    void CreateGraphFirstPass_1();
    void ExecuteUbergraph_PLS_Extraction(int32 EntryPoint);
};

#endif
