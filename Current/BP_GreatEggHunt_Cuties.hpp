#ifndef UE4SS_SDK_BP_GreatEggHunt_Cuties_HPP
#define UE4SS_SDK_BP_GreatEggHunt_Cuties_HPP

class ABP_GreatEggHunt_Cuties_C : public AStaticMeshActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<class UStaticMesh*> Meshes;
    class UStaticMesh* UsedMesh;

    void OnRep_UsedMesh();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_GreatEggHunt_Cuties(int32 EntryPoint);
};

#endif
