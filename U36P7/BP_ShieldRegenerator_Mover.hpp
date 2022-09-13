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

    void FindTakeOffPoint(FVector& TakeOffPoint);
    bool MoveToInstigator();
    void LiftOff__FinishedFunc();
    void LiftOff__UpdateFunc();
    void ReceiveBeginPlay();
    void All_LiftOff(FVector InHoverPoint);
    void BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_0_PathStateChangedDelegate__DelegateSignature(EDeepMovementState State);
    void Begin Lift Off Effects();
    void Begin Move To Actor(class AActor* InTargetActor);
    void OnReturned();
    void BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_2_PathFinished__DelegateSignature(bool success);
    void ExecuteUbergraph_BP_ShieldRegenerator_Mover(int32 EntryPoint);
};

#endif
