// BlueprintGeneratedClass BP_SelfiePoint.BP_SelfiePoint_C
// Size: 0x224 (Inherited: 0x1f0)
struct UBP_SelfiePoint_C : USceneComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1f0(0x08)
	ACameraActor* Camera; // 0x1f8(0x08)
	float FOV; // 0x200(0x04)
	float EaseMultiplier; // 0x204(0x04)
	enum class EEasingFunc EaseFunction; // 0x208(0x01)
	float BlendExp; // 0x20c(0x04)
	int32_t Steps; // 0x210(0x04)
	bool LookAtPlayerOffset; // 0x214(0x01)
	FVector PlayerOffset; // 0x218(0x0c)

	FTransform GetTargetTransform();
	void DeactivateCamera();
	void ActivateCamera();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_SelfiePoint(int32_t EntryPoint);
};

