// BlueprintGeneratedClass ENE_InfectedMule.ENE_InfectedMule_C
// Size: 0x7a2 (Inherited: 0x6b8)
struct AENE_InfectedMule_C : AConvertedRobot {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6b8(0x08)
	struct UWidgetComponent* Widget; // 0x6c0(0x08)
	struct UBoxComponent* OverlapsPlayerTrigger; // 0x6c8(0x08)
	struct UPointLightComponent* WakeUp_PointLight; // 0x6d0(0x08)
	struct UParticleSystemComponent* P_ElectroPlantBeam; // 0x6d8(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x6e0(0x08)
	struct USpotLightComponent* SpotLight1; // 0x6e8(0x08)
	struct UPointLightComponent* Light_TurretGlow; // 0x6f0(0x08)
	struct UPointLightComponent* Light_Leg4; // 0x6f8(0x08)
	struct UPointLightComponent* Light_Leg3; // 0x700(0x08)
	struct UPointLightComponent* Light_Leg2; // 0x708(0x08)
	struct UPointLightComponent* Light_Leg1; // 0x710(0x08)
	struct UStaticMeshComponent* StaticMesh1; // 0x718(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x720(0x08)
	struct USphereComponent* UseSphere; // 0x728(0x08)
	struct UBoxComponent* Box; // 0x730(0x08)
	struct USceneComponent* ParasitePoint3; // 0x738(0x08)
	struct USceneComponent* ParasitePoint2; // 0x740(0x08)
	struct USceneComponent* ParasitePoint1; // 0x748(0x08)
	struct UPawnSensingComponent* PawnSensing; // 0x750(0x08)
	struct UMaterialInstanceDynamic* LegLightsMat; // 0x758(0x08)
	struct UAudioComponent* InfectedMuleWaitingForRepair; // 0x760(0x08)
	struct UMaterialInstanceDynamic* FloodLightMat; // 0x768(0x08)
	struct UMaterialInstanceDynamic* LaserLampMat; // 0x770(0x08)
	struct UMaterialInstance* PulsatingLegLightMat; // 0x778(0x08)
	struct TArray<struct AActor*> ActorsInShield; // 0x780(0x10)
	int32_t PlayersInside; // 0x790(0x04)
	char UnknownData_794[0x4]; // 0x794(0x04)
	struct UFSDAchievement* BetCAchievement; // 0x798(0x08)
	bool ShowBossHealth; // 0x7a0(0x01)
	bool ishealthbarshown; // 0x7a1(0x01)

	void OnRep_ShowBossHealth(); // Function ENE_InfectedMule.ENE_InfectedMule_C.OnRep_ShowBossHealth
	void ReceiveBeginPlay(); // Function ENE_InfectedMule.ENE_InfectedMule_C.ReceiveBeginPlay
	void OnMessageAI(struct FName TriggerName); // Function ENE_InfectedMule.ENE_InfectedMule_C.OnMessageAI
	void BndEvt__OverlapsPlayerTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function ENE_InfectedMule.ENE_InfectedMule_C.BndEvt__OverlapsPlayerTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__OverlapsPlayerTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function ENE_InfectedMule.ENE_InfectedMule_C.BndEvt__OverlapsPlayerTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	void BP_OnInstroduce(); // Function ENE_InfectedMule.ENE_InfectedMule_C.BP_OnInstroduce
	void BP_OnShieldChanged(bool isGrowing); // Function ENE_InfectedMule.ENE_InfectedMule_C.BP_OnShieldChanged
	void BP_OnStateChanged(enum class ERobotState TeamState); // Function ENE_InfectedMule.ENE_InfectedMule_C.BP_OnStateChanged
	void ExecuteUbergraph_ENE_InfectedMule(int32_t EntryPoint); // Function ENE_InfectedMule.ENE_InfectedMule_C.ExecuteUbergraph_ENE_InfectedMule
};

