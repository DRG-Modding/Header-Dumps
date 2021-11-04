// BlueprintGeneratedClass MixFunctions.MixFunctions_C
// Size: 0x28 (Inherited: 0x28)
struct UMixFunctions_C : UBlueprintFunctionLibrary {

	void PushMixAtDistanceForDuration(USoundMix* InSoundMixModifier, AActor* Target, float MinDistance, float MaxDistance, float Duration, UObject* __WorldContext);
	void PopMix(USoundMix* InSoundMixModifier, UObject* __WorldContext);
	void PopMixAtDistance(USoundMix* InSoundMixModifier, AActor* Target, float MinDistance, float MaxDistance, UObject* __WorldContext);
	void PushMixAtDistance(USoundMix* InSoundMixModifier, AActor* Target, float MinDistance, float MaxDistance, UObject* __WorldContext);
};

