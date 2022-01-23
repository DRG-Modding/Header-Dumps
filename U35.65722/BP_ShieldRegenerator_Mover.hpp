#ifndef UE4SS_SDK_BP_ShieldRegenerator_Mover_HPP
#define UE4SS_SDK_BP_ShieldRegenerator_Mover_HPP

class ABP_ShieldRegenerator_Mover_C : public ADeepPathfinderCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* MovingAudioComponent;
    class UParticleSystemComponent* RocketExhaust;
    class UPointLightComponent* PointLight;
    float LiftOff_Progress_9B203DE44FAEAFAF13D1B3902168B574;
    TEnumAsByte<ETimelineDirection::Type> LiftOff__Direction_9B203DE44FAEAFAF13D1B3902168B574;
    class UTimelineComponent* LiftOff;
    class AActor* TargetActor;
    FVector HoverPoint;
    FVector StartPoint;
    class UParticleSystem* ListoffBlastParticles;
    class AShieldGeneratorItem* Item;

    void FindTakeOffPoint(FVector& TakeOffPoint, FVector Above, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_VSize_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, FVector CallFunc_FindNearestPathfinderPoint_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FVector CallFunc_FindPathfinderPointAbove_ReturnValue);
    bool MoveToInstigator(class APawn* CallFunc_GetInstigator_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void LiftOff__FinishedFunc();
    void LiftOff__UpdateFunc();
    void ReceiveBeginPlay();
    void All_LiftOff(FVector InHoverPoint);
    void BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_0_PathStateChangedDelegate__DelegateSignature(EDeepMovementState State);
    void Begin Lift Off Effects();
    void Begin Move To Actor(class AActor* InTargetActor);
    void OnReturned();
    void BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_2_PathFinished__DelegateSignature(bool success);
    void ExecuteUbergraph_BP_ShieldRegenerator_Mover(int32 EntryPoint, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector K2Node_CustomEvent_InHoverPoint, bool CallFunc_StartMoveToActor_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, EDeepMovementState K2Node_ComponentBoundEvent_state, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FVector CallFunc_VEase_ReturnValue, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class AActor* K2Node_CustomEvent_InTargetActor, bool K2Node_ComponentBoundEvent_Success);
};

#endif
