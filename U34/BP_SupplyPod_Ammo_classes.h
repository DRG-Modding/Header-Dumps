// BlueprintGeneratedClass BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C
// Size: 0x418 (Inherited: 0x2b0)
struct ABP_SupplyPod_Ammo_C : ARessuplyPod {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UChildActorComponent* OxygenSound; // 0x2b8(0x08)
	struct UChildActorComponent* OxygenTank02; // 0x2c0(0x08)
	struct UChildActorComponent* OxygenTank01; // 0x2c8(0x08)
	struct UDropToTerrainComponent* DropToTerrain; // 0x2d0(0x08)
	struct UStaticMeshComponent* FrontPlane1; // 0x2d8(0x08)
	struct UOxygenSourceComponent* OxygenSource; // 0x2e0(0x08)
	struct UTerrainDetectComponent* TerrainDetect; // 0x2e8(0x08)
	struct UPathfinderCollisionComponent* PathfinderCollision; // 0x2f0(0x08)
	struct UActorTrackingComponent* ActorTracking; // 0x2f8(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x300(0x08)
	struct UBoxComponent* Box; // 0x308(0x08)
	struct UCapsuleComponent* UseCapsule4; // 0x310(0x08)
	struct UCapsuleComponent* UseCapsule3; // 0x318(0x08)
	struct UCapsuleComponent* UseCapsule2; // 0x320(0x08)
	struct UCapsuleComponent* UseCapsule1; // 0x328(0x08)
	struct USingleUsableComponent* SingleUsable3; // 0x330(0x08)
	struct USingleUsableComponent* SingleUsable4; // 0x338(0x08)
	struct USkeletalMeshComponent* SupplyPod_Door_5; // 0x340(0x08)
	struct USkeletalMeshComponent* SupplyPod_Door_4; // 0x348(0x08)
	struct USkeletalMeshComponent* SupplyPod_Door_3; // 0x350(0x08)
	struct USkeletalMeshComponent* SupplyPod_Door_2; // 0x358(0x08)
	struct USkeletalMeshComponent* SK_DropPod_Drill; // 0x360(0x08)
	struct USingleUsableComponent* SingleUsable1; // 0x368(0x08)
	struct USingleUsableComponent* SingleUsable2; // 0x370(0x08)
	struct UAudioComponent* Audio; // 0x378(0x08)
	struct UOutlineComponent* outline; // 0x380(0x08)
	struct UAutoCarverComponent* AutoCarver; // 0x388(0x08)
	struct URadarPointComponent* radarPoint; // 0x390(0x08)
	struct UPointLightComponent* PointLight; // 0x398(0x08)
	struct UStaticMeshComponent* SM_DropPod_Hull; // 0x3a0(0x08)
	struct TMap<struct USkeletalMeshComponent*, struct UMaterialInstanceDynamic*> DoorMaterials; // 0x3a8(0x50)
	float FellFromheight; // 0x3f8(0x04)
	float MinFallDistance; // 0x3fc(0x04)
	float TimeOfImpact; // 0x400(0x04)
	char UnknownData_404[0x4]; // 0x404(0x04)
	struct UParticleSystemComponent* DropParticles; // 0x408(0x08)
	struct UParticleSystemComponent* DropParticles2; // 0x410(0x08)

	void HandlePhotosentitivity(); // Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.HandlePhotosentitivity
	void HandleUsableChanged(struct UPrimitiveComponent* UseCollider, struct USkeletalMeshComponent* DoorMesh, bool canUse); // Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.HandleUsableChanged
	void HealUser(struct APlayerCharacter* User); // Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.HealUser
	void DisableUsable(struct UPrimitiveComponent* Collider, struct USkeletalMeshComponent* DoorMesh); // Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.DisableUsable
	void ResupplyUser(struct APlayerCharacter* User); // Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.ResupplyUser
	void UserConstructionScript(); // Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.UserConstructionScript
	void OnDroppodImpact(); // Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.OnDroppodImpact
	void OnDropStarted(); // Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.OnDropStarted
	void ReceiveTick(float DeltaSeconds); // Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.ReceiveTick
	void BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool canUse); // Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature
	void BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_2_UsableChangedSignature__DelegateSignature(bool canUse); // Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_2_UsableChangedSignature__DelegateSignature
	void BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature(bool canUse); // Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature
	void BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_4_UsableChangedSignature__DelegateSignature(bool canUse); // Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_4_UsableChangedSignature__DelegateSignature
	void BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_5_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_5_UsedBySignature__DelegateSignature
	void BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_6_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_6_UsedBySignature__DelegateSignature
	void BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_7_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_7_UsedBySignature__DelegateSignature
	void BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_8_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_8_UsedBySignature__DelegateSignature
	void OnTunnelBLocked(); // Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.OnTunnelBLocked
	void SupplyUsed(struct APlayerCharacter* User, struct USingleUsableComponent* Target); // Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.SupplyUsed
	void UsableChanged(bool canUse, struct UPrimitiveComponent* UseCollider, struct USkeletalMeshComponent* DoorMesh); // Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.UsableChanged
	void ReceiveBeginPlay(); // Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.ReceiveBeginPlay
	void BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_10_UserCountChangedDelegate__DelegateSignature(int32_t userCount); // Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_10_UserCountChangedDelegate__DelegateSignature
	void BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_11_UserCountChangedDelegate__DelegateSignature(int32_t userCount); // Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_11_UserCountChangedDelegate__DelegateSignature
	void BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_12_UserCountChangedDelegate__DelegateSignature(int32_t userCount); // Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_12_UserCountChangedDelegate__DelegateSignature
	void BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_13_UserCountChangedDelegate__DelegateSignature(int32_t userCount); // Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_13_UserCountChangedDelegate__DelegateSignature
	void HandleUserCountChanged(int32_t userCount, struct USingleUsableComponent* Usable, struct USkeletalMeshComponent* Door); // Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.HandleUserCountChanged
	void BndEvt__DropToTerrain_K2Node_ComponentBoundEvent_14_OnIsFallingToTerrainChanged__DelegateSignature(bool IsFalling); // Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__DropToTerrain_K2Node_ComponentBoundEvent_14_OnIsFallingToTerrainChanged__DelegateSignature
	void ExecuteUbergraph_BP_SupplyPod_Ammo(int32_t EntryPoint); // Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.ExecuteUbergraph_BP_SupplyPod_Ammo
};

