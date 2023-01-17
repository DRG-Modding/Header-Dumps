#ifndef UE4SS_SDK_Loadout_GrenadeProxyBase_HPP
#define UE4SS_SDK_Loadout_GrenadeProxyBase_HPP

class ALoadout_GrenadeProxyBase_C : public ALoadoutItemProxy
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* DefaultSceneRoot;

    void RecieveEquipped();
    void RecieveUnequipped();
    void ExecuteUbergraph_Loadout_GrenadeProxyBase(int32 EntryPoint);
};

#endif
