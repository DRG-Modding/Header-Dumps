#ifndef UE4SS_SDK_MixFunctions_HPP
#define UE4SS_SDK_MixFunctions_HPP

class UMixFunctions_C : public UBlueprintFunctionLibrary
{

    void PushMixAtDistanceForDuration(class USoundMix* InSoundMixModifier, class AActor* Target, float MinDistance, float MaxDistance, float Duration, class UObject* __WorldContext);
    void PopMix(class USoundMix* InSoundMixModifier, class UObject* __WorldContext);
    void PopMixAtDistance(class USoundMix* InSoundMixModifier, class AActor* Target, float MinDistance, float MaxDistance, class UObject* __WorldContext);
    void PushMixAtDistance(class USoundMix* InSoundMixModifier, class AActor* Target, float MinDistance, float MaxDistance, class UObject* __WorldContext);
};

#endif
