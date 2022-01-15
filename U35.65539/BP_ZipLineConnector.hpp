#ifndef UE4SS_SDK_BP_ZipLineConnector_HPP
#define UE4SS_SDK_BP_ZipLineConnector_HPP

class ABP_ZipLineConnector_C : AZipLineConnector
{
    FPointerToUberGraphFrame UberGraphFrame;
    UParticleSystemComponent* P_ZipLine_Connect;
    UParticleSystemComponent* P_ZipLine_MagneticBeam;
    UParticleSystemComponent* P_Zipline_Sparks;
    UStaticMeshComponent* ConnectorMesh;
    USceneComponent* DefaultSceneRoot;

    void SetConnectorVisible(bool InVisible, bool CallFunc_Not_PreBool_ReturnValue);
    void ReceiveConnected(const FVector& WorldLocation, const FVector& Direction);
    void ReceiveDisconnected();
    void ReceiveUpdateZipLinePoint(const FVector& WorldLocation, const FVector& Directioy, bool Speeding);
    void UpdateLocation(FVector Location, FVector Direction);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_ZipLineConnector(int32 EntryPoint, FRotator CallFunc_NegateRotator_ReturnValue, const FVector K2Node_Event_WorldLocation_1, const FVector K2Node_Event_Direction, const FVector K2Node_Event_WorldLocation, const FVector K2Node_Event_Directioy, bool K2Node_Event_Speeding, FVector K2Node_CustomEvent_Location, FVector K2Node_CustomEvent_Direction, FRotator CallFunc_Conv_VectorToRotator_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, FHitResult CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, bool CallFunc_IsFirstPerson_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_IsFirstPerson_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, FHitResult CallFunc_K2_AddLocalRotation_SweepHitResult, FHitResult CallFunc_K2_AddLocalRotation_SweepHitResult_1);
}

#endif
