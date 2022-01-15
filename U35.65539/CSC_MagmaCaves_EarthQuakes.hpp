#ifndef UE4SS_SDK_CSC_MagmaCaves_EarthQuakes_HPP
#define UE4SS_SDK_CSC_MagmaCaves_EarthQuakes_HPP

class UCSC_MagmaCaves_EarthQuakes_C : UCaveScriptComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector2D QuakeFrequencyMinMax;
    float HasQuakesProbability;
    FVector2D QuakeFirstDelayMinMax;

    void ReceiveBeginPlay();
    void MatchStart();
    void ExecuteUbergraph_CSC_MagmaCaves_EarthQuakes(int32 EntryPoint, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Square_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_HasMatchStarted_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_RandomFloatInRange_ReturnValue_1, DelegateEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FTransform CallFunc_MakeTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, float CallFunc_RandomFloat_ReturnValue, ABP_Quake_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
}

#endif
