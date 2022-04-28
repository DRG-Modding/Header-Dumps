#ifndef UE4SS_SDK_Grenade_Cluster_HPP
#define UE4SS_SDK_Grenade_Cluster_HPP

class AGrenade_Cluster_C : public AITM_Grenade_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 GrenadeFragments;
    class USoundBase* ClusterBreakSound;
    class UParticleSystem* ClusterBreakParticles;
    float CurrentClusterPitch;
    float ClusterEjectionForce;

    void AddGearStateEntries(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    void OnExploded();
    void ExecuteUbergraph_Grenade_Cluster(int32 EntryPoint);
};

#endif
