#ifndef UE4SS_SDK_PLS_CaveGenerator_HPP
#define UE4SS_SDK_PLS_CaveGenerator_HPP

class APLS_CaveGenerator_C : public APLS_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void CreateCaveGraph();
    void CreateSpawn();
    void ExecuteUbergraph_PLS_CaveGenerator(int32 EntryPoint);
};

#endif
