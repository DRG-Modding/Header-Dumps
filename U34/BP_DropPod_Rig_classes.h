// BlueprintGeneratedClass BP_DropPod_Rig.BP_DropPod_Rig_C
// Size: 0x8d8 (Inherited: 0x83a)
struct ABP_DropPod_Rig_C : ABP_DropPod_Base_C {
	char UnknownData_83A[0x6]; // 0x83a(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x840(0x08)
	struct UCapsuleComponent* ATeamAchievementCollider4; // 0x848(0x08)
	struct UCapsuleComponent* ATeamAchievementCollider3; // 0x850(0x08)
	struct UCapsuleComponent* ATeamAchievementCollider2; // 0x858(0x08)
	struct UCapsuleComponent* ATeamAchievementCollider1; // 0x860(0x08)
	struct UBoxComponent* Box1; // 0x868(0x08)
	struct UAudioComponent* AudioLower; // 0x870(0x08)
	struct UAudioComponent* Audio_1; // 0x878(0x08)
	struct UAudioComponent* DroppodLaunch; // 0x880(0x08)
	struct UBoxComponent* DwarfChecker_1; // 0x888(0x08)
	struct FMulticastInlineDelegate OnLeaveSpacerig; // 0x890(0x10)
	struct TArray<struct APlayerCharacter*> PlayersInside; // 0x8a0(0x10)
	struct UAudioComponent* PlayLeftAudioOnOpenDoor; // 0x8b0(0x08)
	struct UAudioComponent* PlayRightAudioOnOpenDoor; // 0x8b8(0x08)
	struct UAudioComponent* SpaceRigDrillIdle; // 0x8c0(0x08)
	int32_t OldCountdownValue; // 0x8c8(0x04)
	int32_t Amount of barrels in seats; // 0x8cc(0x04)
	struct UFSDAchievement* ATeamAchievement; // 0x8d0(0x08)

	int32_t ActivePlayerCount(); // Function BP_DropPod_Rig.BP_DropPod_Rig_C.ActivePlayerCount
	void ReceiveBeginPlay(); // Function BP_DropPod_Rig.BP_DropPod_Rig_C.ReceiveBeginPlay
	void OnMissionSelected(struct UGeneratedMission* mission); // Function BP_DropPod_Rig.BP_DropPod_Rig_C.OnMissionSelected
	void OnAllDwavesInsidePod(bool AllInside); // Function BP_DropPod_Rig.BP_DropPod_Rig_C.OnAllDwavesInsidePod
	void OnHostInsidePod(bool isInside); // Function BP_DropPod_Rig.BP_DropPod_Rig_C.OnHostInsidePod
	void OnCountdownCompleted(); // Function BP_DropPod_Rig.BP_DropPod_Rig_C.OnCountdownCompleted
	void OnHostTimerChanged(float newTime); // Function BP_DropPod_Rig.BP_DropPod_Rig_C.OnHostTimerChanged
	void BndEvt__ATeamAchievementCollider1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_DropPod_Rig.BP_DropPod_Rig_C.BndEvt__ATeamAchievementCollider1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__ATeamAchievementCollider2_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_DropPod_Rig.BP_DropPod_Rig_C.BndEvt__ATeamAchievementCollider2_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__ATeamAchievementCollider3_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_DropPod_Rig.BP_DropPod_Rig_C.BndEvt__ATeamAchievementCollider3_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__ATeamAchievementCollider4_K2Node_ComponentBoundEvent_8_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_DropPod_Rig.BP_DropPod_Rig_C.BndEvt__ATeamAchievementCollider4_K2Node_ComponentBoundEvent_8_ComponentBeginOverlapSignature__DelegateSignature
	void Check for ATeamAchievement(); // Function BP_DropPod_Rig.BP_DropPod_Rig_C.Check for ATeamAchievement
	void OnCharacterEnter(struct APlayerCharacter* Character); // Function BP_DropPod_Rig.BP_DropPod_Rig_C.OnCharacterEnter
	void OnCharacterExit(struct APlayerCharacter* Character); // Function BP_DropPod_Rig.BP_DropPod_Rig_C.OnCharacterExit
	void ExecuteUbergraph_BP_DropPod_Rig(int32_t EntryPoint); // Function BP_DropPod_Rig.BP_DropPod_Rig_C.ExecuteUbergraph_BP_DropPod_Rig
	void OnLeaveSpacerig__DelegateSignature(); // Function BP_DropPod_Rig.BP_DropPod_Rig_C.OnLeaveSpacerig__DelegateSignature
};

