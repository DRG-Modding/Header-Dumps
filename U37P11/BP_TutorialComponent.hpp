#ifndef UE4SS_SDK_BP_TutorialComponent_HPP
#define UE4SS_SDK_BP_TutorialComponent_HPP

class UBP_TutorialComponent_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class APlayerCharacter* Character;

    void ReceiveBeginPlay();
    void OnPlayerCharacterRegistered_Event_0(class APlayerCharacter* PlayerCharacter);
    void OnDamageTaken(float Amount);
    void CheckAmmo();
    void ExecuteUbergraph_BP_TutorialComponent(int32 EntryPoint);
};

#endif
