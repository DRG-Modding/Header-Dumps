// BlueprintGeneratedClass BP_Refinery_LandingZone.BP_Refinery_LandingZone_C
// Size: 0x268 (Inherited: 0x220)
struct ABP_Refinery_LandingZone_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x228(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	float Timeline_1_Opacity_8C6DF8B84585B4B9E8DB819DF676DC1F; // 0x238(0x04)
	char Timeline_1__Direction_8C6DF8B84585B4B9E8DB819DF676DC1F; // 0x23c(0x01)
	char UnknownData_23D[0x3]; // 0x23d(0x03)
	struct UTimelineComponent* Timeline_2; // 0x240(0x08)
	float Timeline_0_Opacity_C78A9FAB4BAA9C550373C2B47F9E0A4F; // 0x248(0x04)
	char Timeline_0__Direction_C78A9FAB4BAA9C550373C2B47F9E0A4F; // 0x24c(0x01)
	char UnknownData_24D[0x3]; // 0x24d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x250(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> Materials; // 0x258(0x10)

	void Timeline_0__FinishedFunc(); // Function BP_Refinery_LandingZone.BP_Refinery_LandingZone_C.Timeline_0__FinishedFunc
	void Timeline_0__UpdateFunc(); // Function BP_Refinery_LandingZone.BP_Refinery_LandingZone_C.Timeline_0__UpdateFunc
	void Timeline_1__FinishedFunc(); // Function BP_Refinery_LandingZone.BP_Refinery_LandingZone_C.Timeline_1__FinishedFunc
	void Timeline_1__UpdateFunc(); // Function BP_Refinery_LandingZone.BP_Refinery_LandingZone_C.Timeline_1__UpdateFunc
	void ReceiveBeginPlay(); // Function BP_Refinery_LandingZone.BP_Refinery_LandingZone_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_Refinery_LandingZone(int32_t EntryPoint); // Function BP_Refinery_LandingZone.BP_Refinery_LandingZone_C.ExecuteUbergraph_BP_Refinery_LandingZone
};

