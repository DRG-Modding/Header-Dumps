// BlueprintGeneratedClass BP_CabinController.BP_CabinController_C
// Size: 0x258 (Inherited: 0x220)
struct ABP_CabinController_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	struct ABP_CabinOwnerSign_C* CabinSign; // 0x230(0x08)
	struct ABP_PlayerController_SpaceRig_C* CabinOwner; // 0x238(0x08)
	struct AFSDPlayerState* OwnerState; // 0x240(0x08)
	struct ASpacerigStart* StartSpot; // 0x248(0x08)
	struct ABP_DeathStats_C* InfirmaryStats; // 0x250(0x08)

	void OnRep_OwnerState(); // Function BP_CabinController.BP_CabinController_C.OnRep_OwnerState
	void ReceiveBeginPlay(); // Function BP_CabinController.BP_CabinController_C.ReceiveBeginPlay
	void RemoveOwner(); // Function BP_CabinController.BP_CabinController_C.RemoveOwner
	void Set Cabin Owner(struct AFSDPlayerController* Controller); // Function BP_CabinController.BP_CabinController_C.Set Cabin Owner
	void Controller leave(struct AActor* DestroyedActor); // Function BP_CabinController.BP_CabinController_C.Controller leave
	void ExecuteUbergraph_BP_CabinController(int32_t EntryPoint); // Function BP_CabinController.BP_CabinController_C.ExecuteUbergraph_BP_CabinController
};

