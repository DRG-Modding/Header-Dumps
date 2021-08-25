// BlueprintGeneratedClass BP_Bulkhead01.BP_Bulkhead01_C
// Size: 0x29d (Inherited: 0x220)
struct ABP_Bulkhead01_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UBoxComponent* SideCollider1; // 0x228(0x08)
	struct UBoxComponent* SideCollider; // 0x230(0x08)
	struct UBoxComponent* Collider; // 0x238(0x08)
	struct USkeletalMeshComponent* Mesh_Door; // 0x240(0x08)
	struct UBoxComponent* TriggerBox; // 0x248(0x08)
	struct USceneComponent* SharedRoot; // 0x250(0x08)
	float TL_Open_Movement_20FE459B46C78C2032475C820E41D3EA; // 0x258(0x04)
	char TL_Open__Direction_20FE459B46C78C2032475C820E41D3EA; // 0x25c(0x01)
	char UnknownData_25D[0x3]; // 0x25d(0x03)
	struct UTimelineComponent* TL_Open; // 0x260(0x08)
	float Driver_Movement_137D39154F4F54A9387D6EB46EC05709; // 0x268(0x04)
	char Driver__Direction_137D39154F4F54A9387D6EB46EC05709; // 0x26c(0x01)
	char UnknownData_26D[0x3]; // 0x26d(0x03)
	struct UTimelineComponent* Driver; // 0x270(0x08)
	float Open_Time; // 0x278(0x04)
	char UnknownData_27C[0x4]; // 0x27c(0x04)
	struct TArray<struct APlayerCharacter*> Players; // 0x280(0x10)
	bool IsOpen; // 0x290(0x01)
	char UnknownData_291[0x3]; // 0x291(0x03)
	float TimeSinceLastSwap; // 0x294(0x04)
	float MinDoorTime; // 0x298(0x04)
	bool DoorCanOpen; // 0x29c(0x01)

	void HasPlayersNearby(bool AnyPlayers); // Function BP_Bulkhead01.BP_Bulkhead01_C.HasPlayersNearby
	void OnRep_IsOpen(); // Function BP_Bulkhead01.BP_Bulkhead01_C.OnRep_IsOpen
	void Driver__FinishedFunc(); // Function BP_Bulkhead01.BP_Bulkhead01_C.Driver__FinishedFunc
	void Driver__UpdateFunc(); // Function BP_Bulkhead01.BP_Bulkhead01_C.Driver__UpdateFunc
	void TL_Open__FinishedFunc(); // Function BP_Bulkhead01.BP_Bulkhead01_C.TL_Open__FinishedFunc
	void TL_Open__UpdateFunc(); // Function BP_Bulkhead01.BP_Bulkhead01_C.TL_Open__UpdateFunc
	void Open(); // Function BP_Bulkhead01.BP_Bulkhead01_C.Open
	void BndEvt__TriggerBox_K2Node_ComponentBoundEvent_233_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_Bulkhead01.BP_Bulkhead01_C.BndEvt__TriggerBox_K2Node_ComponentBoundEvent_233_ComponentEndOverlapSignature__DelegateSignature
	void BndEvt__TriggerBox_K2Node_ComponentBoundEvent_222_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_Bulkhead01.BP_Bulkhead01_C.BndEvt__TriggerBox_K2Node_ComponentBoundEvent_222_ComponentBeginOverlapSignature__DelegateSignature
	void Close(); // Function BP_Bulkhead01.BP_Bulkhead01_C.Close
	void ReceiveTick(float DeltaSeconds); // Function BP_Bulkhead01.BP_Bulkhead01_C.ReceiveTick
	void ExecuteUbergraph_BP_Bulkhead01(int32_t EntryPoint); // Function BP_Bulkhead01.BP_Bulkhead01_C.ExecuteUbergraph_BP_Bulkhead01
};

