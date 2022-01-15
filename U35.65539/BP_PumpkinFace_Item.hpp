#ifndef UE4SS_SDK_BP_PumpkinFace_Item_HPP
#define UE4SS_SDK_BP_PumpkinFace_Item_HPP

class ABP_PumpkinFace_Item_C : ABP_Pumpkin_Item_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    USphereComponent* ProximityTrigger;
    UPointLightComponent* PointLight;
    float Timeline_0_LightIntensity_7354DC9243CD117360DDC3823BE25B3E;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_7354DC9243CD117360DDC3823BE25B3E;
    UTimelineComponent* Timeline_0;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_PumpkinFace_Item(int32 EntryPoint, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, TArray<AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
}

#endif
