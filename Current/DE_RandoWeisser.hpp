#ifndef UE4SS_SDK_DE_RandoWeisser_HPP
#define UE4SS_SDK_DE_RandoWeisser_HPP

class UDE_RandoWeisser_C : public UDrinkEffectComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class APlayerCharacter* Character;

    void OnStartEffect(class APlayerCharacter* Character);
    void OnStopEffect();
    void ExecuteUbergraph_DE_RandoWeisser(int32 EntryPoint);
};

#endif
