// BlueprintGeneratedClass BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C
// Size: 0x3ba (Inherited: 0x220)
struct ABP_OldSupplyPod_Salvage_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UBoxComponent* UseBox_Fixing; // 0x228(0x08)
	struct UDamageComponent* Damage; // 0x230(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x238(0x08)
	struct USingleUsableComponent* SingleUsable_FixPod; // 0x240(0x08)
	struct UStaticMeshComponent* SM_Prim_Cylinder_08sides; // 0x248(0x08)
	struct ULevelGenerationCarverComponent* LevelGenerationCarver_Tunnel; // 0x250(0x08)
	struct UDropToTerrainComponent* DropToTerrain; // 0x258(0x08)
	struct UStaticMeshComponent* FrontPlane1; // 0x260(0x08)
	struct UStaticMeshComponent* SM_Screen_006; // 0x268(0x08)
	struct UParticleSystemComponent* P_GasCanister_air_Mule2; // 0x270(0x08)
	struct UStaticMeshComponent* SM_GasCanister1; // 0x278(0x08)
	struct UParticleSystemComponent* P_GasCanister_air_Mule1; // 0x280(0x08)
	struct UAudioComponent* Oxygen_Leak; // 0x288(0x08)
	struct UStaticMeshComponent* FrontPlane; // 0x290(0x08)
	struct UStaticMeshComponent* SM_Screen_005; // 0x298(0x08)
	struct UStaticMeshComponent* SM_GasCanister; // 0x2a0(0x08)
	struct UOxygenSourceComponent* OxygenSource; // 0x2a8(0x08)
	struct UTerrainDetectComponent* TerrainDetect; // 0x2b0(0x08)
	struct UPathfinderCollisionComponent* PathfinderCollision; // 0x2b8(0x08)
	struct UActorTrackingComponent* ActorTracking; // 0x2c0(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x2c8(0x08)
	struct UBoxComponent* Box; // 0x2d0(0x08)
	struct UCapsuleComponent* UseCapsule4; // 0x2d8(0x08)
	struct UCapsuleComponent* UseCapsule3; // 0x2e0(0x08)
	struct UCapsuleComponent* UseCapsule2; // 0x2e8(0x08)
	struct UCapsuleComponent* UseCapsule1; // 0x2f0(0x08)
	struct USingleUsableComponent* SingleUsable3; // 0x2f8(0x08)
	struct USingleUsableComponent* SingleUsable4; // 0x300(0x08)
	struct USkeletalMeshComponent* SupplyPod_Door_5; // 0x308(0x08)
	struct USkeletalMeshComponent* SupplyPod_Door_4; // 0x310(0x08)
	struct USkeletalMeshComponent* SupplyPod_Door_3; // 0x318(0x08)
	struct USkeletalMeshComponent* SupplyPod_Door_2; // 0x320(0x08)
	struct USkeletalMeshComponent* SK_DropPod_Drill; // 0x328(0x08)
	struct USingleUsableComponent* SingleUsable1; // 0x330(0x08)
	struct USingleUsableComponent* SingleUsable2; // 0x338(0x08)
	struct UOutlineComponent* outline; // 0x340(0x08)
	struct URadarPointComponent* radarPoint; // 0x348(0x08)
	struct UPointLightComponent* PointLight; // 0x350(0x08)
	struct UStaticMeshComponent* SM_DropPod_Hull; // 0x358(0x08)
	struct TMap<struct USkeletalMeshComponent*, struct UMaterialInstanceDynamic*> DoorMaterials; // 0x360(0x50)
	float ChanceOfWorking; // 0x3b0(0x04)
	int32_t NumFailCycles; // 0x3b4(0x04)
	bool RepairFailed; // 0x3b8(0x01)
	bool AllGood; // 0x3b9(0x01)

	void OnRep_AllGood(); // Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.OnRep_AllGood
	void OnRep_RepairFailed(); // Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.OnRep_RepairFailed
	void HandleUsableChanged(struct UPrimitiveComponent* UseCollider, struct USkeletalMeshComponent* DoorMesh, bool canUse); // Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.HandleUsableChanged
	void HealUser(struct APlayerCharacter* User); // Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.HealUser
	void DisableUsable(struct UPrimitiveComponent* Collider, struct USkeletalMeshComponent* DoorMesh); // Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.DisableUsable
	void ResupplyUser(struct APlayerCharacter* User); // Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.ResupplyUser
	void UserConstructionScript(); // Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.UserConstructionScript
	void BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_5_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_5_UsedBySignature__DelegateSignature
	void BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_6_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_6_UsedBySignature__DelegateSignature
	void BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_7_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_7_UsedBySignature__DelegateSignature
	void BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_8_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_8_UsedBySignature__DelegateSignature
	void SupplyUsed(struct APlayerCharacter* User, struct USingleUsableComponent* Target); // Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.SupplyUsed
	void UsableChanged(bool canUse, struct UPrimitiveComponent* UseCollider, struct USkeletalMeshComponent* DoorMesh); // Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.UsableChanged
	void BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_4_UsableChangedSignature__DelegateSignature(bool canUse); // Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_4_UsableChangedSignature__DelegateSignature
	void BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature(bool canUse); // Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature
	void BndEvt__OxygenSource_K2Node_ComponentBoundEvent_9_OxygenActiveDelegate__DelegateSignature(bool IsActive); // Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__OxygenSource_K2Node_ComponentBoundEvent_9_OxygenActiveDelegate__DelegateSignature
	void BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_2_UsableChangedSignature__DelegateSignature(bool canUse); // Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_2_UsableChangedSignature__DelegateSignature
	void BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool canUse); // Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature
	void ReceiveBeginPlay(); // Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.ReceiveBeginPlay
	void BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_10_UserCountChangedDelegate__DelegateSignature(int32_t userCount); // Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_10_UserCountChangedDelegate__DelegateSignature
	void BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_11_UserCountChangedDelegate__DelegateSignature(int32_t userCount); // Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_11_UserCountChangedDelegate__DelegateSignature
	void BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_12_UserCountChangedDelegate__DelegateSignature(int32_t userCount); // Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_12_UserCountChangedDelegate__DelegateSignature
	void BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_13_UserCountChangedDelegate__DelegateSignature(int32_t userCount); // Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_13_UserCountChangedDelegate__DelegateSignature
	void HandleUserCountChanged(int32_t userCount, struct USingleUsableComponent* Usable, struct USkeletalMeshComponent* Door); // Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.HandleUserCountChanged
	void BndEvt__DropToTerrain_K2Node_ComponentBoundEvent_14_OnIsFallingToTerrainChanged__DelegateSignature(bool IsFalling); // Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__DropToTerrain_K2Node_ComponentBoundEvent_14_OnIsFallingToTerrainChanged__DelegateSignature
	void OnDroppodImpact_2(); // Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.OnDroppodImpact_2
	void OnTunnelBLocked_2(); // Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.OnTunnelBLocked_2
	void BndEvt__SingleUsable_FixPod_K2Node_ComponentBoundEvent_1_ProgressSignature__DelegateSignature(float Progress); // Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__SingleUsable_FixPod_K2Node_ComponentBoundEvent_1_ProgressSignature__DelegateSignature
	void OnSupplyPodFixed(); // Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.OnSupplyPodFixed
	void ExecuteUbergraph_BP_OldSupplyPod_Salvage(int32_t EntryPoint); // Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.ExecuteUbergraph_BP_OldSupplyPod_Salvage
};

