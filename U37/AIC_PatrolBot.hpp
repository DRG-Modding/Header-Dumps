#ifndef UE4SS_SDK_AIC_PatrolBot_HPP
#define UE4SS_SDK_AIC_PatrolBot_HPP

class AAIC_PatrolBot_C : public AEnemyAIController
{
    FPointerToUberGraphFrame UberGraphFrame;

    void SetActive(bool boolValue);
    void ReceivePossess(class APawn* PossessedPawn);
    void SetReadyToHack(bool boolValue);
    void Hacked(class APlayerCharacter* HackingPlayer);
    void ActivateDrone();
    void ExecuteUbergraph_AIC_PatrolBot(int32 EntryPoint);
};

#endif
