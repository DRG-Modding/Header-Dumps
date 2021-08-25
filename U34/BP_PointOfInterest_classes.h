// BlueprintGeneratedClass BP_PointOfInterest.BP_PointOfInterest_C
// Size: 0x248 (Inherited: 0x220)
struct ABP_PointOfInterest_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStaticMeshComponent* Sphere; // 0x228(0x08)
	struct UFirstPersonWidgetComponent* FirstPersonWidget; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	struct UTexture2D* Icon; // 0x240(0x08)

	void Init(struct UTexture2D* Texture); // Function BP_PointOfInterest.BP_PointOfInterest_C.Init
	void ReceiveBeginPlay(); // Function BP_PointOfInterest.BP_PointOfInterest_C.ReceiveBeginPlay
	void Finished_Event(); // Function BP_PointOfInterest.BP_PointOfInterest_C.Finished_Event
	void ExecuteUbergraph_BP_PointOfInterest(int32_t EntryPoint); // Function BP_PointOfInterest.BP_PointOfInterest_C.ExecuteUbergraph_BP_PointOfInterest
};

