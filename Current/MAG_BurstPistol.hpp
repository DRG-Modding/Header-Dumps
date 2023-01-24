#ifndef UE4SS_SDK_MAG_BurstPistol_HPP
#define UE4SS_SDK_MAG_BurstPistol_HPP

class AMAG_BurstPistol_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UFirstPersonStaticMeshComponent* FirstPersonStaticMesh;
    class UBoxComponent* Box;

    bool OnSpawnRelease_Attached(class AActor* Parent);
    bool OnSpawnRelease_Released();
    void DoRelease();
    void ExecuteUbergraph_MAG_BurstPistol(int32 EntryPoint);
};

#endif
