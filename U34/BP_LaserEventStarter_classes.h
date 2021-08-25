// BlueprintGeneratedClass BP_LaserEventStarter.BP_LaserEventStarter_C
// Size: 0x2cc (Inherited: 0x248)
struct ABP_LaserEventStarter_C : AEventStarterButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UCapsuleComponent* Capsule; // 0x250(0x08)
	struct UOutlineComponent* outline; // 0x258(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x260(0x08)
	struct UAudioComponent* LaserWarmUp; // 0x268(0x08)
	struct UPointLightComponent* PointLight; // 0x270(0x08)
	struct USphereComponent* Sphere; // 0x278(0x08)
	struct USkeletalMeshComponent* BatteryInserter; // 0x280(0x08)
	struct UAudioComponent* LaserSound; // 0x288(0x08)
	struct UStaticMeshComponent* StaticMesh Laser Beam; // 0x290(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x298(0x08)
	struct UMaterialInstanceDynamic* LightMaterial; // 0x2a0(0x08)
	struct AGameEvent* OwningEvent; // 0x2a8(0x08)
	struct UParticleSystemComponent* LaserParticles; // 0x2b0(0x08)
	struct FVector2D OriginalEmissivaValues; // 0x2b8(0x08)
	struct UMaterialInstanceDynamic* BatteryMaterial; // 0x2c0(0x08)
	float OriginalBatteryEmissive; // 0x2c8(0x04)

	bool AddEventProgress(float Progress); // Function BP_LaserEventStarter.BP_LaserEventStarter_C.AddEventProgress
	bool AdvanceOneObjective(); // Function BP_LaserEventStarter.BP_LaserEventStarter_C.AdvanceOneObjective
	bool SetupEvent(struct AGameEvent* GameEvent); // Function BP_LaserEventStarter.BP_LaserEventStarter_C.SetupEvent
	void UsedEffects(); // Function BP_LaserEventStarter.BP_LaserEventStarter_C.UsedEffects
	void UserConstructionScript(); // Function BP_LaserEventStarter.BP_LaserEventStarter_C.UserConstructionScript
	void OnEventOpened(); // Function BP_LaserEventStarter.BP_LaserEventStarter_C.OnEventOpened
	void OnEventProgress(float Progress); // Function BP_LaserEventStarter.BP_LaserEventStarter_C.OnEventProgress
	void OnEventTriggered(); // Function BP_LaserEventStarter.BP_LaserEventStarter_C.OnEventTriggered
	void OnOpenedForUse(bool wasOpened); // Function BP_LaserEventStarter.BP_LaserEventStarter_C.OnOpenedForUse
	void OnEventFinished(bool eventSuccess); // Function BP_LaserEventStarter.BP_LaserEventStarter_C.OnEventFinished
	void ReceiveBeginPlay(); // Function BP_LaserEventStarter.BP_LaserEventStarter_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_LaserEventStarter(int32_t EntryPoint); // Function BP_LaserEventStarter.BP_LaserEventStarter_C.ExecuteUbergraph_BP_LaserEventStarter
};

