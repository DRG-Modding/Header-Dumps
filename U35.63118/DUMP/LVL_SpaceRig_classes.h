// BlueprintGeneratedClass LVL_SpaceRig.LVL_SpaceRig_C
// Size: 0x400 (Inherited: 0x228)
struct ALVL_SpaceRig_C : ALevelScriptActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	float SunSpeed; // 0x230(0x04)
	int32_t CurrentNumberOfBarrelsInDroppod; // 0x234(0x04)
	int32_t CurrentNumberOfBarrels; // 0x238(0x04)
	int32_t DesiredBarrelNumber; // 0x23c(0x04)
	int32_t MedbayBantersPlayed; // 0x240(0x04)
	int32_t Players spawned; // 0x244(0x04)
	UFSDAchievement* TimeWellSpentAchievement; // 0x248(0x08)
	UFSDAchievement* ForeignObjectsInTheLaunchbay; // 0x250(0x08)
	TArray<UUserWidget*> Preload_Widgets; // 0x258(0x10)
	AStaticMeshActor* ForceShield_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x268(0x08)
	AEmitter* P_SpaceRig_Smoke_2_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x270(0x08)
	AStaticMeshActor* SaluteStatue_B2_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x278(0x08)
	AStaticMeshActor* Statue_Engineer_5_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x280(0x08)
	AStaticMeshActor* Statue_Driller_2_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x288(0x08)
	AStaticMeshActor* Statue_Gunner_8_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x290(0x08)
	ASkeletalMeshActor* SK_DonkeyMK5_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x298(0x08)
	AStaticMeshActor* Statue_Scout_11_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x2a0(0x08)
	AStaticMeshActor* SaluteStatue_B_14_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x2a8(0x08)
	AStaticMeshActor* Plane_2_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x2b0(0x08)
	AStaticMeshActor* Plane2_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x2b8(0x08)
	AStaticMeshActor* Plane3_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x2c0(0x08)
	AStaticMeshActor* Plane4_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x2c8(0x08)
	AStaticMeshActor* Plane5_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x2d0(0x08)
	AStaticMeshActor* Plane6_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x2d8(0x08)
	AStaticMeshActor* SaluteStatue_A_2_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x2e0(0x08)
	AStaticMeshActor* Plane7_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x2e8(0x08)
	AStaticMeshActor* Plane8_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x2f0(0x08)
	ASign_MemorialUnlock_C* Memorial_Sign_DRILLERSTATUE_lvl10_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x2f8(0x08)
	ASign_MemorialUnlock_C* Memorial_Sign_ENGINEERSTATUE_lvl10_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x300(0x08)
	ASign_MemorialUnlock_C* Memorial_Sign_GUNNERSTATUE_lvl10_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x308(0x08)
	ASign_MemorialUnlock_C* Memorial_Sign_SCOUTSTATUE_lvl10_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x310(0x08)
	ASign_MemorialUnlock_C* Memorial_Sign_MULESTATUE_Rank6_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x318(0x08)
	ASign_MemorialUnlock_C* Memorial_Sign_POSTER_Rank3_L_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x320(0x08)
	ASign_MemorialUnlock_C* Memorial_Sign_POSTER_Rank3_R_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x328(0x08)
	ASign_MemorialUnlock_C* Memorial_Sign_POSTER_Rank5_L_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x330(0x08)
	ASign_MemorialUnlock_C* Memorial_Sign_POSTER_Rank5_R_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x338(0x08)
	ASign_MemorialUnlock_C* Memorial_Sign_POSTER_Rank7_R_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x340(0x08)
	ASign_MemorialUnlock_C* Memorial_Sign_POSTER_Rank7_L_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x348(0x08)
	ASign_MemorialUnlock_C* Memorial_Sign_POSTER_Rank4_R_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x350(0x08)
	ASign_MemorialUnlock_C* Memorial_Sign_POSTER_Rank4_L_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x358(0x08)
	ASign_MemorialUnlock_C* Memorial_Sign_GIANTSTATUE_Rank8_R_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x360(0x08)
	ASign_MemorialUnlock_C* Memorial_Sign_GIANTSTATUE_Rank8_L_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x368(0x08)
	ASign_MemorialUnlock_C* Memorial_Sign_GOLDDRILLERSTATUE_lvl20_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x370(0x08)
	ASign_MemorialUnlock_C* Memorial_Sign_GOLDENGINEERSTATUE_lvl20_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x378(0x08)
	ASign_MemorialUnlock_C* Memorial_Sign_GOLDGUNNERSTATUE_lvl20_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x380(0x08)
	ASign_MemorialUnlock_C* Memorial_Sign_GOLDSCOUTSTATUE_lvl20_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x388(0x08)
	ASign_MemorialUnlock_C* Memorial_Sign_GOLDSALUTINGSTATUE_Rank20_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x390(0x08)
	ASign_MemorialUnlock_C* Memorial_Sign_GOLDMULESTATUE_Rank12_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x398(0x08)
	ASign_MemorialUnlock_C* Memorial_Sign_GOLDGIANTSTATUES_Rank15_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x3a0(0x08)
	AStaticMeshActor* SM_DonkeyStatic01_4_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x3a8(0x08)
	APointLight* Light_Dropchute_BlueLight_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x3b0(0x08)
	ABP_DropPod_Rig_C* BP_DropPod_Rig_2_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x3b8(0x08)
	ASkeletalMeshActor* SK_Banner3_EdGraph_0_RefProperty; // 0x3c0(0x08)
	ABP_Phys_Newsstand_FreeBeer_C* BP_Phys_Newsstand_FreeBeer4_EdGraph_0_RefProperty; // 0x3c8(0x08)
	ABP_Phys_Newsstand_FreeBeer_C* BP_Phys_Newsstand_FreeBeer3_EdGraph_0_RefProperty; // 0x3d0(0x08)
	ABP_Phys_Newsstand_FreeBeer_C* BP_Phys_Newsstand_FreeBeer2_EdGraph_0_RefProperty; // 0x3d8(0x08)
	ABP_Phys_Newsstand_FreeBeer_C* BP_Phys_Newsstand_FreeBeer_2_EdGraph_0_RefProperty; // 0x3e0(0x08)
	ABP_ConfettiPlane_C* BP_ConfettiPlane3_EdGraph_0_RefProperty; // 0x3e8(0x08)
	ABP_ConfettiPlane_C* BP_ConfettiPlane2_EdGraph_0_RefProperty; // 0x3f0(0x08)
	ABP_ConfettiPlane_C* BP_ConfettiPlane_4_EdGraph_0_RefProperty; // 0x3f8(0x08)

	void Set HolidayHalloween Active(bool Is Active);
	void Set Beer Event Active(bool Is Active);
	void ReceiveBeginPlay();
	void OnLeaveSpacerig_Event_1();
	void BndEvt__DockingBayTriggerBox_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(AActor* OverlappedActor, AActor* OtherActor);
	void BndEvt__InsideDroppodTriggerBox_K2Node_ActorBoundEvent_4_ActorBeginOverlapSignature__DelegateSignature(AActor* OverlappedActor, AActor* OtherActor);
	void BndEvt__DockingBayTriggerBox_AllbarrelsIn_K2Node_ActorBoundEvent_18_ActorBeginOverlapSignature__DelegateSignature(AActor* OverlappedActor, AActor* OtherActor);
	void BndEvt__DockingBayTriggerBox_AllbarrelsIn_K2Node_ActorBoundEvent_48_ActorEndOverlapSignature__DelegateSignature(AActor* OverlappedActor, AActor* OtherActor);
	void BndEvt__Start_10_K2Node_ActorBoundEvent_0_PlayerSpawnInHub__DelegateSignature(AFSDPlayerController* Controller);
	void BndEvt__Start_14_K2Node_ActorBoundEvent_2_PlayerSpawnInHub__DelegateSignature(AFSDPlayerController* Controller);
	void BndEvt__Start_12_K2Node_ActorBoundEvent_3_PlayerSpawnInHub__DelegateSignature(AFSDPlayerController* Controller);
	void BndEvt__Start_16_K2Node_ActorBoundEvent_5_PlayerSpawnInHub__DelegateSignature(AFSDPlayerController* Controller);
	void Play medbay banter(AFSDPlayerController* Player controller);
	void BndEvt__InsideDroppodTriggerBox_AllBarrelsIn_K2Node_ActorBoundEvent_6_ActorBeginOverlapSignature__DelegateSignature(AActor* OverlappedActor, AActor* OtherActor);
	void BndEvt__InsideDroppodTriggerBox_AllBarrelsIn_K2Node_ActorBoundEvent_7_ActorEndOverlapSignature__DelegateSignature(AActor* OverlappedActor, AActor* OtherActor);
	void OnFreeBeerRewardChanged(bool IsBeersFree);
	void OnCountdownChanged_Event_1(bool Active);
	void StreamSubLevels();
	void ExecuteUbergraph_LVL_SpaceRig(int32_t EntryPoint);
};

