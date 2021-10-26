// BlueprintGeneratedClass DefencePoint_Uplink.DefencePoint_Uplink_C
// Size: 0x318 (Inherited: 0x298)
struct ADefencePoint_Uplink_C : ADefencePointActor_Base_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UChildActorComponent* ChildActor; 
	UPROPERTY(BlueprintReadWrite) UChildActorComponent* OxygenTank02; 
	UPROPERTY(BlueprintReadWrite) UChildActorComponent* OxygenTank01; 
	UPROPERTY(BlueprintReadWrite) UDropToTerrainComponent* DropToTerrain; 
	UPROPERTY(BlueprintReadWrite) UTerrainDetectComponent* TerrainDetect; 
	UPROPERTY(BlueprintReadWrite) UOxygenSourceComponent* OxygenSource; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight2; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight1; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* UplinkScreenMesh1; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* UplinkScreenMesh2; 
	UPROPERTY(BlueprintReadWrite) UBoxComponent* Uplink Collision; 
	UPROPERTY(BlueprintReadWrite) USkeletalMeshComponent* UplinkMesh; 
	UPROPERTY(BlueprintReadWrite) float Disassemble_uplink_dissassemble_8BB753934FA5061C0948A886CF6B0D73; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Disassemble_uplink__Direction_8BB753934FA5061C0948A886CF6B0D73; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Disassemble uplink; 

	UFUNCTION(BlueprintCallable) void Disassemble uplink__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Disassemble uplink__UpdateFunc();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void BndEvt__DefendPointUsable_K2Node_ComponentBoundEvent_0_ProgressSignature__DelegateSignature(float Progress);
	UFUNCTION(BlueprintCallable) void DefenseFail();
	UFUNCTION(BlueprintCallable) void DefenseStart();
	UFUNCTION(BlueprintCallable) void DefenseComplete();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_DefencePoint_Uplink(int32_t EntryPoint);
};

