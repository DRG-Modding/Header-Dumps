#ifndef UE4SS_SDK_Loadout_BP_ShieldGenerator_HPP
#define UE4SS_SDK_Loadout_BP_ShieldGenerator_HPP

class ALoadout_BP_ShieldGenerator_C : ULoadoutItemProxy
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* StaticMesh;
    USceneComponent* DefaultSceneRoot;

    void RecieveEquipped();
    void RecieveUnequipped();
    void ExecuteUbergraph_Loadout_BP_ShieldGenerator(int32 EntryPoint, bool CallFunc_K2_AttachToComponent_ReturnValue);
}

#endif
