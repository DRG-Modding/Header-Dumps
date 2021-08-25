// BlueprintGeneratedClass BP_Minehead_LandingZone.BP_Minehead_LandingZone_C
// Size: 0x270 (Inherited: 0x220)
struct ABP_Minehead_LandingZone_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x228(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	float Timeline_0_Opacity_814ACDB147BE4FC050CAA2ADBE2674C9; // 0x238(0x04)
	char Timeline_0__Direction_814ACDB147BE4FC050CAA2ADBE2674C9; // 0x23c(0x01)
	char UnknownData_23D[0x3]; // 0x23d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x240(0x08)
	float Timeline_1_Opacity_9715CE204D350BB8464289A30A16CA29; // 0x248(0x04)
	char Timeline_1__Direction_9715CE204D350BB8464289A30A16CA29; // 0x24c(0x01)
	char UnknownData_24D[0x3]; // 0x24d(0x03)
	struct UTimelineComponent* Timeline_2; // 0x250(0x08)
	bool FadingOut; // 0x258(0x01)
	char UnknownData_259[0x7]; // 0x259(0x07)
	struct TArray<struct UMaterialInstanceDynamic*> Materials; // 0x260(0x10)

	void Timeline_1__FinishedFunc(); // Function BP_Minehead_LandingZone.BP_Minehead_LandingZone_C.Timeline_1__FinishedFunc
	void Timeline_1__UpdateFunc(); // Function BP_Minehead_LandingZone.BP_Minehead_LandingZone_C.Timeline_1__UpdateFunc
	void Timeline_0__FinishedFunc(); // Function BP_Minehead_LandingZone.BP_Minehead_LandingZone_C.Timeline_0__FinishedFunc
	void Timeline_0__UpdateFunc(); // Function BP_Minehead_LandingZone.BP_Minehead_LandingZone_C.Timeline_0__UpdateFunc
	void ReceiveBeginPlay(); // Function BP_Minehead_LandingZone.BP_Minehead_LandingZone_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_Minehead_LandingZone(int32_t EntryPoint); // Function BP_Minehead_LandingZone.BP_Minehead_LandingZone_C.ExecuteUbergraph_BP_Minehead_LandingZone
};

