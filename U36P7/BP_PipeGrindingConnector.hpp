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

    void SetConnectorVisible(bool InVisible);
    void ReceiveConnected(const FVector& WorldLocation, const FVector& Direction);
    void ReceiveDisconnected();
    void ReceiveUpdateZipLinePoint(const FVector& WorldLocation, const FVector& Directioy, bool Speeding);
    void UpdateLocation(FVector Location, FVector Direction);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_PipeGrindingConnector(int32 EntryPoint);
};

#endif
