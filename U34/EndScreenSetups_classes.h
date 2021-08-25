// BlueprintGeneratedClass EndScreenSetups.EndScreenSetups_C
// Size: 0xf8 (Inherited: 0xb0)
struct UEndScreenSetups_C : UActorComponent {
	struct TArray<struct FEndScreenMoveSet> VictorySets; // 0xb0(0x10)
	struct TArray<struct FEndScreenMoveSet> DefeatSets; // 0xc0(0x10)
	struct TArray<struct FEndScreenMoveSet> AvailableVictorySets; // 0xd0(0x10)
	struct TArray<struct FEndScreenMoveSet> AvailableDefeatSets; // 0xe0(0x10)
	struct FRandomStream RandStream; // 0xf0(0x08)

	void GetRandomWalkAnim(struct UVictoryPose* VicPose, struct FRandomStream RandStream, struct TSoftObjectPtr<struct UAnimSequence> Walk); // Function EndScreenSetups.EndScreenSetups_C.GetRandomWalkAnim
	void LoadVictoryAnims(struct UVictoryPose* InputPin, struct FRandomStream RandStream, struct FEndScreenMove EndScreenMove); // Function EndScreenSetups.EndScreenSetups_C.LoadVictoryAnims
	void LoadActorClass(SoftClassProperty Soft, struct AActor* Hard); // Function EndScreenSetups.EndScreenSetups_C.LoadActorClass
	void LoadAnimSeqArray(struct TArray<struct TSoftObjectPtr<struct UAnimSequence>> Soft, struct TArray<struct UAnimSequence*> Hard); // Function EndScreenSetups.EndScreenSetups_C.LoadAnimSeqArray
	void LoadAnimSeq(struct TSoftObjectPtr<struct UAnimSequence> Soft, struct UAnimSequence* Hard); // Function EndScreenSetups.EndScreenSetups_C.LoadAnimSeq
	void SplitMoveSetAnims(struct TArray<struct TSoftObjectPtr<struct UAnimSequence>> TargetArray, struct UAnimSequence* Selected1, struct TArray<struct TSoftObjectPtr<struct UAnimSequence>> Rest1); // Function EndScreenSetups.EndScreenSetups_C.SplitMoveSetAnims
	void ResetMovesets(int32_t NewSeed); // Function EndScreenSetups.EndScreenSetups_C.ResetMovesets
	void RandomWeightedMoveSet(struct TArray<struct FEndScreenMoveSet> Array, struct FEndScreenMove Selected); // Function EndScreenSetups.EndScreenSetups_C.RandomWeightedMoveSet
	void GetEndScreenMoveSet(bool Survived, struct UVictoryPose* VictPose, struct FRandomStream RandStream, struct FEndScreenMove Selected); // Function EndScreenSetups.EndScreenSetups_C.GetEndScreenMoveSet
	void RandomAnimElement(struct TArray<struct UAnimSequence*> Array, struct UAnimSequence* Output); // Function EndScreenSetups.EndScreenSetups_C.RandomAnimElement
};

