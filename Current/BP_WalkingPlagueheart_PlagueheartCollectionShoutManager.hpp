#ifndef UE4SS_SDK_BP_WalkingPlagueheart_PlagueheartCollectionShoutManager_HPP
#define UE4SS_SDK_BP_WalkingPlagueheart_PlagueheartCollectionShoutManager_HPP

class ABP_WalkingPlagueheart_PlagueheartCollectionShoutManager_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    int32 heartsDeposited;

    void OnHeartDeposited();
    void InitializeHeart(class ABP_PlagueHeart_C* RegisterPlagueheart);
    void ExecuteUbergraph_BP_WalkingPlagueheart_PlagueheartCollectionShoutManager(int32 EntryPoint);
};

#endif
