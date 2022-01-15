#ifndef UE4SS_SDK_BP_Pipeline_Build_Hologram_HPP
#define UE4SS_SDK_BP_Pipeline_Build_Hologram_HPP

class ABP_Pipeline_Build_Hologram_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* Hologram3;
    UStaticMeshComponent* Hologram2;
    UStaticMeshComponent* Hologram1;
    USceneComponent* TranslateRoot;
    USceneComponent* RotateRoot;
    USceneComponent* DefaultSceneRoot;

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_Pipeline_Build_Hologram(int32 EntryPoint, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float K2Node_Event_DeltaSeconds, float CallFunc_Percent_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FRotator CallFunc_MakeRotator_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue_1, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Sin_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_3, FVector CallFunc_MakeVector_ReturnValue, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult);
}

#endif
