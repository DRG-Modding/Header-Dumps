#ifndef UE4SS_SDK_LIB_RumbleFunctions_HPP
#define UE4SS_SDK_LIB_RumbleFunctions_HPP

class ULIB_RumbleFunctions_C : public UBlueprintFunctionLibrary
{

    void FSD Rumble At Actor(class AActor* Actor, class UForceFeedbackEffect* ForceFeedbackEffect, bool bLooping, float IntensityMultiplier, float StartTime, bool bAutoDestroy, class UObject* __WorldContext);
    void FSD Rumble At Location(class UObject* WorldContextObject, class UForceFeedbackEffect* ForceFeedbackEffect, FVector Location, FRotator Rotation, bool bLooping, float IntensityMultiplier, float StartTime, bool bAutoDestroy, class UObject* __WorldContext);
};

#endif
