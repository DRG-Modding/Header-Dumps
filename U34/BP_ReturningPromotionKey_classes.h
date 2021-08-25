// BlueprintGeneratedClass BP_ReturningPromotionKey.BP_ReturningPromotionKey_C
// Size: 0x3ec (Inherited: 0x378)
struct ABP_ReturningPromotionKey_C : ADeepPathfinderCharacter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x08)
	struct UAudioComponent* MovingAudioComponent; // 0x380(0x08)
	struct UStaticMeshComponent* KeyMesh; // 0x388(0x08)
	struct USceneComponent* KeyMover; // 0x390(0x08)
	char UnknownData_398[0x8]; // 0x398(0x08)
	struct FTransform KeyTransform; // 0x3a0(0x30)
	float alpha; // 0x3d0(0x04)
	char UnknownData_3D4[0x4]; // 0x3d4(0x04)
	struct APlayerCharacter* Target; // 0x3d8(0x08)
	struct FVector StartLocation; // 0x3e0(0x0c)

	void MoveTowardsCamera(bool Finished); // Function BP_ReturningPromotionKey.BP_ReturningPromotionKey_C.MoveTowardsCamera
	void OnTick_FDAEBDB24C3AD5E8021577B83AA4B3FD(float DeltaTime, float NormalizedTime); // Function BP_ReturningPromotionKey.BP_ReturningPromotionKey_C.OnTick_FDAEBDB24C3AD5E8021577B83AA4B3FD
	void Completed_FDAEBDB24C3AD5E8021577B83AA4B3FD(float DeltaTime, float NormalizedTime); // Function BP_ReturningPromotionKey.BP_ReturningPromotionKey_C.Completed_FDAEBDB24C3AD5E8021577B83AA4B3FD
	void MoveToCharacter(struct APlayerCharacter* InTarget); // Function BP_ReturningPromotionKey.BP_ReturningPromotionKey_C.MoveToCharacter
	void ReceiveBeginPlay(); // Function BP_ReturningPromotionKey.BP_ReturningPromotionKey_C.ReceiveBeginPlay
	void BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_0_PathFinished__DelegateSignature(bool success); // Function BP_ReturningPromotionKey.BP_ReturningPromotionKey_C.BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_0_PathFinished__DelegateSignature
	void ExecuteUbergraph_BP_ReturningPromotionKey(int32_t EntryPoint); // Function BP_ReturningPromotionKey.BP_ReturningPromotionKey_C.ExecuteUbergraph_BP_ReturningPromotionKey
};

