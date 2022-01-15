#ifndef UE4SS_SDK_BP_AmberChunk_HPP
#define UE4SS_SDK_BP_AmberChunk_HPP

class ABP_AmberChunk_C : UBP_Gem_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UPointLightComponent* PointLight;
    FTimerHandle TimerHandle;
    float LifeTime;
    bool Destroyed;
    UMaterialInstanceDynamic* Dynamic Material;
    FLinearColor Initial Colour;
    FLinearColor Final Colour;
    float ProgressFrequency;
    float TimeElapsed;
    FLinearColor Initial Color Tint1;
    FLinearColor Final Color Tint1;

    void OnRep_Destroyed(FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
    void UserConstructionScript(FLinearColor CallFunc_K2_GetVectorParameterValue_ReturnValue, FLinearColor CallFunc_K2_GetVectorParameterValue_ReturnValue_1, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    void ReceiveBeginPlay();
    void DestroySelf();
    void Time();
    void ExecuteUbergraph_BP_AmberChunk(int32 EntryPoint, FVector CallFunc_Conv_LinearColorToVector_ReturnValue, FVector CallFunc_Conv_LinearColorToVector_ReturnValue_1, FVector CallFunc_Conv_LinearColorToVector_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, float CallFunc_MapRangeClamped_ReturnValue, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, FVector CallFunc_VLerp_ReturnValue, FLinearColor CallFunc_Conv_VectorToLinearColor_ReturnValue, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue_1, FVector CallFunc_Conv_LinearColorToVector_ReturnValue_3, FVector CallFunc_VLerp_ReturnValue_1, FLinearColor CallFunc_Conv_VectorToLinearColor_ReturnValue_1);
}

#endif
