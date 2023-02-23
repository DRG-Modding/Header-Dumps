#ifndef UE4SS_SDK_SLVL_SpaceRig_Anniversary_HPP
#define UE4SS_SDK_SLVL_SpaceRig_Anniversary_HPP

class ASLVL_SpaceRig_Anniversary_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ABP_Anniversary_Sparkler_C* BP_Anniversary_Sparkler11_2_ExecuteUbergraph_SLVL_SpaceRig_Anniversary_RefProperty;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_SLVL_SpaceRig_Anniversary(int32 EntryPoint);
};

#endif
