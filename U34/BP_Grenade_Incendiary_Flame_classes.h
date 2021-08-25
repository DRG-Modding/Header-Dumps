// BlueprintGeneratedClass BP_Grenade_Incendiary_Flame.BP_Grenade_Incendiary_Flame_C
// Size: 0x288 (Inherited: 0x268)
struct ABP_Grenade_Incendiary_Flame_C : AStickyFlame {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UPathfinderCollisionComponent* PathfinderCollision; // 0x270(0x08)
	struct USphereComponent* Sphere; // 0x278(0x08)
	struct UPointLightComponent* PointLight; // 0x280(0x08)

	void ReceiveBeginPlay(); // Function BP_Grenade_Incendiary_Flame.BP_Grenade_Incendiary_Flame_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_Grenade_Incendiary_Flame(int32_t EntryPoint); // Function BP_Grenade_Incendiary_Flame.BP_Grenade_Incendiary_Flame_C.ExecuteUbergraph_BP_Grenade_Incendiary_Flame
};

