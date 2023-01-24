#ifndef UE4SS_SDK_BP_WaterballoonItem_HPP
#define UE4SS_SDK_BP_WaterballoonItem_HPP

class ABP_WaterballoonItem_C : public AHolidayThrowableItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* Throwlocation;

    void ReceiveItemThrown(class AThrowableActor* thrownActor);
    void RemovedFromInventory(class ACharacter* oldCharacter);
    void RecieveEquipped();
    void ExecuteUbergraph_BP_WaterballoonItem(int32 EntryPoint);
};

#endif
