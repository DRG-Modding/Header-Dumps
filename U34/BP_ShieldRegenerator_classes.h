// BlueprintGeneratedClass BP_ShieldRegenerator.BP_ShieldRegenerator_C
// Size: 0x311 (Inherited: 0x240)
struct ABP_ShieldRegenerator_C : AArmorRegeneratorActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x240(0x08)
	struct UParticleSystemComponent* ParticleSystemTopGlow; // 0x248(0x08)
	struct UParticleSystemComponent* ParticleSystemSparks; // 0x250(0x08)
	struct UAudioComponent* AudioOutside; // 0x258(0x08)
	struct UAudioComponent* AudioThrown; // 0x260(0x08)
	struct USphereComponent* FleeCollider; // 0x268(0x08)
	struct UStaticMeshComponent* ProjectileSphere; // 0x270(0x08)
	struct UStaticMeshComponent* SphereExtra2; // 0x278(0x08)
	struct UStaticMeshComponent* SphereExtra1; // 0x280(0x08)
	struct UPathfinderCollisionComponent* PathfinderCollision; // 0x288(0x08)
	struct UStaticMeshComponent* SphereTrigger; // 0x290(0x08)
	struct USceneComponent* Sizer; // 0x298(0x08)
	struct UParticleSystemComponent* ParticleSystemBeam; // 0x2a0(0x08)
	struct UBoxComponent* ThrowCollider; // 0x2a8(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x2b0(0x08)
	struct UAudioComponent* AudioInside; // 0x2b8(0x08)
	struct UPointLightComponent* PointLight; // 0x2c0(0x08)
	struct USceneComponent* SphereScaler; // 0x2c8(0x08)
	struct USkeletalMeshComponent* GeneratorMesh; // 0x2d0(0x08)
	float IntroAnim_Scale_C1CE1C6643D01DDA1DDE1CA672CE4AA9; // 0x2d8(0x04)
	char IntroAnim__Direction_C1CE1C6643D01DDA1DDE1CA672CE4AA9; // 0x2dc(0x01)
	char UnknownData_2DD[0x3]; // 0x2dd(0x03)
	struct UTimelineComponent* IntroAnim; // 0x2e0(0x08)
	struct UStatusEffect* StatusEffect; // 0x2e8(0x08)
	struct TArray<struct APlayerCharacter*> ActiveCharacters; // 0x2f0(0x10)
	bool ShieldActive; // 0x300(0x01)
	char UnknownData_301[0x7]; // 0x301(0x07)
	struct UStatusEffect* LeaveShieldProtectiveAuraSTE; // 0x308(0x08)
	bool HasDeployed; // 0x310(0x01)

	void ReturnHome(); // Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.ReturnHome
	void SetScale(float Scale); // Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.SetScale
	void RemovePlayer(struct APlayerCharacter* Player); // Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.RemovePlayer
	void AddPlayer(struct APlayerCharacter* Player); // Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.AddPlayer
	void UserConstructionScript(); // Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.UserConstructionScript
	void IntroAnim__FinishedFunc(); // Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.IntroAnim__FinishedFunc
	void IntroAnim__UpdateFunc(); // Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.IntroAnim__UpdateFunc
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	void AllBeginDestroy(); // Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.AllBeginDestroy
	void ReceiveHitObject(); // Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.ReceiveHitObject
	void ReceiveBeginPlay(); // Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.ReceiveBeginPlay
	void BndEvt__FleeCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.BndEvt__FleeCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void Failsafe Hit Object(); // Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.Failsafe Hit Object
	void ExecuteUbergraph_BP_ShieldRegenerator(int32_t EntryPoint); // Function BP_ShieldRegenerator.BP_ShieldRegenerator_C.ExecuteUbergraph_BP_ShieldRegenerator
};

