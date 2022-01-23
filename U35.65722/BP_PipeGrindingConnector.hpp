#ifndef UE4SS_SDK_BP_PipeGrindingConnector_HPP
#define UE4SS_SDK_BP_PipeGrindingConnector_HPP

class ABP_PipeGrindingConnector_C : public AZipLineConnector
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USpotLightComponent* SpotLight2;
    class USpotLightComponent* SpotLight1;
    class UStaticMeshComponent* SM_BalancingBoard_01;
    class UParticleSystemComponent* P_ZipLine_Connect;
    class UParticleSystemComponent* P_Zipline_Sparks;
    class UStaticMeshComponent* ConnectorMesh;
    class USceneComponent* DefaultSceneRoot;

    void SetConnectorVisible(bool InVisible, bool CallFunc_Not_PreBool_ReturnValue);
    void ReceiveConnected(const FVector& WorldLocation, const FVector& Direction);
    void ReceiveDisconnected();
    void ReceiveUpdateZipLinePoint(const FVector& WorldLocation, const FVector& Directioy, bool Speeding);
    void UpdateLocation(FVector Location, FVector Direction);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_PipeGrindingConnector(int32 EntryPoint, const FVector K2Node_Event_WorldLocation_1, const FVector K2Node_Event_Direction, const FVector K2Node_Event_WorldLocation, const FVector K2Node_Event_Directioy, bool K2Node_Event_Speeding, FVector K2Node_CustomEvent_Location, FVector K2Node_CustomEvent_Direction, FRotator CallFunc_Conv_VectorToRotator_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, FHitResult CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, bool CallFunc_IsFirstPerson_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_IsFirstPerson_ReturnValue_1, FRotator CallFunc_ComposeRotators_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult, FVector CallFunc_GetVelocity_ReturnValue, bool CallFunc_IsFirstPerson_ReturnValue_2, float CallFunc_VSize_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Square_ReturnValue);
};

#endif
