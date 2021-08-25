// BlueprintGeneratedClass MAG_Flamethrower_Bottle.MAG_Flamethrower_Bottle_C
// Size: 0x258 (Inherited: 0x238)
struct AMAG_Flamethrower_Bottle_C : AMagazine {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UFirstPersonStaticMeshComponent* FirstPersonStaticMesh; // 0x240(0x08)
	struct UCapsuleComponent* Capsule; // 0x248(0x08)
	struct USceneComponent* Scene; // 0x250(0x08)

	bool Attached(struct AActor* Parent); // Function MAG_Flamethrower_Bottle.MAG_Flamethrower_Bottle_C.Attached
	bool Released(); // Function MAG_Flamethrower_Bottle.MAG_Flamethrower_Bottle_C.Released
	void DoRelease(); // Function MAG_Flamethrower_Bottle.MAG_Flamethrower_Bottle_C.DoRelease
	void OnItemSkinned(struct USkinEffect* Skin); // Function MAG_Flamethrower_Bottle.MAG_Flamethrower_Bottle_C.OnItemSkinned
	void ExecuteUbergraph_MAG_Flamethrower_Bottle(int32_t EntryPoint); // Function MAG_Flamethrower_Bottle.MAG_Flamethrower_Bottle_C.ExecuteUbergraph_MAG_Flamethrower_Bottle
};

