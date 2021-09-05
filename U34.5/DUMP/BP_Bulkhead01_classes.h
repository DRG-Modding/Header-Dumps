// BlueprintGeneratedClass BP_Bulkhead01.BP_Bulkhead01_C
// Size: 0x29d (Inherited: 0x220)
struct ABP_Bulkhead01_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UBoxComponent* SideCollider1; // 0x228(0x08)
	UBoxComponent* SideCollider; // 0x230(0x08)
	UBoxComponent* Collider; // 0x238(0x08)
	USkeletalMeshComponent* Mesh_Door; // 0x240(0x08)
	UBoxComponent* TriggerBox; // 0x248(0x08)
	USceneComponent* SharedRoot; // 0x250(0x08)
	float TL_Open_Movement_20FE459B46C78C2032475C820E41D3EA; // 0x258(0x04)
	enum class ETimelineDirection TL_Open__Direction_20FE459B46C78C2032475C820E41D3EA; // 0x25c(0x01)
	UTimelineComponent* TL_Open; // 0x260(0x08)
	float Driver_Movement_137D39154F4F54A9387D6EB46EC05709; // 0x268(0x04)
	enum class ETimelineDirection Driver__Direction_137D39154F4F54A9387D6EB46EC05709; // 0x26c(0x01)
	UTimelineComponent* Driver; // 0x270(0x08)
	float Open_Time; // 0x278(0x04)
	TArray<APlayerCharacter*> Players; // 0x280(0x10)
	bool IsOpen; // 0x290(0x01)
	float TimeSinceLastSwap; // 0x294(0x04)
	float MinDoorTime; // 0x298(0x04)
	bool DoorCanOpen; // 0x29c(0x01)

	void HasPlayersNearby(bool AnyPlayers);
	void OnRep_IsOpen();
	void Driver__FinishedFunc();
	void Driver__UpdateFunc();
	void TL_Open__FinishedFunc();
	void TL_Open__UpdateFunc();
	void Open();
	void BndEvt__TriggerBox_K2Node_ComponentBoundEvent_233_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	void BndEvt__TriggerBox_K2Node_ComponentBoundEvent_222_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void Close();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_Bulkhead01(int32_t EntryPoint);
};

