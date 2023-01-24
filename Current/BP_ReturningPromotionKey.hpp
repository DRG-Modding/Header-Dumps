#ifndef UE4SS_SDK_BP_ReturningPromotionKey_HPP
#define UE4SS_SDK_BP_ReturningPromotionKey_HPP

class ABP_ReturningPromotionKey_C : public ADeepPathfinderCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* MovingAudioComponent;
    class UStaticMeshComponent* KeyMesh;
    class USceneComponent* KeyMover;
    FTransform KeyTransform;
    float alpha;
    class APlayerCharacter* Target;
    FVector StartLocation;

    void MoveTowardsCamera(bool& Finished);
    void OnTick_FDAEBDB24C3AD5E8021577B83AA4B3FD(float DeltaTime, float NormalizedTime);
    void Completed_FDAEBDB24C3AD5E8021577B83AA4B3FD(float DeltaTime, float NormalizedTime);
    void MoveToCharacter(class APlayerCharacter* InTarget);
    void ReceiveBeginPlay();
    void BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_0_PathFinished__DelegateSignature(bool success);
    void ExecuteUbergraph_BP_ReturningPromotionKey(int32 EntryPoint);
};

#endif
