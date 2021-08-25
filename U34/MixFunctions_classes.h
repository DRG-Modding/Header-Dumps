// BlueprintGeneratedClass MixFunctions.MixFunctions_C
// Size: 0x28 (Inherited: 0x28)
struct UMixFunctions_C : UBlueprintFunctionLibrary {

	void PushMixAtDistanceForDuration(struct USoundMix* InSoundMixModifier, struct AActor* Target, float MinDistance, float MaxDistance, float Duration, struct UObject* __WorldContext); // Function MixFunctions.MixFunctions_C.PushMixAtDistanceForDuration
	void PopMix(struct USoundMix* InSoundMixModifier, struct UObject* __WorldContext); // Function MixFunctions.MixFunctions_C.PopMix
	void PopMixAtDistance(struct USoundMix* InSoundMixModifier, struct AActor* Target, float MinDistance, float MaxDistance, struct UObject* __WorldContext); // Function MixFunctions.MixFunctions_C.PopMixAtDistance
	void PushMixAtDistance(struct USoundMix* InSoundMixModifier, struct AActor* Target, float MinDistance, float MaxDistance, struct UObject* __WorldContext); // Function MixFunctions.MixFunctions_C.PushMixAtDistance
};

