#ifndef UE4SS_SDK_BP_MemorialWall_HPP
#define UE4SS_SDK_BP_MemorialWall_HPP

class ABP_MemorialWall_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* audio;
    class USphereComponent* Sphere;
    class USphereComponent* DanceSphere;
    class UStaticMeshComponent* Cube;
    class UWidgetComponent* Widget;
    class USceneComponent* DefaultSceneRoot;
    bool IsControlled;
    float FastSpeed;
    float SlowSpeed;

    void SetFastScrollSpeed(bool flag);
    void SetIsControlled();
    void ReceiveBeginPlay();
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void BndEvt__DanceSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__DanceSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_MemorialWall(int32 EntryPoint);
};

#endif
