// BlueprintGeneratedClass BP_SpinningFan01.BP_SpinningFan01_C
// Size: 0x244 (Inherited: 0x230)
struct ABP_SpinningFan01_C : AStaticMeshActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	URotatingMovementComponent* RotatingMovement; // 0x238(0x08)
	float Speed; // 0x240(0x04)

	void SetSpeed(float Speed);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SpinningFan01(int32_t EntryPoint);
};

