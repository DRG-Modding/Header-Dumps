// BlueprintGeneratedClass BP_Collectible_Barley_B3.BP_Collectible_Barley_B3_C
// Size: 0x2e0 (Inherited: 0x270)
struct ABP_Collectible_Barley_B3_C : ABP_Collectible_Barley_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct USphereComponent* Sphere; // 0x278(0x08)
	struct UStaticMeshComponent* Fruit3; // 0x280(0x08)
	struct UStaticMeshComponent* Stem3; // 0x288(0x08)
	struct UStaticMeshComponent* Fruit2; // 0x290(0x08)
	struct UStaticMeshComponent* Stem2; // 0x298(0x08)
	struct UStaticMeshComponent* Fruit1; // 0x2a0(0x08)
	struct UStaticMeshComponent* Stem1; // 0x2a8(0x08)
	float Timeline_2_NewCurveBase_1FDF43BE4AF07E2CE6F71CAF12F09ACD; // 0x2b0(0x04)
	char Timeline_2__Direction_1FDF43BE4AF07E2CE6F71CAF12F09ACD; // 0x2b4(0x01)
	char UnknownData_2B5[0x3]; // 0x2b5(0x03)
	struct UTimelineComponent* Timeline_3; // 0x2b8(0x08)
	float Timeline_1_NewCurveBase_7A5054814387413FA1615C9F5DFBC685; // 0x2c0(0x04)
	char Timeline_1__Direction_7A5054814387413FA1615C9F5DFBC685; // 0x2c4(0x01)
	char UnknownData_2C5[0x3]; // 0x2c5(0x03)
	struct UTimelineComponent* Timeline_2; // 0x2c8(0x08)
	float Timeline_0_NewCurveBase_ACC981FB454397383DE59DB39B566683; // 0x2d0(0x04)
	char Timeline_0__Direction_ACC981FB454397383DE59DB39B566683; // 0x2d4(0x01)
	char UnknownData_2D5[0x3]; // 0x2d5(0x03)
	struct UTimelineComponent* Timeline_1; // 0x2d8(0x08)

	void UserConstructionScript(); // Function BP_Collectible_Barley_B3.BP_Collectible_Barley_B3_C.UserConstructionScript
	void Timeline_0__FinishedFunc(); // Function BP_Collectible_Barley_B3.BP_Collectible_Barley_B3_C.Timeline_0__FinishedFunc
	void Timeline_0__UpdateFunc(); // Function BP_Collectible_Barley_B3.BP_Collectible_Barley_B3_C.Timeline_0__UpdateFunc
	void Timeline_1__FinishedFunc(); // Function BP_Collectible_Barley_B3.BP_Collectible_Barley_B3_C.Timeline_1__FinishedFunc
	void Timeline_1__UpdateFunc(); // Function BP_Collectible_Barley_B3.BP_Collectible_Barley_B3_C.Timeline_1__UpdateFunc
	void Timeline_2__FinishedFunc(); // Function BP_Collectible_Barley_B3.BP_Collectible_Barley_B3_C.Timeline_2__FinishedFunc
	void Timeline_2__UpdateFunc(); // Function BP_Collectible_Barley_B3.BP_Collectible_Barley_B3_C.Timeline_2__UpdateFunc
	void PickedUp(); // Function BP_Collectible_Barley_B3.BP_Collectible_Barley_B3_C.PickedUp
	void ExecuteUbergraph_BP_Collectible_Barley_B3(int32_t EntryPoint); // Function BP_Collectible_Barley_B3.BP_Collectible_Barley_B3_C.ExecuteUbergraph_BP_Collectible_Barley_B3
};

