#ifndef UE4SS_SDK_GM_Refinery_HPP
#define UE4SS_SDK_GM_Refinery_HPP

class AGM_Refinery_C : public ABP_NetworkPlayGameMode_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector LandingZone;
    FSoftClassPath refineryClass;
    TSubclassOf<class AFSDRefinery> RefineryLoadedClass;

    void IsComplexMission(bool& IsComplex);
    void Spawn Refinery And Wells(class URefineryObjective* Refinery);
    void ReceiveBeginPlay();
    void OnMatchStarted_Event_0();
    void SpawnMissionCriticalItems(const ECriticalItemPass& pass);
    void DropPodSpawned(class ADroppableOutpost* InDroppableOutpost);
    void Rocket Launched();
    void RefineryStateChanged(ERefineryState InRefineryState);
    void ExecuteUbergraph_GM_Refinery(int32 EntryPoint);
};

#endif
