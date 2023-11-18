#ifndef UE4SS_SDK_SLVL_SpaceRig_Halloween_HPP
#define UE4SS_SDK_SLVL_SpaceRig_Halloween_HPP

class ASLVL_SpaceRig_Halloween_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class AStaticMeshActor* SM_Halloween_BloodyPickaxe_31_ExecuteUbergraph_SLVL_SpaceRig_Halloween_RefProperty;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_SLVL_SpaceRig_Halloween(int32 EntryPoint);
};

#endif
