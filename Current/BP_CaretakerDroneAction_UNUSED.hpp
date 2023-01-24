#ifndef UE4SS_SDK_BP_CaretakerDroneAction_UNUSED_HPP
#define UE4SS_SDK_BP_CaretakerDroneAction_UNUSED_HPP

class UBP_CaretakerDroneAction_UNUSED_C : public UBP_CaretakerActionBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 DroneCount;
    int32 MaxDroneCount;
    int32 DronesPerWave;
    FBP_CaretakerDroneAction_UNUSED_COnDroneKilled OnDroneKilled;
    void OnDroneKilled();
    FBP_CaretakerDroneAction_UNUSED_COnAllDronesKilled OnAllDronesKilled;
    void OnAllDronesKilled();
    TArray<class APawn*> Drones;
    TArray<FName> BuildLocations;

    bool CanUse();
    void OnStarted();
    void DroneSpawned(class APawn* enemy);
    void DroneKilled(class UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_BP_CaretakerDroneAction_UNUSED(int32 EntryPoint);
    void OnAllDronesKilled__DelegateSignature();
    void OnDroneKilled__DelegateSignature();
};

#endif
