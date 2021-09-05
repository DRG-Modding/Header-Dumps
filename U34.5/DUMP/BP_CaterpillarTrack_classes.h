// BlueprintGeneratedClass BP_CaterpillarTrack.BP_CaterpillarTrack_C
// Size: 0x2b4 (Inherited: 0x248)
struct ABP_CaterpillarTrack_C : AEscortMuleTrack {
	FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x250(0x08)
	UInstancedMeshOnSpline* InstancedMeshOnSpline1; // 0x258(0x08)
	UOutlineComponent* outline; // 0x260(0x08)
	UStaticMeshComponent* SM_DrillDozer_Threads_Shape_Template; // 0x268(0x08)
	USplineComponent* SourceSpline; // 0x270(0x08)
	USkeletalMeshComponent* SkeletalMesh; // 0x278(0x08)
	USplineComponent* TargetSpline; // 0x280(0x08)
	USceneComponent* DefaultSceneRoot; // 0x288(0x08)
	FVector LastTrace; // 0x290(0x0c)
	FVector CurrTrace; // 0x29c(0x0c)
	float DeltaTime; // 0x2a8(0x04)
	float Speed; // 0x2ac(0x04)
	float JointSpeedFactor; // 0x2b0(0x04)

	void Line Trace(FVector Start, FVector End, FVector Hit, bool DidHit);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void UpdateTrackSpeed();
	void ParentOutlineChanged(enum class EOutline InOutline);
	void ExecuteUbergraph_BP_CaterpillarTrack(int32_t EntryPoint);
};

