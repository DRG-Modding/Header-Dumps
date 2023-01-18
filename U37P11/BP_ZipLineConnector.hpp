#ifndef UE4SS_SDK_BP_ZipLineConnector_HPP
#define UE4SS_SDK_BP_ZipLineConnector_HPP

class ABP_ZipLineConnector_C : public AZipLineConnector
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* P_ZipLine_Connect;
    class UParticleSystemComponent* P_ZipLine_MagneticBeam;
    class UParticleSystemComponent* P_Zipline_Sparks;
    class UStaticMeshComponent* ConnectorMesh;
    class USceneComponent* DefaultSceneRoot;

    void SetConnectorVisible(bool InVisible);
    void ReceiveConnected(const FVector& WorldLocation, const FVector& Direction);
    void ReceiveDisconnected();
    void ReceiveUpdateZipLinePoint(const FVector& WorldLocation, const FVector& Directioy, bool Speeding);
    void UpdateLocation(FVector Location, FVector Direction);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_ZipLineConnector(int32 EntryPoint);
};

#endif
