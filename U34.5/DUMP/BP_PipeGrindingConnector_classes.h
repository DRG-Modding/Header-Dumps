// BlueprintGeneratedClass BP_PipeGrindingConnector.BP_PipeGrindingConnector_C
// Size: 0x290 (Inherited: 0x250)
struct ABP_PipeGrindingConnector_C : AZipLineConnector {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	USpotLightComponent* SpotLight2; // 0x258(0x08)
	USpotLightComponent* SpotLight1; // 0x260(0x08)
	UStaticMeshComponent* SM_BalancingBoard_01; // 0x268(0x08)
	UParticleSystemComponent* P_ZipLine_Connect; // 0x270(0x08)
	UParticleSystemComponent* P_Zipline_Sparks; // 0x278(0x08)
	UStaticMeshComponent* ConnectorMesh; // 0x280(0x08)
	USceneComponent* DefaultSceneRoot; // 0x288(0x08)

	void SetConnectorVisible(bool InVisible);
	void ReceiveConnected(FVector WorldLocation, FVector Direction);
	void ReceiveDisconnected();
	void ReceiveUpdateZipLinePoint(FVector WorldLocation, FVector Directioy, bool Speeding);
	void UpdateLocation(FVector Location, FVector Direction);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_PipeGrindingConnector(int32_t EntryPoint);
};

