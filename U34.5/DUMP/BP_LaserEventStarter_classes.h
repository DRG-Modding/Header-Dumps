// BlueprintGeneratedClass BP_LaserEventStarter.BP_LaserEventStarter_C
// Size: 0x2cc (Inherited: 0x248)
struct ABP_LaserEventStarter_C : AEventStarterButton {
	FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	UCapsuleComponent* Capsule; // 0x250(0x08)
	UOutlineComponent* outline; // 0x258(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x260(0x08)
	UAudioComponent* LaserWarmUp; // 0x268(0x08)
	UPointLightComponent* PointLight; // 0x270(0x08)
	USphereComponent* Sphere; // 0x278(0x08)
	USkeletalMeshComponent* BatteryInserter; // 0x280(0x08)
	UAudioComponent* LaserSound; // 0x288(0x08)
	UStaticMeshComponent* StaticMesh Laser Beam; // 0x290(0x08)
	USkeletalMeshComponent* SkeletalMesh; // 0x298(0x08)
	UMaterialInstanceDynamic* LightMaterial; // 0x2a0(0x08)
	AGameEvent* OwningEvent; // 0x2a8(0x08)
	UParticleSystemComponent* LaserParticles; // 0x2b0(0x08)
	FVector2D OriginalEmissivaValues; // 0x2b8(0x08)
	UMaterialInstanceDynamic* BatteryMaterial; // 0x2c0(0x08)
	float OriginalBatteryEmissive; // 0x2c8(0x04)

	bool AddEventProgress(float Progress);
	bool AdvanceOneObjective();
	bool SetupEvent(AGameEvent* GameEvent);
	void UsedEffects();
	void UserConstructionScript();
	void OnEventOpened();
	void OnEventProgress(float Progress);
	void OnEventTriggered();
	void OnOpenedForUse(bool wasOpened);
	void OnEventFinished(bool eventSuccess);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_LaserEventStarter(int32_t EntryPoint);
};

