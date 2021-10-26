// BlueprintGeneratedClass BP_GuntowerEvent.BP_GuntowerEvent_C
// Size: 0x46c (Inherited: 0x390)
struct ABP_GuntowerEvent_C : AGuntowerEvent {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* SM_Pillar_Machine_A2B; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* SM_Pillar_Machine_A1B; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* SM_Pillar_Machine_A0B; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* SM_Pillar_Machine_A2; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* SM_Pillar_Machine_A1; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* SM_Pillar_Machine_A0; 
	UPROPERTY(BlueprintReadWrite) UChildActorComponent* ChildActor3; 
	UPROPERTY(BlueprintReadWrite) UChildActorComponent* ChildActor2; 
	UPROPERTY(BlueprintReadWrite) UChildActorComponent* ChildActor1; 
	UPROPERTY(BlueprintReadWrite) UChildActorComponent* ChildActor; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* PathfinderCollision; 
	UPROPERTY(BlueprintReadWrite) URoomCarverComponent* RoomCarver; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Cylinder; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) UOutlineComponent* outline; 
	UPROPERTY(BlueprintReadWrite) UChildActorComponent* ActivationPad2; 
	UPROPERTY(BlueprintReadWrite) UChildActorComponent* ActivationPad1; 
	UPROPERTY(BlueprintReadWrite) UChildActorComponent* ActivationPad; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* P_GunTower_Base_Smoke; 
	UPROPERTY(BlueprintReadWrite) USkeletalMeshComponent* SkeletalMesh; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* StaticMesh; 
	UPROPERTY(BlueprintReadWrite) ULevelGenerationCarverComponent* LevelGenerationCarver; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) UTerrainDetectComponent* TerrainDetect; 
	UPROPERTY(BlueprintReadWrite) int32_t ModuleCount; 
	UPROPERTY(BlueprintReadWrite) AGuntowerModule* FirstModuleType; 
	UPROPERTY(BlueprintReadWrite) float Cooldown; 

	UFUNCTION(BlueprintCallable) void OnModuleExploded(AGuntowerModule* explodedModule);
	UFUNCTION(BlueprintCallable) void OnEventFinished(bool eventSuccess);
	UFUNCTION(BlueprintCallable) void OnEventTriggered();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_GuntowerEvent(int32_t EntryPoint);
};

