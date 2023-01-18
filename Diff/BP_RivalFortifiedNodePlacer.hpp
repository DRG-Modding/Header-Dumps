#ifndef UE4SS_SDK_BP_RivalFortifiedNodePlacer_HPP
#define UE4SS_SDK_BP_RivalFortifiedNodePlacer_HPP

class ABP_RivalFortifiedNodePlacer_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USpawnActorWithDebrisPosComponent* SpawnActorWithDebrisPos;
    class USceneComponent* DefaultSceneRoot;

    void GetRoomLocation(FVector& Position);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_RivalFortifiedNodePlacer(int32 EntryPoint);
};

#endif
