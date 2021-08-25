// BlueprintGeneratedClass BP_MemorialWall.BP_MemorialWall_C
// Size: 0x264 (Inherited: 0x220)
struct ABP_MemorialWall_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UAudioComponent* Audio; // 0x228(0x08)
	struct USphereComponent* Sphere; // 0x230(0x08)
	struct USphereComponent* DanceSphere; // 0x238(0x08)
	struct UStaticMeshComponent* Cube; // 0x240(0x08)
	struct UWidgetComponent* Widget; // 0x248(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	bool IsControlled; // 0x258(0x01)
	char UnknownData_259[0x3]; // 0x259(0x03)
	float FastSpeed; // 0x25c(0x04)
	float SlowSpeed; // 0x260(0x04)

	void SetFastScrollSpeed(bool flag); // Function BP_MemorialWall.BP_MemorialWall_C.SetFastScrollSpeed
	void SetIsControlled(); // Function BP_MemorialWall.BP_MemorialWall_C.SetIsControlled
	void ReceiveBeginPlay(); // Function BP_MemorialWall.BP_MemorialWall_C.ReceiveBeginPlay
	void ReceiveActorEndOverlap(struct AActor* OtherActor); // Function BP_MemorialWall.BP_MemorialWall_C.ReceiveActorEndOverlap
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function BP_MemorialWall.BP_MemorialWall_C.ReceiveActorBeginOverlap
	void BndEvt__DanceSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_MemorialWall.BP_MemorialWall_C.BndEvt__DanceSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__DanceSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_MemorialWall.BP_MemorialWall_C.BndEvt__DanceSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	void ExecuteUbergraph_BP_MemorialWall(int32_t EntryPoint); // Function BP_MemorialWall.BP_MemorialWall_C.ExecuteUbergraph_BP_MemorialWall
};

