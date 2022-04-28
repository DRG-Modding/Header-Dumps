#ifndef UE4SS_SDK_BP_SeeYouInHellField_HPP
#define UE4SS_SDK_BP_SeeYouInHellField_HPP

class ABP_SeeYouInHellField_C : public ABP_Grenade_IFG_Area_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* FearSphere;

    void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__FearSphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void FearMe(class AActor* FearTarget);
    void ExecuteUbergraph_BP_SeeYouInHellField(int32 EntryPoint);
};

#endif
