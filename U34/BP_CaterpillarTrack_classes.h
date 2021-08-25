// BlueprintGeneratedClass BP_CaterpillarTrack.BP_CaterpillarTrack_C
// Size: 0x2b4 (Inherited: 0x248)
struct ABP_CaterpillarTrack_C : AEscortMuleTrack {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x250(0x08)
	struct UInstancedMeshOnSpline* InstancedMeshOnSpline1; // 0x258(0x08)
	struct UOutlineComponent* outline; // 0x260(0x08)
	struct UStaticMeshComponent* SM_DrillDozer_Threads_Shape_Template; // 0x268(0x08)
	struct USplineComponent* SourceSpline; // 0x270(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x278(0x08)
	struct USplineComponent* TargetSpline; // 0x280(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x288(0x08)
	struct FVector LastTrace; // 0x290(0x0c)
	struct FVector CurrTrace; // 0x29c(0x0c)
	float DeltaTime; // 0x2a8(0x04)
	float Speed; // 0x2ac(0x04)
	float JointSpeedFactor; // 0x2b0(0x04)

	void Line Trace(struct FVector Start, struct FVector End, struct FVector Hit, bool DidHit); // Function BP_CaterpillarTrack.BP_CaterpillarTrack_C.Line Trace
	void UserConstructionScript(); // Function BP_CaterpillarTrack.BP_CaterpillarTrack_C.UserConstructionScript
	void ReceiveBeginPlay(); // Function BP_CaterpillarTrack.BP_CaterpillarTrack_C.ReceiveBeginPlay
	void UpdateTrackSpeed(); // Function BP_CaterpillarTrack.BP_CaterpillarTrack_C.UpdateTrackSpeed
	void ParentOutlineChanged(enum class EOutline InOutline); // Function BP_CaterpillarTrack.BP_CaterpillarTrack_C.ParentOutlineChanged
	void ExecuteUbergraph_BP_CaterpillarTrack(int32_t EntryPoint); // Function BP_CaterpillarTrack.BP_CaterpillarTrack_C.ExecuteUbergraph_BP_CaterpillarTrack
};

