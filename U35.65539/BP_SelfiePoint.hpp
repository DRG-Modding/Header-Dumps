#ifndef UE4SS_SDK_BP_SelfiePoint_HPP
#define UE4SS_SDK_BP_SelfiePoint_HPP

class UBP_SelfiePoint_C : USceneComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    ACameraActor* Camera;
    float FOV;
    float EaseMultiplier;
    TEnumAsByte<EEasingFunc::Type> EaseFunction;
    float BlendExp;
    int32 Steps;
    bool LookAtPlayerOffset;
    FVector PlayerOffset;

    FTransform GetTargetTransform(FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue_1, AActor* CallFunc_GetOwner_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, const FTransform CallFunc_GetTransform_ReturnValue, FVector CallFunc_TransformLocation_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, FRotator CallFunc_Conv_VectorToRotator_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue);
    void DeactivateCamera(UPlayerController* CallFunc_GetPlayerController_ReturnValue, APawn* CallFunc_K2_GetPawn_ReturnValue);
    void ActivateCamera(FTransform CallFunc_GetTargetTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, ACameraActor* CallFunc_FinishSpawningActor_ReturnValue, UPlayerController* CallFunc_GetPlayerController_ReturnValue);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_SelfiePoint(int32 EntryPoint, FTransform CallFunc_GetTargetTransform_ReturnValue, float K2Node_Event_DeltaSeconds, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, const FTransform CallFunc_GetTransform_ReturnValue, FTransform CallFunc_TEase_ReturnValue, FHitResult CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue);
}

#endif
