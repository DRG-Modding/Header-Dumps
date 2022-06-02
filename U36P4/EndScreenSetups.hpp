#ifndef UE4SS_SDK_EndScreenSetups_HPP
#define UE4SS_SDK_EndScreenSetups_HPP

class UEndScreenSetups_C : public UActorComponent
{
    TArray<FEndScreenMoveSet> VictorySets;
    TArray<FEndScreenMoveSet> DefeatSets;
    TArray<FEndScreenMoveSet> AvailableVictorySets;
    TArray<FEndScreenMoveSet> AvailableDefeatSets;
    FRandomStream RandStream;

    void GetRandomWalkAnim(class UVictoryPose* VicPose, FRandomStream& RandStream, TSoftObjectPtr<UAnimSequence>& Walk);
    void LoadVictoryAnims(class UVictoryPose* InputPin, FRandomStream& RandStream, FEndScreenMove& EndScreenMove);
    void LoadActorClass(TSoftClassPtr<AActor> Soft, TSubclassOf<class AActor>& Hard);
    void LoadAnimSeqArray(TArray<TSoftObjectPtr<UAnimSequence>>& Soft, TArray<class UAnimSequence*>& Hard);
    void LoadAnimSeq(TSoftObjectPtr<UAnimSequence> Soft, class UAnimSequence*& Hard);
    void SplitMoveSetAnims(const TArray<TSoftObjectPtr<UAnimSequence>>& TargetArray, class UAnimSequence*& Selected1, TArray<TSoftObjectPtr<UAnimSequence>>& Rest1);
    void ResetMovesets(int32 NewSeed);
    void RandomWeightedMoveSet(TArray<FEndScreenMoveSet>& Array, FEndScreenMove& Selected);
    void GetEndScreenMoveSet(bool Survived, class UVictoryPose* VictPose, FRandomStream& RandStream, FEndScreenMove& Selected);
    void RandomAnimElement(TArray<class UAnimSequence*>& Array, class UAnimSequence*& Output);
};

#endif
