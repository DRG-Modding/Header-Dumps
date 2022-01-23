#ifndef UE4SS_SDK_CSC_Sandblasted_SandStorm_HPP
#define UE4SS_SDK_CSC_Sandblasted_SandStorm_HPP

class UCSC_Sandblasted_SandStorm_C : public UCaveScriptComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector2D SandStormFrequencyMinMax;
    float SandStormProbability;
    FVector2D SandStormFirstInstanceDelayMinMax;

    void ReceiveBeginPlay();
    void MatchStart();
    void ExecuteUbergraph_CSC_Sandblasted_SandStorm(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_HasMatchStarted_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_RandomFloatInRange_ReturnValue, FExecuteUbergraph_CSC_Sandblasted_SandStormK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FTransform CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, float CallFunc_RandomFloat_ReturnValue, class ABP_NewSandStorm_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_Square_ReturnValue);
};

#endif
