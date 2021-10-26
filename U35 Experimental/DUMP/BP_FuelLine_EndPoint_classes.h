// BlueprintGeneratedClass BP_FuelLine_EndPoint.BP_FuelLine_EndPoint_C
// Size: 0x252 (Inherited: 0x230)
struct ABP_FuelLine_EndPoint_C : AFuelLineEndPoint {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* P_Extractor_PipeLinkUp; 
	UPROPERTY(BlueprintReadWrite) UMaterialInterface* DefaultRingMaterial; 
	UPROPERTY(BlueprintReadWrite) bool Pinging; 
	UPROPERTY(BlueprintReadWrite) bool PlacementValid; 

	UFUNCTION(BlueprintCallable) void UpdateState();
	UFUNCTION(BlueprintCallable) void UserConstructionScript();
	UFUNCTION(BlueprintCallable) void ReceivePing(bool InValidPlacement);
	UFUNCTION(BlueprintCallable) void BndEvt__ConnectPoint_K2Node_ComponentBoundEvent_0_ConnectionDelegate__DelegateSignature(UTrackBuilderConnectPoint* InConnectPoint, ATrackBuilderSegment* InSegment);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void PingAudio(bool InNewPing, bool InPlacementValidChanged);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_FuelLine_EndPoint(int32_t EntryPoint);
};

