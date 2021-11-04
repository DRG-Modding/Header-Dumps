// BlueprintGeneratedClass BP_DropPod_Rig.BP_DropPod_Rig_C
// Size: 0x900 (Inherited: 0x83a)
struct ABP_DropPod_Rig_C : ABP_DropPod_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x840(0x08)
	UParticleSystemComponent* ParticleSystem; // 0x848(0x08)
	USphereComponent* Sphere; // 0x850(0x08)
	USpotLightComponent* SpotLight_Thruster; // 0x858(0x08)
	UPointLightComponent* PointLight_Thruster; // 0x860(0x08)
	UStaticMeshComponent* ThrusterPlasma; // 0x868(0x08)
	UCapsuleComponent* ATeamAchievementCollider4; // 0x870(0x08)
	UCapsuleComponent* ATeamAchievementCollider3; // 0x878(0x08)
	UCapsuleComponent* ATeamAchievementCollider2; // 0x880(0x08)
	UCapsuleComponent* ATeamAchievementCollider1; // 0x888(0x08)
	UBoxComponent* Box1; // 0x890(0x08)
	UAudioComponent* AudioLower; // 0x898(0x08)
	UAudioComponent* Audio_1; // 0x8a0(0x08)
	UAudioComponent* DroppodLaunch; // 0x8a8(0x08)
	UBoxComponent* DwarfChecker_1; // 0x8b0(0x08)
	FMulticastInlineDelegate OnLeaveSpacerig; // 0x8b8(0x10)
	TArray<APlayerCharacter*> PlayersInside; // 0x8c8(0x10)
	UAudioComponent* PlayLeftAudioOnOpenDoor; // 0x8d8(0x08)
	UAudioComponent* PlayRightAudioOnOpenDoor; // 0x8e0(0x08)
	UAudioComponent* SpaceRigDrillIdle; // 0x8e8(0x08)
	int32_t OldCountdownValue; // 0x8f0(0x04)
	int32_t Amount of barrels in seats; // 0x8f4(0x04)
	UFSDAchievement* ATeamAchievement; // 0x8f8(0x08)

	int32_t ActivePlayerCount();
	void ReceiveBeginPlay();
	void OnMissionSelected(UGeneratedMission* mission);
	void OnAllDwavesInsidePod(bool AllInside);
	void OnHostInsidePod(bool isInside);
	void OnCountdownCompleted();
	void OnHostTimerChanged(float newTime);
	void BndEvt__ATeamAchievementCollider1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void BndEvt__ATeamAchievementCollider2_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void BndEvt__ATeamAchievementCollider3_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void BndEvt__ATeamAchievementCollider4_K2Node_ComponentBoundEvent_8_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void Check for ATeamAchievement();
	void OnCharacterEnter(APlayerCharacter* Character);
	void OnCharacterExit(APlayerCharacter* Character);
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void ExecuteUbergraph_BP_DropPod_Rig(int32_t EntryPoint);
	void OnLeaveSpacerig__DelegateSignature();
};

