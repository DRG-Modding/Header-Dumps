#ifndef UE4SS_SDK_CSC_IceCaveLogic_HPP
#define UE4SS_SDK_CSC_IceCaveLogic_HPP

class UCSC_IceCaveLogic_C : public UCaveScriptComponent
{
    FPointerToUberGraphFrame UberGraphFrame;

    void SpawnParticles(class APlayerCharacter* Character);
    void ReceiveBeginPlay();
    void OnPlayerCharacterRegistered(class APlayerCharacter* PlayerCharacter);
    void ExecuteUbergraph_CSC_IceCaveLogic(int32 EntryPoint);
};

#endif
