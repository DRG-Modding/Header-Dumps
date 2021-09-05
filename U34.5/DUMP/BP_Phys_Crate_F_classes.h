// BlueprintGeneratedClass BP_Phys_Crate_F.BP_Phys_Crate_F_C
// Size: 0x298 (Inherited: 0x220)
struct ABP_Phys_Crate_F_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UCapsuleComponent* BarrelRiderCollission; // 0x228(0x08)
	UGravityChangedComponent* GravityChanged; // 0x230(0x08)
	UInstantUsable* InstantUsable; // 0x238(0x08)
	UCapsuleComponent* UseCapsule; // 0x240(0x08)
	UStaticMeshComponent* StaticMeshComponent0; // 0x248(0x08)
	bool CanTriggerSound; // 0x250(0x01)
	FVector KickSoundLocation; // 0x254(0x0c)
	APlayerCharacter* KickedBy; // 0x260(0x08)
	bool KickedIntoHoop; // 0x268(0x01)
	UFSDAchievement* BarrelRiderAchievement; // 0x270(0x08)
	float RideBeginTime; // 0x278(0x04)
	APlayerCharacter* CurrentRider; // 0x280(0x08)
	USoundBase* ImpactSound; // 0x288(0x08)
	USoundBase* KickSound; // 0x290(0x08)

	void OnRep_KickSoundLocation();
	void BndEvt__StaticMeshComponent0_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult Hit);
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	void ReceiveBeginPlay();
	void destroy();
	void DestroyOvertime();
	void Play_Kick(APlayerCharacter* Kicker);
	void BndEvt__BarrelRiderCollission_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void BndEvt__BarrelRiderCollission_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	void ExecuteUbergraph_BP_Phys_Crate_F(int32_t EntryPoint);
};

