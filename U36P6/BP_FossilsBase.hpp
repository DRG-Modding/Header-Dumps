#ifndef UE4SS_SDK_BP_FossilsBase_HPP
#define UE4SS_SDK_BP_FossilsBase_HPP

class ABP_FossilsBase_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTerrainPlacementComponent* terrainPlacement;
    class ULevelGenerationCarverComponent* LevelGenerationCarver;
    class USceneComponent* DefaultSceneRoot;
    class USoundBase* SpookyAudio;
    float AudioActivationDistance;
    FRandRange RandomScale;

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void OnLocalPlayerClose(class APlayerCharacter* Player, bool enteredTrigger);
    void ExecuteUbergraph_BP_FossilsBase(int32 EntryPoint);
};

#endif
