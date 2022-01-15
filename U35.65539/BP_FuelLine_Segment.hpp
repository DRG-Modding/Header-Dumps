#ifndef UE4SS_SDK_BP_FuelLine_Segment_HPP
#define UE4SS_SDK_BP_FuelLine_Segment_HPP

class ABP_FuelLine_Segment_C : UFuelLineSegment
{
    FPointerToUberGraphFrame UberGraphFrame;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    UAudioComponent* Audio_Placeing;
    USphereComponent* UsableSphere;
    TArray<UMaterialInterface*> MaterialsDefaultEndPost;
    FVector EndLocation;

    void OverrideMaterialByIndex(UPrimitiveComponent*& InMesh, TArray<UMaterialInterface*>& InDefaultMaterials, int32 InIndex, UMaterialInterface* inMaterial, bool Temp_bool_Variable, UMaterialInterface* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, UMaterialInterface* K2Node_Select_Default, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
    void OverrideMaterialByName(UMeshComponent* InMesh, TArray<UMaterialInterface*>& InDefaultMaterials, FName InMaterialSlotName, UMaterialInterface* inMaterial, int32 CallFunc_GetMaterialIndex_ReturnValue);
    void UpdateVisualState(UMaterialInterface* RingMaterialOverride, ETrackBuildPlacementState PlacementState, bool Temp_bool_Variable, UMaterialInterface* Temp_object_Variable, UMaterialInterface* Temp_object_Variable_1, bool Temp_bool_Variable_1, UMaterialInterface* Temp_object_Variable_2, UMaterialInterface* Temp_object_Variable_3, bool Temp_bool_Variable_2, bool CallFunc_GetIsSegmentEndTransformValid_ReturnValue, UMaterialInterface* K2Node_Select_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UMaterialInterface* K2Node_Select_Default_1, ETrackBuildPlacementState CallFunc_GetPlacementState_ReturnValue, UMaterialInterface* K2Node_Select_Default_2);
    bool ReceiveCanPlaceAt(const FTransform& InCandidateTransform, UTrackBuilderConnectPoint* InConnectPointFVector Dir, ATrackBuilderSegment* CallFunc_GetNextSegment_ReturnValue, TArray<AActor*>& K2Node_MakeArray_Array, FHitResult CallFunc_SplineComponentSphereTrace_OutHitResult, bool CallFunc_SplineComponentSphereTrace_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
    void UserConstructionScript(TArray<UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue);
    void ReceivePlacementStateChanged(ETrackBuildPlacementState NewState);
    void BndEvt__NextSegmentUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool CanUse);
    void ReceiveBeginPlay();
    void ReceivPlacementValidChanged(bool InIsValid);
    void BndEvt__DeconstructHealthComponent_K2Node_ComponentBoundEvent_1_HealthChangedSig__DelegateSignature(float Health);
    void BndEvt__DeconstructHealthComponent_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_BP_FuelLine_Segment(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, ETrackBuildPlacementState K2Node_Event_newState, bool K2Node_ComponentBoundEvent_canUse, ETrackBuildPlacementState CallFunc_GetPlacementState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, FVector CallFunc_ComponentToWorldLocation_ReturnValue, bool K2Node_Event_InIsValid, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, UTrackBuilderConnectPoint* CallFunc_GetConnectPoint_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_ComponentToWorldLocation_ReturnValue_1, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, float K2Node_ComponentBoundEvent_health, FVector CallFunc_ComponentToWorldLocation_ReturnValue_2, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1, bool CallFunc_IsAlive_ReturnValue, float CallFunc_GetHealth_ReturnValue, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Heal_ReturnValue);
}

#endif
