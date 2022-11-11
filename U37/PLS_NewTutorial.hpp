#ifndef UE4SS_SDK_PLS_NewTutorial_HPP
#define UE4SS_SDK_PLS_NewTutorial_HPP

class APLS_NewTutorial_C : public APLS_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void CreateCaveGraph();
    void ExecuteUbergraph_PLS_NewTutorial(int32 EntryPoint);
};

#endif
