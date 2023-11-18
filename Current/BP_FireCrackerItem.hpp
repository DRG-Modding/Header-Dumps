#ifndef UE4SS_SDK_BP_FireCrackerItem_HPP
#define UE4SS_SDK_BP_FireCrackerItem_HPP

class ABP_FireCrackerItem_C : public AHolidayThrowableItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* Throwlocation;

    void ReceiveItemThrown(class AThrowableActor* thrownActor);
    void RemovedFromInventory(class ACharacter* oldCharacter);
    void OnReceiveEquippedFinished();
    void ExecuteUbergraph_BP_FireCrackerItem(int32 EntryPoint);
};

#endif
