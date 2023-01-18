#ifndef UE4SS_SDK_BP_GameState_HPP
#define UE4SS_SDK_BP_GameState_HPP

class ABP_GameState_C : public AFSDGameState
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    TArray<class UPlayerCharacterID*> InitialHeroes;
    TArray<class UPlayerCharacterID*> InitialHeroesLeft;
    TSoftObjectPtr<UAnimationSharingSetup> MaggotAnimationSharing;
    TSoftObjectPtr<UMaterialInterface> sjaromg;

    void GetAnimSharingAssets(TSoftObjectPtr<UAnimationSharingSetup> AnimSharing, TArray<TSoftObjectPtr<UObject>>& Assets);
    TArray<class UPlayerCharacterID*> GetPlayableCharacterIDs();
    void GetRandomIntialHero(class UPlayerCharacterID*& HeroClass);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void StartGame();
    void HandleSeamlessTravelEvent();
    void ReceiveTick(float DeltaSeconds);
    void CustomEvent_0();
    void ExecuteUbergraph_BP_GameState(int32 EntryPoint);
};

#endif
