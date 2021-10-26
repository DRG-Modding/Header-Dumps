// BlueprintGeneratedClass BP_ShieldRegenerator.BP_ShieldRegenerator_C
// Size: 0x311 (Inherited: 0x240)
struct ABP_ShieldRegenerator_C : AShieldGeneratorActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x240(0x08)
	UParticleSystemComponent* ParticleSystemTopGlow; // 0x248(0x08)
	UParticleSystemComponent* ParticleSystemSparks; // 0x250(0x08)
	UAudioComponent* AudioOutside; // 0x258(0x08)
	UAudioComponent* AudioThrown; // 0x260(0x08)
	USphereComponent* FleeCollider; // 0x268(0x08)
	UStaticMeshComponent* ProjectileSphere; // 0x270(0x08)
	UStaticMeshComponent* SphereExtra2; // 0x278(0x08)
	UStaticMeshComponent* SphereExtra1; // 0x280(0x08)
	UPathfinderCollisionComponent* PathfinderCollision; // 0x288(0x08)
	UStaticMeshComponent* SphereTrigger; // 0x290(0x08)
	USceneComponent* Sizer; // 0x298(0x08)
	UParticleSystemComponent* ParticleSystemBeam; // 0x2a0(0x08)
	UBoxComponent* ThrowCollider; // 0x2a8(0x08)
	USkeletalMeshComponent* SkeletalMesh; // 0x2b0(0x08)
	UAudioComponent* AudioInside; // 0x2b8(0x08)
	UPointLightComponent* PointLight; // 0x2c0(0x08)
	USceneComponent* SphereScaler; // 0x2c8(0x08)
	USkeletalMeshComponent* GeneratorMesh; // 0x2d0(0x08)
	float IntroAnim_Scale_C1CE1C6643D01DDA1DDE1CA672CE4AA9; // 0x2d8(0x04)
	enum class ETimelineDirection IntroAnim__Direction_C1CE1C6643D01DDA1DDE1CA672CE4AA9; // 0x2dc(0x01)
	UTimelineComponent* IntroAnim; // 0x2e0(0x08)
	UStatusEffect* StatusEffect; // 0x2e8(0x08)
	TArray<APlayerCharacter*> ActiveCharacters; // 0x2f0(0x10)
	bool ShieldActive; // 0x300(0x01)
	UStatusEffect* LeaveShieldProtectiveAuraSTE; // 0x308(0x08)
	bool HasDeployed; // 0x310(0x01)

	void ReturnHome();
	void SetScale(float Scale);
	void RemovePlayer(APlayerCharacter* Player);
	void AddPlayer(APlayerCharacter* Player);
	void UserConstructionScript();
	void IntroAnim__FinishedFunc();
	void IntroAnim__UpdateFunc();
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	void AllBeginDestroy();
	void ReceiveHitObject();
	void ReceiveBeginPlay();
	void BndEvt__FleeCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void Failsafe Hit Object();
	void ExecuteUbergraph_BP_ShieldRegenerator(int32_t EntryPoint);
};

