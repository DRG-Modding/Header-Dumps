#ifndef UE4SS_SDK_BP_SeeYouInHellField_HPP
#define UE4SS_SDK_BP_SeeYouInHellField_HPP

class ABP_SeeYouInHellField_C : public ABP_Grenade_IFG_Area_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* FearSphere;

    void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__FearSphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void FearMe(class AActor* FearTarget);
    void ExecuteUbergraph_BP_SeeYouInHellField(int32 EntryPoint, bool CallFunc_RandomBoolWithWeight_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep_1, const FHitResult K2Node_ComponentBoundEvent_SweepResult_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, FVector CallFunc_K2_GetActorLocation_ReturnValue, class AActor* K2Node_CustomEvent_FearTarget, bool CallFunc_HasAuthority_ReturnValue_1, class AFSDPawn* K2Node_DynamicCast_AsFSDPawn, bool K2Node_DynamicCast_bSuccess);
};

#endif
