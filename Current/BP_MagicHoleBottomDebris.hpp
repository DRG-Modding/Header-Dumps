#ifndef UE4SS_SDK_BP_MagicHoleBottomDebris_HPP
#define UE4SS_SDK_BP_MagicHoleBottomDebris_HPP

class ABP_MagicHoleBottomDebris_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ULevelGenerationDebris* LevelGenerationDebris;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_MagicHoleBottomDebris(int32 EntryPoint);
};

#endif
