// BlueprintGeneratedClass BP_DropPod_Escape_Escort.BP_DropPod_Escape_Escort_C
// Size: 0xa40 (Inherited: 0x9a8)
struct ABP_DropPod_Escape_Escort_C : ABP_DropPod_Escape_Normal_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9a8(0x08)
	struct UStaticMeshComponent* SM_Doretta_Broken; // 0x9b0(0x08)
	struct UBoxComponent* DorettaCollision; // 0x9b8(0x08)
	struct UBoxComponent* DorettaHeadChecker; // 0x9c0(0x08)
	float DorettaHeadMove_Alpha_C2033C6740443751B5AF4294D2EFCD51; // 0x9c8(0x04)
	char DorettaHeadMove__Direction_C2033C6740443751B5AF4294D2EFCD51; // 0x9cc(0x01)
	char UnknownData_9CD[0x3]; // 0x9cd(0x03)
	struct UTimelineComponent* DorettaHeadMove; // 0x9d0(0x08)
	bool IsDorettaHeadInside; // 0x9d8(0x01)
	char UnknownData_9D9[0x7]; // 0x9d9(0x07)
	struct FTransform DorettaStart; // 0x9e0(0x30)
	struct FTransform DorettaEnd; // 0xa10(0x30)

	void OnRep_IsDorettaHeadInside(); // Function BP_DropPod_Escape_Escort.BP_DropPod_Escape_Escort_C.OnRep_IsDorettaHeadInside
	void DorettaHeadMove__FinishedFunc(); // Function BP_DropPod_Escape_Escort.BP_DropPod_Escape_Escort_C.DorettaHeadMove__FinishedFunc
	void DorettaHeadMove__UpdateFunc(); // Function BP_DropPod_Escape_Escort.BP_DropPod_Escape_Escort_C.DorettaHeadMove__UpdateFunc
	void OnPrepForTakeOff(); // Function BP_DropPod_Escape_Escort.BP_DropPod_Escape_Escort_C.OnPrepForTakeOff
	void Transfer Doretta(struct FTransform DorettaHeadTransform); // Function BP_DropPod_Escape_Escort.BP_DropPod_Escape_Escort_C.Transfer Doretta
	void ServerHandleDorettaHead(struct ADorrettaHead* DorettaHead); // Function BP_DropPod_Escape_Escort.BP_DropPod_Escape_Escort_C.ServerHandleDorettaHead
	void BndEvt__DorettaHeadChecker_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_DropPod_Escape_Escort.BP_DropPod_Escape_Escort_C.BndEvt__DorettaHeadChecker_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	void ExecuteUbergraph_BP_DropPod_Escape_Escort(int32_t EntryPoint); // Function BP_DropPod_Escape_Escort.BP_DropPod_Escape_Escort_C.ExecuteUbergraph_BP_DropPod_Escape_Escort
};

