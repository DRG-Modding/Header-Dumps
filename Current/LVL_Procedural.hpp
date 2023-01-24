#ifndef UE4SS_SDK_LVL_Procedural_HPP
#define UE4SS_SDK_LVL_Procedural_HPP

class ALVL_Procedural_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OnLoaded_7F31DA1545372482BDFD4D8E06981759(UClass* Loaded);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_LVL_Procedural(int32 EntryPoint);
};

#endif
