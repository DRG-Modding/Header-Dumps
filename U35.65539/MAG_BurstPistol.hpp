#ifndef UE4SS_SDK_MAG_BurstPistol_HPP
#define UE4SS_SDK_MAG_BurstPistol_HPP

class AMAG_BurstPistol_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UFirstPersonStaticMeshComponent* FirstPersonStaticMesh;
    UBoxComponent* Box;

    bool Attached(AActor* Parent);
    bool Released();
    void DoRelease();
    void ExecuteUbergraph_MAG_BurstPistol(int32 EntryPoint);
}

#endif
