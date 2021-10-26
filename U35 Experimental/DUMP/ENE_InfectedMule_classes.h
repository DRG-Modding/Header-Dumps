// BlueprintGeneratedClass ENE_InfectedMule.ENE_InfectedMule_C
// Size: 0x7a2 (Inherited: 0x6b8)
struct AENE_InfectedMule_C : AConvertedRobot {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UWidgetComponent* Widget; 
	UPROPERTY(BlueprintReadWrite) UBoxComponent* OverlapsPlayerTrigger; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* WakeUp_PointLight; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* P_ElectroPlantBeam; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) USpotLightComponent* SpotLight1; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* Light_TurretGlow; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* Light_Leg4; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* Light_Leg3; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* Light_Leg2; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* Light_Leg1; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* StaticMesh1; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* StaticMesh; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* UseSphere; 
	UPROPERTY(BlueprintReadWrite) UBoxComponent* Box; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* ParasitePoint3; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* ParasitePoint2; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* ParasitePoint1; 
	UPROPERTY(BlueprintReadWrite) UPawnSensingComponent* PawnSensing; 
	UPROPERTY(BlueprintReadWrite) UMaterialInstanceDynamic* LegLightsMat; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* InfectedMuleWaitingForRepair; 
	UPROPERTY(BlueprintReadWrite) UMaterialInstanceDynamic* FloodLightMat; 
	UPROPERTY(BlueprintReadWrite) UMaterialInstanceDynamic* LaserLampMat; 
	UPROPERTY(BlueprintReadWrite) UMaterialInstance* PulsatingLegLightMat; 
	UPROPERTY(BlueprintReadWrite) TArray<AActor*> ActorsInShield; 
	UPROPERTY(BlueprintReadWrite) int32_t PlayersInside; 
	UPROPERTY(BlueprintReadWrite) UFSDAchievement* BetCAchievement; 
	UPROPERTY(BlueprintReadWrite) bool ShowBossHealth; 
	UPROPERTY(BlueprintReadWrite) bool ishealthbarshown; 

	UFUNCTION(BlueprintCallable) void OnRep_ShowBossHealth();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void OnMessageAI(FName TriggerName);
	UFUNCTION(BlueprintCallable) void BndEvt__OverlapsPlayerTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	UFUNCTION(BlueprintCallable) void BndEvt__OverlapsPlayerTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	UFUNCTION(BlueprintCallable) void BP_OnInstroduce();
	UFUNCTION(BlueprintCallable) void BP_OnShieldChanged(bool isGrowing);
	UFUNCTION(BlueprintCallable) void BP_OnStateChanged(enum class ERobotState TeamState);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_InfectedMule(int32_t EntryPoint);
};

