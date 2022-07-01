#ifndef UE4SS_SDK_BP_CabinController_HPP
#define UE4SS_SDK_BP_CabinController_HPP

class ABP_CabinController_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    class ABP_CabinOwnerSign_C* CabinSign;
    class ABP_PlayerController_SpaceRig_C* CabinOwner;
    class AFSDPlayerState* OwnerState;
    class ASpacerigStart* StartSpot;
    class ABP_DeathStats_C* InfirmaryStats;

    void OnRep_OwnerState();
    void ReceiveBeginPlay();
    void RemoveOwner();
    void Set Cabin Owner(class AFSDPlayerController* Controller);
    void Controller leave(class AActor* DestroyedActor);
    void ExecuteUbergraph_BP_CabinController(int32 EntryPoint);
};

#endif
