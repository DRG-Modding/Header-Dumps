#ifndef UE4SS_SDK_BP_PlagueController_HPP
#define UE4SS_SDK_BP_PlagueController_HPP

class ABP_PlagueController_C : public APlagueControlActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USpawnActorWithDebrisPosComponent* SpawnActorWithDebrisPos;

    void BndEvt__BP_PlagueController_CallWeaponPodUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void BndEvt__BP_PlagueController_CallWeaponPodUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool CanUse);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_PlagueController(int32 EntryPoint);
};

#endif
