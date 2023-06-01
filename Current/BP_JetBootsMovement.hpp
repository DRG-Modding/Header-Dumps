#ifndef UE4SS_SDK_BP_JetBootsMovement_HPP
#define UE4SS_SDK_BP_JetBootsMovement_HPP

class UBP_JetBootsMovement_C : public UJetBootsMovementComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    TSubclassOf<class UStatusEffect> StatusEffect;
    class UHUD_JetBootsFuel_Vertical_C* FuelWidget;
    class ABP_JetBootsBurnTrigger_C* SpawnedBurnTrigger;

    void FuelUpdated_Event_0(float jetFuel, bool overHeated);
    void Receive_OnCharacterSet(class APlayerCharacter* Player);
    void Receive_OnActiveChangedLocal(bool IsActive, bool fromTakeOff);
    void BindToFuelUsed();
    void OnFuelUsed(float jetFuel, bool overHeated);
    void Receive_OnDestroy();
    void Receive_OnOverheatedChanged(bool overHeated);
    void Receive_OnActiveChangedNonLocal(bool IsActive, bool fromTakeOff);
    void Receive_OnTakeOffLocal();
    void Receive_OnActiveChangedServer(bool IsActive, bool fromTakeOff);
    void ExecuteUbergraph_BP_JetBootsMovement(int32 EntryPoint);
};

#endif
