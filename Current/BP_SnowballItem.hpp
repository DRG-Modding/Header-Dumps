#ifndef UE4SS_SDK_BP_SnowballItem_HPP
#define UE4SS_SDK_BP_SnowballItem_HPP

class ABP_SnowballItem_C : public AHolidayThrowableItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* Throwlocation;

    void ReceiveItemThrown(class AThrowableActor* thrownActor);
    void RemovedFromInventory(class ACharacter* oldCharacter);
    void OnReceiveEquippedFinished();
    void ExecuteUbergraph_BP_SnowballItem(int32 EntryPoint);
};

#endif
