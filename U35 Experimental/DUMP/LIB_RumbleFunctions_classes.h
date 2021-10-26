// BlueprintGeneratedClass LIB_RumbleFunctions.LIB_RumbleFunctions_C
// Size: 0x28 (Inherited: 0x28)
struct ULIB_RumbleFunctions_C : UBlueprintFunctionLibrary {

	void FSD Rumble At Actor(AActor* Actor, UForceFeedbackEffect* ForceFeedbackEffect, bool bLooping, float IntensityMultiplier, float StartTime, bool bAutoDestroy, UObject* __WorldContext);
	void FSD Rumble At Location(UObject* WorldContextObject, UForceFeedbackEffect* ForceFeedbackEffect, FVector Location, FRotator Rotation, bool bLooping, float IntensityMultiplier, float StartTime, bool bAutoDestroy, UObject* __WorldContext);
};

