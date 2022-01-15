#ifndef UE4SS_SDK_MixFunctions_HPP
#define UE4SS_SDK_MixFunctions_HPP

class UMixFunctions_C : UBlueprintFunctionLibrary
{

    void PushMixAtDistanceForDuration(USoundMix* InSoundMixModifier, AActor* Target, float MinDistance, float MaxDistance, float Duration, UObject* __WorldContext, UCharacter* CallFunc_GetPlayerCharacter_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
    void PopMix(USoundMix* InSoundMixModifier, UObject* __WorldContext);
    void PopMixAtDistance(USoundMix* InSoundMixModifier, AActor* Target, float MinDistance, float MaxDistance, UObject* __WorldContext, UCharacter* CallFunc_GetPlayerCharacter_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
    void PushMixAtDistance(USoundMix* InSoundMixModifier, AActor* Target, float MinDistance, float MaxDistance, UObject* __WorldContext, UCharacter* CallFunc_GetPlayerCharacter_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
}

#endif
