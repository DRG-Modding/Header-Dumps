#ifndef UE4SS_SDK_SLVL_SpaceRig_Oktoberfest_HPP
#define UE4SS_SDK_SLVL_SpaceRig_Oktoberfest_HPP

class ASLVL_SpaceRig_Oktoberfest_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_SLVL_SpaceRig_Oktoberfest(int32 EntryPoint);
};

#endif
