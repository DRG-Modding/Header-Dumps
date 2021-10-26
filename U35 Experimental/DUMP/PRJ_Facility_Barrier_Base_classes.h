// BlueprintGeneratedClass PRJ_Facility_Barrier_Base.PRJ_Facility_Barrier_Base_C
// Size: 0x390 (Inherited: 0x338)
struct APRJ_Facility_Barrier_Base_C : AProjectile {
	FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	UPlayerImpactCooldownComponent* PlayerImpactCooldown; // 0x340(0x08)
	UDamageComponent* Damage; // 0x348(0x08)
	UStaticMeshComponent* StaticMesh; // 0x350(0x08)
	UBoxComponent* BounceBox; // 0x358(0x08)
	float Timeline_1_NewTrack_0_75981F9D4B9BA002AD172C81D5266F91; // 0x360(0x04)
	enum class ETimelineDirection Timeline_1__Direction_75981F9D4B9BA002AD172C81D5266F91; // 0x364(0x01)
	UTimelineComponent* Timeline_2; // 0x368(0x08)
	float Growth_NewTrack_0_7C9AAAD449A1B186F3E610A47128664F; // 0x370(0x04)
	enum class ETimelineDirection Growth__Direction_7C9AAAD449A1B186F3E610A47128664F; // 0x374(0x01)
	UTimelineComponent* Growth; // 0x378(0x08)
	float Life; // 0x380(0x04)
	FVector ShieldScale; // 0x384(0x0c)

	void Growth__FinishedFunc();
	void Growth__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void ReceiveBeginPlay();
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void CrumbleShield();
	void ExecuteUbergraph_PRJ_Facility_Barrier_Base(int32_t EntryPoint);
};

