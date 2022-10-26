#ifndef UE4SS_SDK_Loadout_Detpack_HPP
#define UE4SS_SDK_Loadout_Detpack_HPP

class ALoadout_Detpack_C : public ALoadoutItemProxy
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* DefaultSceneRoot;

    void RecieveEquipped();
    void RecieveUnequipped();
    void ExecuteUbergraph_Loadout_Detpack(int32 EntryPoint);
};

#endif
