#ifndef UE4SS_SDK_LIB_RumbleFunctions_HPP
#define UE4SS_SDK_LIB_RumbleFunctions_HPP

class ULIB_RumbleFunctions_C : UBlueprintFunctionLibrary
{

    void FSD Rumble At Actor(AActor* Actor, UForceFeedbackEffect* ForceFeedbackEffect, bool bLooping, float IntensityMultiplier, float StartTime, bool bAutoDestroy, UObject* __WorldContext, FRotator CallFunc_K2_GetActorRotation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue);
    void FSD Rumble At Location(UObject* WorldContextObject, UForceFeedbackEffect* ForceFeedbackEffect, FVector Location, FRotator Rotation, bool bLooping, float IntensityMultiplier, float StartTime, bool bAutoDestroy, UObject* __WorldContext, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, UForceFeedbackComponent* CallFunc_SpawnForceFeedbackAtLocation_ReturnValue, EFSDInputSource CallFunc_GetInputSource_ReturnValue, UPlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess);
}

#endif
