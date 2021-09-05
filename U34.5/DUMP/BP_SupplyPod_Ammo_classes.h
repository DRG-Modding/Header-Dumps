// BlueprintGeneratedClass BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C
// Size: 0x418 (Inherited: 0x2b0)
struct ABP_SupplyPod_Ammo_C : ARessuplyPod {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	UChildActorComponent* OxygenSound; // 0x2b8(0x08)
	UChildActorComponent* OxygenTank02; // 0x2c0(0x08)
	UChildActorComponent* OxygenTank01; // 0x2c8(0x08)
	UDropToTerrainComponent* DropToTerrain; // 0x2d0(0x08)
	UStaticMeshComponent* FrontPlane1; // 0x2d8(0x08)
	UOxygenSourceComponent* OxygenSource; // 0x2e0(0x08)
	UTerrainDetectComponent* TerrainDetect; // 0x2e8(0x08)
	UPathfinderCollisionComponent* PathfinderCollision; // 0x2f0(0x08)
	UActorTrackingComponent* ActorTracking; // 0x2f8(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x300(0x08)
	UBoxComponent* Box; // 0x308(0x08)
	UCapsuleComponent* UseCapsule4; // 0x310(0x08)
	UCapsuleComponent* UseCapsule3; // 0x318(0x08)
	UCapsuleComponent* UseCapsule2; // 0x320(0x08)
	UCapsuleComponent* UseCapsule1; // 0x328(0x08)
	USingleUsableComponent* SingleUsable3; // 0x330(0x08)
	USingleUsableComponent* SingleUsable4; // 0x338(0x08)
	USkeletalMeshComponent* SupplyPod_Door_5; // 0x340(0x08)
	USkeletalMeshComponent* SupplyPod_Door_4; // 0x348(0x08)
	USkeletalMeshComponent* SupplyPod_Door_3; // 0x350(0x08)
	USkeletalMeshComponent* SupplyPod_Door_2; // 0x358(0x08)
	USkeletalMeshComponent* SK_DropPod_Drill; // 0x360(0x08)
	USingleUsableComponent* SingleUsable1; // 0x368(0x08)
	USingleUsableComponent* SingleUsable2; // 0x370(0x08)
	UAudioComponent* Audio; // 0x378(0x08)
	UOutlineComponent* outline; // 0x380(0x08)
	UAutoCarverComponent* AutoCarver; // 0x388(0x08)
	URadarPointComponent* radarPoint; // 0x390(0x08)
	UPointLightComponent* PointLight; // 0x398(0x08)
	UStaticMeshComponent* SM_DropPod_Hull; // 0x3a0(0x08)
	TMap<USkeletalMeshComponent*, UMaterialInstanceDynamic*> DoorMaterials; // 0x3a8(0x50)
	float FellFromheight; // 0x3f8(0x04)
	float MinFallDistance; // 0x3fc(0x04)
	float TimeOfImpact; // 0x400(0x04)
	UParticleSystemComponent* DropParticles; // 0x408(0x08)
	UParticleSystemComponent* DropParticles2; // 0x410(0x08)

	void HandlePhotosentitivity();
	void HandleUsableChanged(UPrimitiveComponent* UseCollider, USkeletalMeshComponent* DoorMesh, bool canUse);
	void HealUser(APlayerCharacter* User);
	void DisableUsable(UPrimitiveComponent* Collider, USkeletalMeshComponent* DoorMesh);
	void ResupplyUser(APlayerCharacter* User);
	void UserConstructionScript();
	void OnDroppodImpact();
	void OnDropStarted();
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool canUse);
	void BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_2_UsableChangedSignature__DelegateSignature(bool canUse);
	void BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature(bool canUse);
	void BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_4_UsableChangedSignature__DelegateSignature(bool canUse);
	void BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_5_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	void BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_6_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	void BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_7_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	void BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_8_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	void OnTunnelBLocked();
	void SupplyUsed(APlayerCharacter* User, USingleUsableComponent* Target);
	void UsableChanged(bool canUse, UPrimitiveComponent* UseCollider, USkeletalMeshComponent* DoorMesh);
	void ReceiveBeginPlay();
	void BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_10_UserCountChangedDelegate__DelegateSignature(int32_t userCount);
	void BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_11_UserCountChangedDelegate__DelegateSignature(int32_t userCount);
	void BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_12_UserCountChangedDelegate__DelegateSignature(int32_t userCount);
	void BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_13_UserCountChangedDelegate__DelegateSignature(int32_t userCount);
	void HandleUserCountChanged(int32_t userCount, USingleUsableComponent* Usable, USkeletalMeshComponent* Door);
	void BndEvt__DropToTerrain_K2Node_ComponentBoundEvent_14_OnIsFallingToTerrainChanged__DelegateSignature(bool IsFalling);
	void ExecuteUbergraph_BP_SupplyPod_Ammo(int32_t EntryPoint);
};

