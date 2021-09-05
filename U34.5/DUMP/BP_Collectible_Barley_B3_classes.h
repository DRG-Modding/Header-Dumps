// BlueprintGeneratedClass BP_Collectible_Barley_B3.BP_Collectible_Barley_B3_C
// Size: 0x2e0 (Inherited: 0x270)
struct ABP_Collectible_Barley_B3_C : ABP_Collectible_Barley_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	USphereComponent* Sphere; // 0x278(0x08)
	UStaticMeshComponent* Fruit3; // 0x280(0x08)
	UStaticMeshComponent* Stem3; // 0x288(0x08)
	UStaticMeshComponent* Fruit2; // 0x290(0x08)
	UStaticMeshComponent* Stem2; // 0x298(0x08)
	UStaticMeshComponent* Fruit1; // 0x2a0(0x08)
	UStaticMeshComponent* Stem1; // 0x2a8(0x08)
	float Timeline_2_NewCurveBase_1FDF43BE4AF07E2CE6F71CAF12F09ACD; // 0x2b0(0x04)
	enum class ETimelineDirection Timeline_2__Direction_1FDF43BE4AF07E2CE6F71CAF12F09ACD; // 0x2b4(0x01)
	UTimelineComponent* Timeline_3; // 0x2b8(0x08)
	float Timeline_1_NewCurveBase_7A5054814387413FA1615C9F5DFBC685; // 0x2c0(0x04)
	enum class ETimelineDirection Timeline_1__Direction_7A5054814387413FA1615C9F5DFBC685; // 0x2c4(0x01)
	UTimelineComponent* Timeline_2; // 0x2c8(0x08)
	float Timeline_0_NewCurveBase_ACC981FB454397383DE59DB39B566683; // 0x2d0(0x04)
	enum class ETimelineDirection Timeline_0__Direction_ACC981FB454397383DE59DB39B566683; // 0x2d4(0x01)
	UTimelineComponent* Timeline_1; // 0x2d8(0x08)

	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void PickedUp();
	void ExecuteUbergraph_BP_Collectible_Barley_B3(int32_t EntryPoint);
};

