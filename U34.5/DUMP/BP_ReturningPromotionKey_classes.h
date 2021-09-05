// BlueprintGeneratedClass BP_ReturningPromotionKey.BP_ReturningPromotionKey_C
// Size: 0x3ec (Inherited: 0x378)
struct ABP_ReturningPromotionKey_C : ADeepPathfinderCharacter {
	FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x08)
	UAudioComponent* MovingAudioComponent; // 0x380(0x08)
	UStaticMeshComponent* KeyMesh; // 0x388(0x08)
	USceneComponent* KeyMover; // 0x390(0x08)
	FTransform KeyTransform; // 0x3a0(0x30)
	float alpha; // 0x3d0(0x04)
	APlayerCharacter* Target; // 0x3d8(0x08)
	FVector StartLocation; // 0x3e0(0x0c)

	void MoveTowardsCamera(bool Finished);
	void OnTick_FDAEBDB24C3AD5E8021577B83AA4B3FD(float DeltaTime, float NormalizedTime);
	void Completed_FDAEBDB24C3AD5E8021577B83AA4B3FD(float DeltaTime, float NormalizedTime);
	void MoveToCharacter(APlayerCharacter* InTarget);
	void ReceiveBeginPlay();
	void BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_0_PathFinished__DelegateSignature(bool success);
	void ExecuteUbergraph_BP_ReturningPromotionKey(int32_t EntryPoint);
};

