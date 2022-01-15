#ifndef UE4SS_SDK_Elevator2_HPP
#define UE4SS_SDK_Elevator2_HPP

class AElevator2_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UPointLightComponent* PointLight;
    UStaticMeshComponent* StaticMesh;
    UMotionAudioController* MotionAudioController;
    UAudioComponent* Engine_noise_Cue;
    UBoxComponent* Collider_Floor;
    UStaticMeshComponent* Mesh_Elevator;
    USceneComponent* DefaultSceneRoot;
    FVector ElevatorScale;
    float ElevatorHeight;
    float LiftTime;
    float WaitTime;
    float Timer;
    bool GoingUp;
    float DeltaTime;
    float ElevatorSpeed;

    void OnRep_GoingUp(float CallFunc_Multiply_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_1);
    void UserConstructionScript(float CallFunc_Multiply_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FHitResult CallFunc_K2_AddLocalOffset_SweepHitResult);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_Elevator2(int32 EntryPoint, float K2Node_Event_DeltaSeconds, bool CallFunc_HasAuthority_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Multiply_FloatFloat_ReturnValue_2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue_1, FVector CallFunc_Subtract_VectorVector_ReturnValue, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
}

#endif
