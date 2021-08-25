// BlueprintGeneratedClass LVL_SpaceRig.LVL_SpaceRig_C
// Size: 0x400 (Inherited: 0x228)
struct ALVL_SpaceRig_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	float SunSpeed; // 0x230(0x04)
	int32_t CurrentNumberOfBarrelsInDroppod; // 0x234(0x04)
	int32_t CurrentNumberOfBarrels; // 0x238(0x04)
	int32_t DesiredBarrelNumber; // 0x23c(0x04)
	int32_t MedbayBantersPlayed; // 0x240(0x04)
	int32_t Players spawned; // 0x244(0x04)
	struct UFSDAchievement* TimeWellSpentAchievement; // 0x248(0x08)
	struct UFSDAchievement* ForeignObjectsInTheLaunchbay; // 0x250(0x08)
	struct TArray<struct UUserWidget*> Preload_Widgets; // 0x258(0x10)
	struct AStaticMeshActor* ForceShield_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x268(0x08)
	struct AEmitter* P_SpaceRig_Smoke_2_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x270(0x08)
	struct AStaticMeshActor* SaluteStatue_B2_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x278(0x08)
	struct AStaticMeshActor* Statue_Engineer_5_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x280(0x08)
	struct AStaticMeshActor* Statue_Driller_2_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x288(0x08)
	struct AStaticMeshActor* Statue_Gunner_8_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x290(0x08)
	struct ASkeletalMeshActor* SK_DonkeyMK5_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x298(0x08)
	struct AStaticMeshActor* Statue_Scout_11_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x2a0(0x08)
	struct AStaticMeshActor* SaluteStatue_B_14_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x2a8(0x08)
	struct AStaticMeshActor* Plane_2_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x2b0(0x08)
	struct AStaticMeshActor* Plane2_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x2b8(0x08)
	struct AStaticMeshActor* Plane3_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x2c0(0x08)
	struct AStaticMeshActor* Plane4_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x2c8(0x08)
	struct AStaticMeshActor* Plane5_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x2d0(0x08)
	struct AStaticMeshActor* Plane6_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x2d8(0x08)
	struct AStaticMeshActor* SaluteStatue_A_2_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x2e0(0x08)
	struct AStaticMeshActor* Plane7_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x2e8(0x08)
	struct AStaticMeshActor* Plane8_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x2f0(0x08)
	struct ASign_MemorialUnlock_C* Memorial_Sign_DRILLERSTATUE_lvl10_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x2f8(0x08)
	struct ASign_MemorialUnlock_C* Memorial_Sign_ENGINEERSTATUE_lvl10_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x300(0x08)
	struct ASign_MemorialUnlock_C* Memorial_Sign_GUNNERSTATUE_lvl10_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x308(0x08)
	struct ASign_MemorialUnlock_C* Memorial_Sign_SCOUTSTATUE_lvl10_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x310(0x08)
	struct ASign_MemorialUnlock_C* Memorial_Sign_MULESTATUE_Rank6_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x318(0x08)
	struct ASign_MemorialUnlock_C* Memorial_Sign_POSTER_Rank3_L_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x320(0x08)
	struct ASign_MemorialUnlock_C* Memorial_Sign_POSTER_Rank3_R_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x328(0x08)
	struct ASign_MemorialUnlock_C* Memorial_Sign_POSTER_Rank5_L_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x330(0x08)
	struct ASign_MemorialUnlock_C* Memorial_Sign_POSTER_Rank5_R_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x338(0x08)
	struct ASign_MemorialUnlock_C* Memorial_Sign_POSTER_Rank7_R_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x340(0x08)
	struct ASign_MemorialUnlock_C* Memorial_Sign_POSTER_Rank7_L_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x348(0x08)
	struct ASign_MemorialUnlock_C* Memorial_Sign_POSTER_Rank4_R_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x350(0x08)
	struct ASign_MemorialUnlock_C* Memorial_Sign_POSTER_Rank4_L_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x358(0x08)
	struct ASign_MemorialUnlock_C* Memorial_Sign_GIANTSTATUE_Rank8_R_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x360(0x08)
	struct ASign_MemorialUnlock_C* Memorial_Sign_GIANTSTATUE_Rank8_L_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x368(0x08)
	struct ASign_MemorialUnlock_C* Memorial_Sign_GOLDDRILLERSTATUE_lvl20_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x370(0x08)
	struct ASign_MemorialUnlock_C* Memorial_Sign_GOLDENGINEERSTATUE_lvl20_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x378(0x08)
	struct ASign_MemorialUnlock_C* Memorial_Sign_GOLDGUNNERSTATUE_lvl20_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x380(0x08)
	struct ASign_MemorialUnlock_C* Memorial_Sign_GOLDSCOUTSTATUE_lvl20_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x388(0x08)
	struct ASign_MemorialUnlock_C* Memorial_Sign_GOLDSALUTINGSTATUE_Rank20_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x390(0x08)
	struct ASign_MemorialUnlock_C* Memorial_Sign_GOLDMULESTATUE_Rank12_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x398(0x08)
	struct ASign_MemorialUnlock_C* Memorial_Sign_GOLDGIANTSTATUES_Rank15_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x3a0(0x08)
	struct AStaticMeshActor* SM_DonkeyStatic01_4_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x3a8(0x08)
	struct APointLight* Light_Dropchute_BlueLight_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x3b0(0x08)
	struct ABP_DropPod_Rig_C* BP_DropPod_Rig_2_ExecuteUbergraph_LVL_SpaceRig_RefProperty; // 0x3b8(0x08)
	struct ASkeletalMeshActor* SK_Banner3_EdGraph_0_RefProperty; // 0x3c0(0x08)
	struct ABP_Phys_Newsstand_FreeBeer_C* BP_Phys_Newsstand_FreeBeer4_EdGraph_0_RefProperty; // 0x3c8(0x08)
	struct ABP_Phys_Newsstand_FreeBeer_C* BP_Phys_Newsstand_FreeBeer3_EdGraph_0_RefProperty; // 0x3d0(0x08)
	struct ABP_Phys_Newsstand_FreeBeer_C* BP_Phys_Newsstand_FreeBeer2_EdGraph_0_RefProperty; // 0x3d8(0x08)
	struct ABP_Phys_Newsstand_FreeBeer_C* BP_Phys_Newsstand_FreeBeer_2_EdGraph_0_RefProperty; // 0x3e0(0x08)
	struct ABP_ConfettiPlane_C* BP_ConfettiPlane3_EdGraph_0_RefProperty; // 0x3e8(0x08)
	struct ABP_ConfettiPlane_C* BP_ConfettiPlane2_EdGraph_0_RefProperty; // 0x3f0(0x08)
	struct ABP_ConfettiPlane_C* BP_ConfettiPlane_4_EdGraph_0_RefProperty; // 0x3f8(0x08)

	void Set HolidayHalloween Active(bool Is Active); // Function LVL_SpaceRig.LVL_SpaceRig_C.Set HolidayHalloween Active
	void Set Beer Event Active(bool Is Active); // Function LVL_SpaceRig.LVL_SpaceRig_C.Set Beer Event Active
	void ReceiveBeginPlay(); // Function LVL_SpaceRig.LVL_SpaceRig_C.ReceiveBeginPlay
	void OnLeaveSpacerig_Event_1(); // Function LVL_SpaceRig.LVL_SpaceRig_C.OnLeaveSpacerig_Event_1
	void BndEvt__DockingBayTriggerBox_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__DockingBayTriggerBox_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature
	void BndEvt__InsideDroppodTriggerBox_K2Node_ActorBoundEvent_4_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__InsideDroppodTriggerBox_K2Node_ActorBoundEvent_4_ActorBeginOverlapSignature__DelegateSignature
	void BndEvt__DockingBayTriggerBox_AllbarrelsIn_K2Node_ActorBoundEvent_18_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__DockingBayTriggerBox_AllbarrelsIn_K2Node_ActorBoundEvent_18_ActorBeginOverlapSignature__DelegateSignature
	void BndEvt__DockingBayTriggerBox_AllbarrelsIn_K2Node_ActorBoundEvent_48_ActorEndOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__DockingBayTriggerBox_AllbarrelsIn_K2Node_ActorBoundEvent_48_ActorEndOverlapSignature__DelegateSignature
	void BndEvt__Start_10_K2Node_ActorBoundEvent_0_PlayerSpawnInHub__DelegateSignature(struct AFSDPlayerController* Controller); // Function LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__Start_10_K2Node_ActorBoundEvent_0_PlayerSpawnInHub__DelegateSignature
	void BndEvt__Start_14_K2Node_ActorBoundEvent_2_PlayerSpawnInHub__DelegateSignature(struct AFSDPlayerController* Controller); // Function LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__Start_14_K2Node_ActorBoundEvent_2_PlayerSpawnInHub__DelegateSignature
	void BndEvt__Start_12_K2Node_ActorBoundEvent_3_PlayerSpawnInHub__DelegateSignature(struct AFSDPlayerController* Controller); // Function LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__Start_12_K2Node_ActorBoundEvent_3_PlayerSpawnInHub__DelegateSignature
	void BndEvt__Start_16_K2Node_ActorBoundEvent_5_PlayerSpawnInHub__DelegateSignature(struct AFSDPlayerController* Controller); // Function LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__Start_16_K2Node_ActorBoundEvent_5_PlayerSpawnInHub__DelegateSignature
	void Play medbay banter(struct AFSDPlayerController* Player Controller); // Function LVL_SpaceRig.LVL_SpaceRig_C.Play medbay banter
	void BndEvt__InsideDroppodTriggerBox_AllBarrelsIn_K2Node_ActorBoundEvent_6_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__InsideDroppodTriggerBox_AllBarrelsIn_K2Node_ActorBoundEvent_6_ActorBeginOverlapSignature__DelegateSignature
	void BndEvt__InsideDroppodTriggerBox_AllBarrelsIn_K2Node_ActorBoundEvent_7_ActorEndOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__InsideDroppodTriggerBox_AllBarrelsIn_K2Node_ActorBoundEvent_7_ActorEndOverlapSignature__DelegateSignature
	void OnFreeBeerRewardChanged(bool IsBeersFree); // Function LVL_SpaceRig.LVL_SpaceRig_C.OnFreeBeerRewardChanged
	void OnCountdownChanged_Event_1(bool Active); // Function LVL_SpaceRig.LVL_SpaceRig_C.OnCountdownChanged_Event_1
	void StreamSubLevels(); // Function LVL_SpaceRig.LVL_SpaceRig_C.StreamSubLevels
	void ExecuteUbergraph_LVL_SpaceRig(int32_t EntryPoint); // Function LVL_SpaceRig.LVL_SpaceRig_C.ExecuteUbergraph_LVL_SpaceRig
};

