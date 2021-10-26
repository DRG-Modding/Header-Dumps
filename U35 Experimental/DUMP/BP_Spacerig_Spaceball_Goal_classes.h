// BlueprintGeneratedClass BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C
// Size: 0x306 (Inherited: 0x278)
struct ABP_Spacerig_Spaceball_Goal_C : AGem {
	FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	UWidgetComponent* Widget; // 0x280(0x08)
	UBoxComponent* GoalBox; // 0x288(0x08)
	USphereComponent* UseSphere; // 0x290(0x08)
	UParticleSystemComponent* ParticleSystem2; // 0x298(0x08)
	UParticleSystemComponent* ParticleSystem1; // 0x2a0(0x08)
	UParticleSystemComponent* ParticleSystem; // 0x2a8(0x08)
	UStaticMeshComponent* Goal; // 0x2b0(0x08)
	UStaticMeshComponent* SM_GoalEmitter_01; // 0x2b8(0x08)
	UBoxComponent* Box; // 0x2c0(0x08)
	UCarriableComponent* Carriable; // 0x2c8(0x08)
	FVector throwForce; // 0x2d0(0x0c)
	int32_t GoalsScored; // 0x2dc(0x04)
	float StartYaw; // 0x2e0(0x04)
	USoundBase* GoalScoredSound; // 0x2e8(0x08)
	USoundBase* ThrowSound; // 0x2f0(0x08)
	float StartedDeploying; // 0x2f8(0x04)
	bool HasReachedPeak; // 0x2fc(0x01)
	float SmoothCoff; // 0x300(0x04)
	bool BeginActive; // 0x304(0x01)
	bool HasBounced; // 0x305(0x01)

	void OnRep_GoalsScored();
	void BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(APlayerCharacter* User, enum class EInputKeys Key);
	void BndEvt__Usable_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature(bool CanUse);
	void BndEvt__Carriable_K2Node_ComponentBoundEvent_1_CarriableEvent__DelegateSignature();
	void BndEvt__Carriable_K2Node_ComponentBoundEvent_2_CarriableEvent__DelegateSignature();
	void ReceiveBeginPlay();
	void BndEvt__Box_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult Hit);
	void ReceiveTick(float DeltaSeconds);
	void SetGoalVisible();
	void Throw(FVector force);
	void BndEvt__GoalBox_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void Countdown Completed();
	void ExecuteUbergraph_BP_Spacerig_Spaceball_Goal(int32_t EntryPoint);
};

