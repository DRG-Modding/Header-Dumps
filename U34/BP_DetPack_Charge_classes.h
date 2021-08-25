// BlueprintGeneratedClass BP_DetPack_Charge.BP_DetPack_Charge_C
// Size: 0x2f1 (Inherited: 0x288)
struct ABP_DetPack_Charge_C : ADetPack {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UOutlineComponent* outline; // 0x290(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x298(0x08)
	struct USphereComponent* Useable; // 0x2a0(0x08)
	struct UDamageComponent* Damage; // 0x2a8(0x08)
	struct UStaticMeshComponent* Sphere; // 0x2b0(0x08)
	struct UAudioComponent* Audio; // 0x2b8(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x2c0(0x08)
	struct UBoxComponent* Box; // 0x2c8(0x08)
	float SphereTimeline_Alpha_B734CAA34EA448BC3B483384E4E415D3; // 0x2d0(0x04)
	float SphereTimeline_Scale_B734CAA34EA448BC3B483384E4E415D3; // 0x2d4(0x04)
	char SphereTimeline__Direction_B734CAA34EA448BC3B483384E4E415D3; // 0x2d8(0x01)
	char UnknownData_2D9[0x7]; // 0x2d9(0x07)
	struct UTimelineComponent* SphereTimeline; // 0x2e0(0x08)
	struct UMaterialInstanceDynamic* SphereMaterial; // 0x2e8(0x08)
	bool IsPlaced; // 0x2f0(0x01)

	void OnRep_IsPlaced(); // Function BP_DetPack_Charge.BP_DetPack_Charge_C.OnRep_IsPlaced
	void UserConstructionScript(); // Function BP_DetPack_Charge.BP_DetPack_Charge_C.UserConstructionScript
	void SphereTimeline__FinishedFunc(); // Function BP_DetPack_Charge.BP_DetPack_Charge_C.SphereTimeline__FinishedFunc
	void SphereTimeline__UpdateFunc(); // Function BP_DetPack_Charge.BP_DetPack_Charge_C.SphereTimeline__UpdateFunc
	void ReceiveBeginPlay(); // Function BP_DetPack_Charge.BP_DetPack_Charge_C.ReceiveBeginPlay
	void RecieveHitObject(); // Function BP_DetPack_Charge.BP_DetPack_Charge_C.RecieveHitObject
	void OnExploded(); // Function BP_DetPack_Charge.BP_DetPack_Charge_C.OnExploded
	void Show Warning Sphere(); // Function BP_DetPack_Charge.BP_DetPack_Charge_C.Show Warning Sphere
	void ExecuteUbergraph_BP_DetPack_Charge(int32_t EntryPoint); // Function BP_DetPack_Charge.BP_DetPack_Charge_C.ExecuteUbergraph_BP_DetPack_Charge
};

