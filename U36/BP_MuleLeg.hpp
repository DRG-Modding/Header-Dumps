#ifndef UE4SS_SDK_BP_MuleLeg_HPP
#define UE4SS_SDK_BP_MuleLeg_HPP

class ABP_MuleLeg_C : public ABP_Gem_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* MiniMuleLegPickUp;
    class UAudioComponent* MiniMuleLegDrop;
    class UAudioComponent* AudioPingWhenPickedUp;
    class UTerrainPlacementComponent* terrainPlacement;
    class UStaticMeshComponent* Distress_Sphere;
    class UPointLightComponent* PointLight;
    float Beacon_Alpha_5F66972149AD0193977EA08FF82B6FB4;
    float Beacon_Scale_5F66972149AD0193977EA08FF82B6FB4;
    TEnumAsByte<ETimelineDirection::Type> Beacon__Direction_5F66972149AD0193977EA08FF82B6FB4;
    class UTimelineComponent* Beacon;
    bool IsVisibleOnScanner;
    TArray<class ABP_MiniMule_Salvage_C*> PingingMules;
    TArray<class ABP_MiniMule_Salvage_C*> AllMules;

    void GetDistToNearestMULE(float& OutDist);
    void UpdateBeacon();
    void InitVisibleOnScanner();
    void SetPingedByMule(class ABP_MiniMule_Salvage_C* InMiniMule, bool InPinged);
    void OnRep_IsVisibleOnScanner();
    void Beacon__FinishedFunc();
    void Beacon__UpdateFunc();
    void ReceiveBeginPlay();
    void DisableDistressSphere();
    void SetVisibleOnScanner();
    void OnDropped_Event_0();
    void OnPickedUp_Event();
    void Ping Beacon();
    void OnDisableLegSpheres_Event();
    void Ping While Carried();
    void ExecuteUbergraph_BP_MuleLeg(int32 EntryPoint);
};

#endif
