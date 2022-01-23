#ifndef UE4SS_SDK_BP_FuelLine_Segment_HPP
#define UE4SS_SDK_BP_FuelLine_Segment_HPP

class ABP_FuelLine_Segment_C : public AFuelLineSegment
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UAudioComponent* Audio_Placeing;
    class USphereComponent* UsableSphere;
    TArray<class UMaterialInterface*> MaterialsDefaultEndPost;
    FVector EndLocation;

    void OverrideMaterialByIndex(class UPrimitiveComponent*& InMesh, TArray<class UMaterialInterface*>& InDefaultMaterials, int32 InIndex, class UMaterialInterface* inMaterial, bool Temp_bool_Variable, class UMaterialInterface* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, class UMaterialInterface* K2Node_Select_Default, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
    void OverrideMaterialByName(class UMeshComponent* InMesh, TArray<class UMaterialInterface*>& InDefaultMaterials, FName InMaterialSlotName, class UMaterialInterface* inMaterial, int32 CallFunc_GetMaterialIndex_ReturnValue);
    void UpdateVisualState(class UMaterialInterface* RingMaterialOverride, ETrackBuildPlacementState PlacementState, bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, bool Temp_bool_Variable_1, class UMaterialInterface* Temp_object_Variable_2, class UMaterialInterface* Temp_object_Variable_3, bool Temp_bool_Variable_2, bool CallFunc_GetIsSegmentEndTransformValid_ReturnValue, class UMaterialInterface* K2Node_Select_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UMaterialInterface* K2Node_Select_Default_1, ETrackBuildPlacementState CallFunc_GetPlacementState_ReturnValue, class UMaterialInterface* K2Node_Select_Default_2);
    bool ReceiveCanPlaceAt(const FTransform& InCandidateTransform, class UTrackBuilderConnectPoint* InConnectPointFVector Dir, class ATrackBuilderSegment* CallFunc_GetNextSegment_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, FHitResult CallFunc_SplineComponentSphereTrace_OutHitResult, bool CallFunc_SplineComponentSphereTrace_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
    void UserConstructionScript(TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue);
    void ReceivePlacementStateChanged(ETrackBuildPlacementState NewState);
    void BndEvt__NextSegmentUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool CanUse);
    void ReceiveBeginPlay();
    void ReceivPlacementValidChanged(bool InIsValid);
    void BndEvt__DeconstructHealthComponent_K2Node_ComponentBoundEvent_1_HealthChangedSig__DelegateSignature(float Health);
    void BndEvt__DeconstructHealthComponent_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_BP_FuelLine_Segment(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, ETrackBuildPlacementState K2Node_Event_newState, bool K2Node_ComponentBoundEvent_canUse, ETrackBuildPlacementState CallFunc_GetPlacementState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, FVector CallFunc_ComponentToWorldLocation_ReturnValue, bool K2Node_Event_InIsValid, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UTrackBuilderConnectPoint* CallFunc_GetConnectPoint_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_ComponentToWorldLocation_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, float K2Node_ComponentBoundEvent_health, FVector CallFunc_ComponentToWorldLocation_ReturnValue_2, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1, bool CallFunc_IsAlive_ReturnValue, float CallFunc_GetHealth_ReturnValue, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Heal_ReturnValue);
};

#endif
