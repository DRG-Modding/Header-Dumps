#ifndef UE4SS_SDK_BP_SphereTrigger_HPP
#define UE4SS_SDK_BP_SphereTrigger_HPP

class ABP_SphereTrigger_C : public ABP_TriggerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* Sphere;

    void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_SphereTrigger(int32 EntryPoint);
};

#endif
