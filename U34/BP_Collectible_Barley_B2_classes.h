// BlueprintGeneratedClass BP_Collectible_Barley_B2.BP_Collectible_Barley_B2_C
// Size: 0x2c0 (Inherited: 0x270)
struct ABP_Collectible_Barley_B2_C : ABP_Collectible_Barley_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct USphereComponent* Sphere; // 0x278(0x08)
	struct UStaticMeshComponent* Fruit2; // 0x280(0x08)
	struct UStaticMeshComponent* Stem2; // 0x288(0x08)
	struct UStaticMeshComponent* Fruit1; // 0x290(0x08)
	struct UStaticMeshComponent* Stem1; // 0x298(0x08)
	float Timeline_1_NewCurveBase_3E1FA8E34B81F0D665577BA1BED94342; // 0x2a0(0x04)
	char Timeline_1__Direction_3E1FA8E34B81F0D665577BA1BED94342; // 0x2a4(0x01)
	char UnknownData_2A5[0x3]; // 0x2a5(0x03)
	struct UTimelineComponent* Timeline_2; // 0x2a8(0x08)
	float Timeline_0_NewCurveBase_CE04641D46E6DB9696536A9342C5DBD1; // 0x2b0(0x04)
	char Timeline_0__Direction_CE04641D46E6DB9696536A9342C5DBD1; // 0x2b4(0x01)
	char UnknownData_2B5[0x3]; // 0x2b5(0x03)
	struct UTimelineComponent* Timeline_1; // 0x2b8(0x08)

	void UserConstructionScript(); // Function BP_Collectible_Barley_B2.BP_Collectible_Barley_B2_C.UserConstructionScript
	void Timeline_0__FinishedFunc(); // Function BP_Collectible_Barley_B2.BP_Collectible_Barley_B2_C.Timeline_0__FinishedFunc
	void Timeline_0__UpdateFunc(); // Function BP_Collectible_Barley_B2.BP_Collectible_Barley_B2_C.Timeline_0__UpdateFunc
	void Timeline_1__FinishedFunc(); // Function BP_Collectible_Barley_B2.BP_Collectible_Barley_B2_C.Timeline_1__FinishedFunc
	void Timeline_1__UpdateFunc(); // Function BP_Collectible_Barley_B2.BP_Collectible_Barley_B2_C.Timeline_1__UpdateFunc
	void PickedUp(); // Function BP_Collectible_Barley_B2.BP_Collectible_Barley_B2_C.PickedUp
	void ExecuteUbergraph_BP_Collectible_Barley_B2(int32_t EntryPoint); // Function BP_Collectible_Barley_B2.BP_Collectible_Barley_B2_C.ExecuteUbergraph_BP_Collectible_Barley_B2
};

