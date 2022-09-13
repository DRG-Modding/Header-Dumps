#ifndef UE4SS_SDK_Loadout_BP_ShieldGenerator_HPP
#define UE4SS_SDK_Loadout_BP_ShieldGenerator_HPP

class ALoadout_BP_ShieldGenerator_C : public ALoadoutItemProxy
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* DefaultSceneRoot;

    void RecieveEquipped();
    void RecieveUnequipped();
    void ExecuteUbergraph_Loadout_BP_ShieldGenerator(int32 EntryPoint);
};

#endif
