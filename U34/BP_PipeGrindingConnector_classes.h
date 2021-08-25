// BlueprintGeneratedClass BP_PipeGrindingConnector.BP_PipeGrindingConnector_C
// Size: 0x290 (Inherited: 0x250)
struct ABP_PipeGrindingConnector_C : AZipLineConnector {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct USpotLightComponent* SpotLight2; // 0x258(0x08)
	struct USpotLightComponent* SpotLight1; // 0x260(0x08)
	struct UStaticMeshComponent* SM_BalancingBoard_01; // 0x268(0x08)
	struct UParticleSystemComponent* P_ZipLine_Connect; // 0x270(0x08)
	struct UParticleSystemComponent* P_Zipline_Sparks; // 0x278(0x08)
	struct UStaticMeshComponent* ConnectorMesh; // 0x280(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x288(0x08)

	void SetConnectorVisible(bool InVisible); // Function BP_PipeGrindingConnector.BP_PipeGrindingConnector_C.SetConnectorVisible
	void ReceiveConnected(struct FVector WorldLocation, struct FVector Direction); // Function BP_PipeGrindingConnector.BP_PipeGrindingConnector_C.ReceiveConnected
	void ReceiveDisconnected(); // Function BP_PipeGrindingConnector.BP_PipeGrindingConnector_C.ReceiveDisconnected
	void ReceiveUpdateZipLinePoint(struct FVector WorldLocation, struct FVector Directioy, bool Speeding); // Function BP_PipeGrindingConnector.BP_PipeGrindingConnector_C.ReceiveUpdateZipLinePoint
	void UpdateLocation(struct FVector Location, struct FVector Direction); // Function BP_PipeGrindingConnector.BP_PipeGrindingConnector_C.UpdateLocation
	void ReceiveBeginPlay(); // Function BP_PipeGrindingConnector.BP_PipeGrindingConnector_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_PipeGrindingConnector(int32_t EntryPoint); // Function BP_PipeGrindingConnector.BP_PipeGrindingConnector_C.ExecuteUbergraph_BP_PipeGrindingConnector
};

