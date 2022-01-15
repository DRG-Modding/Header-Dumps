#ifndef UE4SS_SDK_BP_MemorialWall_HPP
#define UE4SS_SDK_BP_MemorialWall_HPP

class ABP_MemorialWall_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAudioComponent* Audio;
    USphereComponent* Sphere;
    USphereComponent* DanceSphere;
    UStaticMeshComponent* Cube;
    UWidgetComponent* Widget;
    USceneComponent* DefaultSceneRoot;
    bool IsControlled;
    float FastSpeed;
    float SlowSpeed;

    void SetFastScrollSpeed(bool flag, UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, UConsoleScreenMemorialWall_C* K2Node_DynamicCast_AsConsole_Screen_Memorial_Wall, bool K2Node_DynamicCast_bSuccess);
    void SetIsControlled();
    void ReceiveBeginPlay();
    void ReceiveActorEndOverlap(AActor* OtherActor);
    void ReceiveActorBeginOverlap(AActor* OtherActor);
    void BndEvt__DanceSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__DanceSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_MemorialWall(int32 EntryPoint, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, AActor* K2Node_Event_OtherActor_1, AActor* K2Node_Event_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult);
}

#endif
