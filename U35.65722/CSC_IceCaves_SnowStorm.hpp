#ifndef UE4SS_SDK_CSC_IceCaves_SnowStorm_HPP
#define UE4SS_SDK_CSC_IceCaves_SnowStorm_HPP

class UCSC_IceCaves_SnowStorm_C : public UCaveScriptComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector2D SnowStormFrequencyMinMax;
    float SnowStormProbability;
    FVector2D SnowStormFirstInstanceDelayMinMax;

    void ReceiveBeginPlay();
    void MatchStart();
    void ExecuteUbergraph_CSC_IceCaves_SnowStorm(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_HasMatchStarted_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_RandomFloatInRange_ReturnValue, FExecuteUbergraph_CSC_IceCaves_SnowStormK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FTransform CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, float CallFunc_RandomFloat_ReturnValue, class ABP_New_SnowStorm_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_Square_ReturnValue);
};

#endif
