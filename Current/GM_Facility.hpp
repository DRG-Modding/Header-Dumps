#ifndef UE4SS_SDK_GM_Facility_HPP
#define UE4SS_SDK_GM_Facility_HPP

class AGM_Facility_C : public ABP_NetworkPlayGameMode_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<class ABP_SmallGenerator_C*> generators;
    class UOBJ_1st_Facility_C* Objective;
    class ABP_MainFacility_DataVault_C* mainFacility;
    TSubclassOf<class AActor> ActivatorClass;
    TSubclassOf<class AActor> FacilityClass;
    class UEWC_Base_C* WaveMusic;
    TArray<int32> RoomsToSpawnIn;
    int32 activations;
    int32 Current;
    class ABP_Facility_PowerStation_GeneratorBase_C* LastGenerator;
    TArray<class UEWC_OverloadShieldGenerator_Facility_C*> ActiveWaves;
    FMusicHandle MusicHandle;
    int32 GeneratorsCalled;
    TSubclassOf<class ARessuplyPod> Facility Generator Class;

    void StopOverChargerWave(class ABP_Facility_PowerStation_GeneratorBase_C* WaveOrigin);
    void GetGeneratorRooms(TArray<int32>& Array);
    void GetTargetRooms();
    void OnLoaded_363A1A82446FF4B3B30843A806542007(class UObject* Loaded);
    void SetObjective(class UOBJ_1st_Facility_C* Objective);
    void FacilityActivated();
    void OnFacilityDestroyed();
    void Damaged();
    void SpawnMissionCriticalItems(const ECriticalItemPass& pass);
    void ReceiveBeginPlay();
    void GeneratorCharged(class ABP_Facility_PowerStation_GeneratorBase_C* Generator);
    void OnOverChargerCalled(FVector Location, int32 roomIndex);
    void SubscribeToShieldEvents(class ABP_Facility_PowerStation_GeneratorBase_C* Generator);
    void Recieve_Charged(class ABP_Facility_PowerStation_GeneratorBase_C* Generator);
    void Recieve_ChargerCalled(FVector Location, int32 roomIndex);
    void Recieve_FirstConnected(class ABP_Facility_PowerStation_GeneratorBase_C* Generator, class UTetherComponent* tetherlineStart);
    void OnObjectivesInitialized();
    void DonkeyButtonPressed();
    void StartOverChargerWave(class ABP_Facility_PowerStation_GeneratorBase_C* ShieldGenerator, class UTetherComponent* tetherlineStart);
    void ExecuteUbergraph_GM_Facility(int32 EntryPoint);
};

#endif
