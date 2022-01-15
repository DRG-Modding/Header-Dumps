#ifndef UE4SS_SDK_Loadout_GrenadeProxyBase_HPP
#define UE4SS_SDK_Loadout_GrenadeProxyBase_HPP

class ALoadout_GrenadeProxyBase_C : ULoadoutItemProxy
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* StaticMesh;
    USceneComponent* DefaultSceneRoot;

    void RecieveEquipped();
    void RecieveUnequipped();
    void ExecuteUbergraph_Loadout_GrenadeProxyBase(int32 EntryPoint, bool CallFunc_K2_AttachToComponent_ReturnValue);
}

#endif