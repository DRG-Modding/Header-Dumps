// BlueprintGeneratedClass BP_Collectible_Barley_B1.BP_Collectible_Barley_B1_C
// Size: 0x2a0 (Inherited: 0x270)
struct ABP_Collectible_Barley_B1_C : ABP_Collectible_Barley_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct USphereComponent* Sphere; // 0x278(0x08)
	struct UStaticMeshComponent* Fruit; // 0x280(0x08)
	struct UStaticMeshComponent* Stem; // 0x288(0x08)
	float Timeline_0_NewCurveBase_4943D24B4499D90872349BB26D0794FD; // 0x290(0x04)
	char Timeline_0__Direction_4943D24B4499D90872349BB26D0794FD; // 0x294(0x01)
	char UnknownData_295[0x3]; // 0x295(0x03)
	struct UTimelineComponent* Timeline_1; // 0x298(0x08)

	void UserConstructionScript(); // Function BP_Collectible_Barley_B1.BP_Collectible_Barley_B1_C.UserConstructionScript
	void Timeline_0__FinishedFunc(); // Function BP_Collectible_Barley_B1.BP_Collectible_Barley_B1_C.Timeline_0__FinishedFunc
	void Timeline_0__UpdateFunc(); // Function BP_Collectible_Barley_B1.BP_Collectible_Barley_B1_C.Timeline_0__UpdateFunc
	void PickedUp(); // Function BP_Collectible_Barley_B1.BP_Collectible_Barley_B1_C.PickedUp
	void ExecuteUbergraph_BP_Collectible_Barley_B1(int32_t EntryPoint); // Function BP_Collectible_Barley_B1.BP_Collectible_Barley_B1_C.ExecuteUbergraph_BP_Collectible_Barley_B1
};

