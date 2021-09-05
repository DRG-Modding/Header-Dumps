// BlueprintGeneratedClass BP_Collectible_Barley_B4.BP_Collectible_Barley_B4_C
// Size: 0x300 (Inherited: 0x270)
struct ABP_Collectible_Barley_B4_C : ABP_Collectible_Barley_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	USphereComponent* Sphere; // 0x278(0x08)
	UStaticMeshComponent* Fruit4; // 0x280(0x08)
	UStaticMeshComponent* Stem4; // 0x288(0x08)
	UStaticMeshComponent* Fruit3; // 0x290(0x08)
	UStaticMeshComponent* Stem3; // 0x298(0x08)
	UStaticMeshComponent* Fruit2; // 0x2a0(0x08)
	UStaticMeshComponent* Stem2; // 0x2a8(0x08)
	UStaticMeshComponent* Fruit1; // 0x2b0(0x08)
	UStaticMeshComponent* Stem1; // 0x2b8(0x08)
	float Timeline_3_NewCurveBase_F2EAE79A48FEF78FA29C98A2B8B2415B; // 0x2c0(0x04)
	enum class ETimelineDirection Timeline_3__Direction_F2EAE79A48FEF78FA29C98A2B8B2415B; // 0x2c4(0x01)
	UTimelineComponent* Timeline_4; // 0x2c8(0x08)
	float Timeline_2_NewCurveBase_9EB4F50B457A613DE634CDA4A4D41FE0; // 0x2d0(0x04)
	enum class ETimelineDirection Timeline_2__Direction_9EB4F50B457A613DE634CDA4A4D41FE0; // 0x2d4(0x01)
	UTimelineComponent* Timeline_3; // 0x2d8(0x08)
	float Timeline_1_NewCurveBase_7B9675034F5062F142FD908FD2344343; // 0x2e0(0x04)
	enum class ETimelineDirection Timeline_1__Direction_7B9675034F5062F142FD908FD2344343; // 0x2e4(0x01)
	UTimelineComponent* Timeline_2; // 0x2e8(0x08)
	float Timeline_0_NewCurveBase_0AC282ED4312AED5464F70ACB4C3BD8F; // 0x2f0(0x04)
	enum class ETimelineDirection Timeline_0__Direction_0AC282ED4312AED5464F70ACB4C3BD8F; // 0x2f4(0x01)
	UTimelineComponent* Timeline_1; // 0x2f8(0x08)

	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void Timeline_3__FinishedFunc();
	void Timeline_3__UpdateFunc();
	void PickedUp();
	void ExecuteUbergraph_BP_Collectible_Barley_B4(int32_t EntryPoint);
};

