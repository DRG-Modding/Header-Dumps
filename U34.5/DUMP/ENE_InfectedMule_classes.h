// BlueprintGeneratedClass ENE_InfectedMule.ENE_InfectedMule_C
// Size: 0x7a2 (Inherited: 0x6b8)
struct AENE_InfectedMule_C : AConvertedRobot {
	FPointerToUberGraphFrame UberGraphFrame; // 0x6b8(0x08)
	UWidgetComponent* Widget; // 0x6c0(0x08)
	UBoxComponent* OverlapsPlayerTrigger; // 0x6c8(0x08)
	UPointLightComponent* WakeUp_PointLight; // 0x6d0(0x08)
	UParticleSystemComponent* P_ElectroPlantBeam; // 0x6d8(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x6e0(0x08)
	USpotLightComponent* SpotLight1; // 0x6e8(0x08)
	UPointLightComponent* Light_TurretGlow; // 0x6f0(0x08)
	UPointLightComponent* Light_Leg4; // 0x6f8(0x08)
	UPointLightComponent* Light_Leg3; // 0x700(0x08)
	UPointLightComponent* Light_Leg2; // 0x708(0x08)
	UPointLightComponent* Light_Leg1; // 0x710(0x08)
	UStaticMeshComponent* StaticMesh1; // 0x718(0x08)
	UStaticMeshComponent* StaticMesh; // 0x720(0x08)
	USphereComponent* UseSphere; // 0x728(0x08)
	UBoxComponent* Box; // 0x730(0x08)
	USceneComponent* ParasitePoint3; // 0x738(0x08)
	USceneComponent* ParasitePoint2; // 0x740(0x08)
	USceneComponent* ParasitePoint1; // 0x748(0x08)
	UPawnSensingComponent* PawnSensing; // 0x750(0x08)
	UMaterialInstanceDynamic* LegLightsMat; // 0x758(0x08)
	UAudioComponent* InfectedMuleWaitingForRepair; // 0x760(0x08)
	UMaterialInstanceDynamic* FloodLightMat; // 0x768(0x08)
	UMaterialInstanceDynamic* LaserLampMat; // 0x770(0x08)
	UMaterialInstance* PulsatingLegLightMat; // 0x778(0x08)
	TArray<AActor*> ActorsInShield; // 0x780(0x10)
	int32_t PlayersInside; // 0x790(0x04)
	UFSDAchievement* BetCAchievement; // 0x798(0x08)
	bool ShowBossHealth; // 0x7a0(0x01)
	bool ishealthbarshown; // 0x7a1(0x01)

	void OnRep_ShowBossHealth();
	void ReceiveBeginPlay();
	void OnMessageAI(FName TriggerName);
	void BndEvt__OverlapsPlayerTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void BndEvt__OverlapsPlayerTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	void BP_OnInstroduce();
	void BP_OnShieldChanged(bool isGrowing);
	void BP_OnStateChanged(enum class ERobotState TeamState);
	void ExecuteUbergraph_ENE_InfectedMule(int32_t EntryPoint);
};

