// BlueprintGeneratedClass BP_DropPod_Escape_Escort.BP_DropPod_Escape_Escort_C
// Size: 0xa40 (Inherited: 0x9a8)
struct ABP_DropPod_Escape_Escort_C : ABP_DropPod_Escape_Normal_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x9a8(0x08)
	UStaticMeshComponent* SM_Doretta_Broken; // 0x9b0(0x08)
	UBoxComponent* DorettaCollision; // 0x9b8(0x08)
	UBoxComponent* DorettaHeadChecker; // 0x9c0(0x08)
	float DorettaHeadMove_Alpha_C2033C6740443751B5AF4294D2EFCD51; // 0x9c8(0x04)
	enum class ETimelineDirection DorettaHeadMove__Direction_C2033C6740443751B5AF4294D2EFCD51; // 0x9cc(0x01)
	UTimelineComponent* DorettaHeadMove; // 0x9d0(0x08)
	bool IsDorettaHeadInside; // 0x9d8(0x01)
	FTransform DorettaStart; // 0x9e0(0x30)
	FTransform DorettaEnd; // 0xa10(0x30)

	void OnRep_IsDorettaHeadInside();
	void DorettaHeadMove__FinishedFunc();
	void DorettaHeadMove__UpdateFunc();
	void OnPrepForTakeOff();
	void Transfer Doretta(FTransform DorettaHeadTransform);
	void ServerHandleDorettaHead(ADorrettaHead* DorettaHead);
	void BndEvt__DorettaHeadChecker_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void ExecuteUbergraph_BP_DropPod_Escape_Escort(int32_t EntryPoint);
};

