// BlueprintGeneratedClass BP_MemorialWall.BP_MemorialWall_C
// Size: 0x264 (Inherited: 0x220)
struct ABP_MemorialWall_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UAudioComponent* Audio; // 0x228(0x08)
	USphereComponent* Sphere; // 0x230(0x08)
	USphereComponent* DanceSphere; // 0x238(0x08)
	UStaticMeshComponent* Cube; // 0x240(0x08)
	UWidgetComponent* Widget; // 0x248(0x08)
	USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	bool IsControlled; // 0x258(0x01)
	float FastSpeed; // 0x25c(0x04)
	float SlowSpeed; // 0x260(0x04)

	void SetFastScrollSpeed(bool flag);
	void SetIsControlled();
	void ReceiveBeginPlay();
	void ReceiveActorEndOverlap(AActor* OtherActor);
	void ReceiveActorBeginOverlap(AActor* OtherActor);
	void BndEvt__DanceSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void BndEvt__DanceSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	void ExecuteUbergraph_BP_MemorialWall(int32_t EntryPoint);
};

