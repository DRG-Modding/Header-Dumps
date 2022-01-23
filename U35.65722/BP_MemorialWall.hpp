#ifndef UE4SS_SDK_BP_MemorialWall_HPP
#define UE4SS_SDK_BP_MemorialWall_HPP

class ABP_MemorialWall_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* Audio;
    class USphereComponent* Sphere;
    class USphereComponent* DanceSphere;
    class UStaticMeshComponent* Cube;
    class UWidgetComponent* Widget;
    class USceneComponent* DefaultSceneRoot;
    bool IsControlled;
    float FastSpeed;
    float SlowSpeed;

    void SetFastScrollSpeed(bool flag, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UConsoleScreenMemorialWall_C* K2Node_DynamicCast_AsConsole_Screen_Memorial_Wall, bool K2Node_DynamicCast_bSuccess);
    void SetIsControlled();
    void ReceiveBeginPlay();
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void BndEvt__DanceSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__DanceSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_MemorialWall(int32 EntryPoint, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class AActor* K2Node_Event_OtherActor_1, class AActor* K2Node_Event_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult);
};

#endif
