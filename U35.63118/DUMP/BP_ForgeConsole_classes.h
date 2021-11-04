// BlueprintGeneratedClass BP_ForgeConsole.BP_ForgeConsole_C
// Size: 0x358 (Inherited: 0x2f0)
struct ABP_ForgeConsole_C : ABP_BaseSpaceRigConsole_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	UBoxComponent* CollisionBox5; // 0x2f8(0x08)
	UStaticMeshComponent* LightCone; // 0x300(0x08)
	UParticleSystemComponent* ParticleSystem_Smoke2; // 0x308(0x08)
	UPointLightComponent* PointLight Forge; // 0x310(0x08)
	USpotLightComponent* SpotLight Lamp; // 0x318(0x08)
	UBoxComponent* CollisionBox4; // 0x320(0x08)
	UBoxComponent* CollisionBox3; // 0x328(0x08)
	UBoxComponent* CollisionBox2; // 0x330(0x08)
	USkeletalMeshComponent* SkeletalMesh Forge; // 0x338(0x08)
	UBoxComponent* CollisionBox1; // 0x340(0x08)
	UPointLightComponent* PointLight Lamp; // 0x348(0x08)
	UParticleSystemComponent* ParticleSystem_Smoke; // 0x350(0x08)

	void OnWindowCreated(UWindowWidget* WindowWidget);
	void UpdateNotificationBanner();
	void ExecuteUbergraph_BP_ForgeConsole(int32_t EntryPoint);
};

