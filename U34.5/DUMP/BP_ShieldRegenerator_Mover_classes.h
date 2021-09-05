// BlueprintGeneratedClass BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C
// Size: 0x3d8 (Inherited: 0x378)
struct ABP_ShieldRegenerator_Mover_C : ADeepPathfinderCharacter {
	FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x08)
	UAudioComponent* MovingAudioComponent; // 0x380(0x08)
	UParticleSystemComponent* RocketExhaust; // 0x388(0x08)
	UPointLightComponent* PointLight; // 0x390(0x08)
	float LiftOff_Progress_9B203DE44FAEAFAF13D1B3902168B574; // 0x398(0x04)
	enum class ETimelineDirection LiftOff__Direction_9B203DE44FAEAFAF13D1B3902168B574; // 0x39c(0x01)
	UTimelineComponent* LiftOff; // 0x3a0(0x08)
	AActor* TargetActor; // 0x3a8(0x08)
	FVector HoverPoint; // 0x3b0(0x0c)
	FVector StartPoint; // 0x3bc(0x0c)
	UParticleSystem* ListoffBlastParticles; // 0x3c8(0x08)
	AArmorRegeneratorItem* Item; // 0x3d0(0x08)

	void FindTakeOffPoint(FVector TakeOffPoint);
	bool MoveToInstigator();
	void LiftOff__FinishedFunc();
	void LiftOff__UpdateFunc();
	void ReceiveBeginPlay();
	void All_LiftOff(FVector InHoverPoint);
	void BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_0_PathStateChangedDelegate__DelegateSignature(enum class EDeepMovementState State);
	void Begin Lift Off Effects();
	void Begin Move To Actor(AActor* InTargetActor);
	void OnReturned();
	void BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_2_PathFinished__DelegateSignature(bool success);
	void ExecuteUbergraph_BP_ShieldRegenerator_Mover(int32_t EntryPoint);
};

