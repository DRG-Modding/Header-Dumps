// BlueprintGeneratedClass BP_DetPack_Charge.BP_DetPack_Charge_C
// Size: 0x2f1 (Inherited: 0x288)
struct ABP_DetPack_Charge_C : ADetPack {
	FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	UOutlineComponent* outline; // 0x290(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x298(0x08)
	USphereComponent* Useable; // 0x2a0(0x08)
	UDamageComponent* Damage; // 0x2a8(0x08)
	UStaticMeshComponent* Sphere; // 0x2b0(0x08)
	UAudioComponent* Audio; // 0x2b8(0x08)
	USkeletalMeshComponent* SkeletalMesh; // 0x2c0(0x08)
	UBoxComponent* Box; // 0x2c8(0x08)
	float SphereTimeline_Alpha_B734CAA34EA448BC3B483384E4E415D3; // 0x2d0(0x04)
	float SphereTimeline_Scale_B734CAA34EA448BC3B483384E4E415D3; // 0x2d4(0x04)
	enum class ETimelineDirection SphereTimeline__Direction_B734CAA34EA448BC3B483384E4E415D3; // 0x2d8(0x01)
	UTimelineComponent* SphereTimeline; // 0x2e0(0x08)
	UMaterialInstanceDynamic* SphereMaterial; // 0x2e8(0x08)
	bool IsPlaced; // 0x2f0(0x01)

	void OnRep_IsPlaced();
	void UserConstructionScript();
	void SphereTimeline__FinishedFunc();
	void SphereTimeline__UpdateFunc();
	void ReceiveBeginPlay();
	void RecieveHitObject();
	void OnExploded();
	void Show Warning Sphere();
	void ExecuteUbergraph_BP_DetPack_Charge(int32_t EntryPoint);
};

