// BlueprintGeneratedClass MAG_BaseClass.MAG_BaseClass_C
// Size: 0x25c (Inherited: 0x238)
struct AMAG_BaseClass_C : AMagazine {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UFirstPersonStaticMeshComponent* Mesh; // 0x240(0x08)
	struct UBoxComponent* Box; // 0x248(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	float ChangeFovDelay; // 0x258(0x04)

	bool Attached(struct AActor* Parent); // Function MAG_BaseClass.MAG_BaseClass_C.Attached
	bool Released(); // Function MAG_BaseClass.MAG_BaseClass_C.Released
	void DoRelease(); // Function MAG_BaseClass.MAG_BaseClass_C.DoRelease
	void OnItemSkinned(struct USkinEffect* Skin); // Function MAG_BaseClass.MAG_BaseClass_C.OnItemSkinned
	void ExecuteUbergraph_MAG_BaseClass(int32_t EntryPoint); // Function MAG_BaseClass.MAG_BaseClass_C.ExecuteUbergraph_MAG_BaseClass
};

