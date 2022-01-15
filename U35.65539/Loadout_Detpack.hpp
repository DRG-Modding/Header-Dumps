#ifndef UE4SS_SDK_Loadout_Detpack_HPP
#define UE4SS_SDK_Loadout_Detpack_HPP

class ALoadout_Detpack_C : ULoadoutItemProxy
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* StaticMesh;
    USceneComponent* DefaultSceneRoot;

    void RecieveEquipped();
    void RecieveUnequipped();
    void ExecuteUbergraph_Loadout_Detpack(int32 EntryPoint, bool CallFunc_K2_AttachToComponent_ReturnValue);
}

#endif
