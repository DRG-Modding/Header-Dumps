// BlueprintGeneratedClass BP_CabinController.BP_CabinController_C
// Size: 0x258 (Inherited: 0x220)
struct ABP_CabinController_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	ABP_CabinOwnerSign_C* CabinSign; // 0x230(0x08)
	ABP_PlayerController_SpaceRig_C* CabinOwner; // 0x238(0x08)
	AFSDPlayerState* OwnerState; // 0x240(0x08)
	ASpacerigStart* StartSpot; // 0x248(0x08)
	ABP_DeathStats_C* InfirmaryStats; // 0x250(0x08)

	void OnRep_OwnerState();
	void ReceiveBeginPlay();
	void RemoveOwner();
	void Set Cabin Owner(AFSDPlayerController* Controller);
	void Controller leave(AActor* DestroyedActor);
	void ExecuteUbergraph_BP_CabinController(int32_t EntryPoint);
};

