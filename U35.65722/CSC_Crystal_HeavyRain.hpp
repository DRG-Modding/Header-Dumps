#ifndef UE4SS_SDK_CSC_Crystal_HeavyRain_HPP
#define UE4SS_SDK_CSC_Crystal_HeavyRain_HPP

class UCSC_Crystal_HeavyRain_C : public UCaveScriptComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector2D RainFrequencyMinMax;
    float RainProbability;
    FVector2D RainFirstInstanceDelayMinMax;

    void ReceiveBeginPlay();
    void MatchStart();
    void ExecuteUbergraph_CSC_Crystal_HeavyRain(int32 EntryPoint, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_HasMatchStarted_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_RandomFloatInRange_ReturnValue, FExecuteUbergraph_CSC_Crystal_HeavyRainK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FTransform CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, float CallFunc_RandomFloat_ReturnValue, class ABP_New_HeavyRain_Crystal_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_RandomFloatInRange_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_Square_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
};

#endif
