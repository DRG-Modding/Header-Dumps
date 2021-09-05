// BlueprintGeneratedClass EndScreenSetups.EndScreenSetups_C
// Size: 0xf8 (Inherited: 0xb0)
struct UEndScreenSetups_C : UActorComponent {
	TArray<FEndScreenMoveSet> VictorySets; // 0xb0(0x10)
	TArray<FEndScreenMoveSet> DefeatSets; // 0xc0(0x10)
	TArray<FEndScreenMoveSet> AvailableVictorySets; // 0xd0(0x10)
	TArray<FEndScreenMoveSet> AvailableDefeatSets; // 0xe0(0x10)
	FRandomStream RandStream; // 0xf0(0x08)

	void GetRandomWalkAnim(UVictoryPose* VicPose, FRandomStream RandStream, TSoftObjectPtr<UAnimSequence> Walk);
	void LoadVictoryAnims(UVictoryPose* InputPin, FRandomStream RandStream, FEndScreenMove EndScreenMove);
	void LoadActorClass(TSoftClassPtr<UObject> Soft, AActor* Hard);
	void LoadAnimSeqArray(TArray<TSoftObjectPtr<UAnimSequence>> Soft, TArray<UAnimSequence*> Hard);
	void LoadAnimSeq(TSoftObjectPtr<UAnimSequence> Soft, UAnimSequence* Hard);
	void SplitMoveSetAnims(TArray<TSoftObjectPtr<UAnimSequence>> TargetArray, UAnimSequence* Selected1, TArray<TSoftObjectPtr<UAnimSequence>> Rest1);
	void ResetMovesets(int32_t NewSeed);
	void RandomWeightedMoveSet(TArray<FEndScreenMoveSet> Array, FEndScreenMove Selected);
	void GetEndScreenMoveSet(bool Survived, UVictoryPose* VictPose, FRandomStream RandStream, FEndScreenMove Selected);
	void RandomAnimElement(TArray<UAnimSequence*> Array, UAnimSequence* Output);
};

