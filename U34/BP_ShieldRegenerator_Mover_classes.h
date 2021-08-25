// BlueprintGeneratedClass BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C
// Size: 0x3d8 (Inherited: 0x378)
struct ABP_ShieldRegenerator_Mover_C : ADeepPathfinderCharacter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x08)
	struct UAudioComponent* MovingAudioComponent; // 0x380(0x08)
	struct UParticleSystemComponent* RocketExhaust; // 0x388(0x08)
	struct UPointLightComponent* PointLight; // 0x390(0x08)
	float LiftOff_Progress_9B203DE44FAEAFAF13D1B3902168B574; // 0x398(0x04)
	char LiftOff__Direction_9B203DE44FAEAFAF13D1B3902168B574; // 0x39c(0x01)
	char UnknownData_39D[0x3]; // 0x39d(0x03)
	struct UTimelineComponent* LiftOff; // 0x3a0(0x08)
	struct AActor* TargetActor; // 0x3a8(0x08)
	struct FVector HoverPoint; // 0x3b0(0x0c)
	struct FVector StartPoint; // 0x3bc(0x0c)
	struct UParticleSystem* ListoffBlastParticles; // 0x3c8(0x08)
	struct AArmorRegeneratorItem* Item; // 0x3d0(0x08)

	void FindTakeOffPoint(struct FVector TakeOffPoint); // Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.FindTakeOffPoint
	bool MoveToInstigator(); // Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.MoveToInstigator
	void LiftOff__FinishedFunc(); // Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.LiftOff__FinishedFunc
	void LiftOff__UpdateFunc(); // Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.LiftOff__UpdateFunc
	void ReceiveBeginPlay(); // Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.ReceiveBeginPlay
	void All_LiftOff(struct FVector InHoverPoint); // Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.All_LiftOff
	void BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_0_PathStateChangedDelegate__DelegateSignature(enum class EDeepMovementState State); // Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_0_PathStateChangedDelegate__DelegateSignature
	void Begin Lift Off Effects(); // Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.Begin Lift Off Effects
	void Begin Move To Actor(struct AActor* InTargetActor); // Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.Begin Move To Actor
	void OnReturned(); // Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.OnReturned
	void BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_2_PathFinished__DelegateSignature(bool success); // Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_2_PathFinished__DelegateSignature
	void ExecuteUbergraph_BP_ShieldRegenerator_Mover(int32_t EntryPoint); // Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.ExecuteUbergraph_BP_ShieldRegenerator_Mover
};

