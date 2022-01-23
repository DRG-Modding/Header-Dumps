#ifndef UE4SS_SDK_BP_SnowballItem_HPP
#define UE4SS_SDK_BP_SnowballItem_HPP

class ABP_SnowballItem_C : public AThrowableItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* Throwlocation;

    FVector GetThrowLocation(FVector CallFunc_K2_GetComponentLocation_ReturnValue);
    void ReceiveItemThrown(class AThrowableActor* thrownActor);
    void RemovedFromInventory(class ACharacter* oldCharacter);
    void OnReceiveEquippedFinished();
    void RecieveEquipped();
    void ExecuteUbergraph_BP_SnowballItem(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, class AThrowableActor* K2Node_Event_thrownActor, class ACharacter* K2Node_Event_oldCharacter, float CallFunc_Montage_Play_ReturnValue, float CallFunc_Montage_Play_ReturnValue_1, bool CallFunc_IsFirstPerson_ReturnValue, bool CallFunc_IsFirstPerson_ReturnValue_1);
};

#endif
