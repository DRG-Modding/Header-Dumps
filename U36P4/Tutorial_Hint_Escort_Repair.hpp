#ifndef UE4SS_SDK_Tutorial_Hint_Escort_Repair_HPP
#define UE4SS_SDK_Tutorial_Hint_Escort_Repair_HPP

class UTutorial_Hint_Escort_Repair_C : public UTutorialHintComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    float AccumilatedDamage;
    float TotalDamageBeforeShowingHint;
    class AEscortMule* Drilldozer;
    class UFriendlyHealthComponent* DrilldozerHealth;

    void ReceiveOnInitialized();
    void OnPermanentDamage(int32 currSegment, int32 prevSegment);
    void DorettaDamaged(float Amount);
    void ExecuteUbergraph_Tutorial_Hint_Escort_Repair(int32 EntryPoint);
};

#endif
