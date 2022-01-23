#ifndef UE4SS_SDK_LIB_RumbleFunctions_HPP
#define UE4SS_SDK_LIB_RumbleFunctions_HPP

class ULIB_RumbleFunctions_C : public UBlueprintFunctionLibrary
{

    void FSD Rumble At Actor(class AActor* Actor, class UForceFeedbackEffect* ForceFeedbackEffect, bool bLooping, float IntensityMultiplier, float StartTime, bool bAutoDestroy, class UObject* __WorldContext, FRotator CallFunc_K2_GetActorRotation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue);
    void FSD Rumble At Location(class UObject* WorldContextObject, class UForceFeedbackEffect* ForceFeedbackEffect, FVector Location, FRotator Rotation, bool bLooping, float IntensityMultiplier, float StartTime, bool bAutoDestroy, class UObject* __WorldContext, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, class UForceFeedbackComponent* CallFunc_SpawnForceFeedbackAtLocation_ReturnValue, EFSDInputSource CallFunc_GetInputSource_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess);
};

#endif
