// BlueprintGeneratedClass BP_ForgeConsole.BP_ForgeConsole_C
// Size: 0x358 (Inherited: 0x2f0)
struct ABP_ForgeConsole_C : ABP_BaseSpaceRigConsole_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UBoxComponent* CollisionBox5; // 0x2f8(0x08)
	struct UStaticMeshComponent* LightCone; // 0x300(0x08)
	struct UParticleSystemComponent* ParticleSystem_Smoke2; // 0x308(0x08)
	struct UPointLightComponent* PointLight Forge; // 0x310(0x08)
	struct USpotLightComponent* SpotLight Lamp; // 0x318(0x08)
	struct UBoxComponent* CollisionBox4; // 0x320(0x08)
	struct UBoxComponent* CollisionBox3; // 0x328(0x08)
	struct UBoxComponent* CollisionBox2; // 0x330(0x08)
	struct USkeletalMeshComponent* SkeletalMesh Forge; // 0x338(0x08)
	struct UBoxComponent* CollisionBox1; // 0x340(0x08)
	struct UPointLightComponent* PointLight Lamp; // 0x348(0x08)
	struct UParticleSystemComponent* ParticleSystem_Smoke; // 0x350(0x08)

	void OnWindowCreated(struct UWindowWidget* WindowWidget); // Function BP_ForgeConsole.BP_ForgeConsole_C.OnWindowCreated
	void UpdateNotificationBanner(); // Function BP_ForgeConsole.BP_ForgeConsole_C.UpdateNotificationBanner
	void ExecuteUbergraph_BP_ForgeConsole(int32_t EntryPoint); // Function BP_ForgeConsole.BP_ForgeConsole_C.ExecuteUbergraph_BP_ForgeConsole
};

