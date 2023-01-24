#ifndef UE4SS_SDK_DE_MinersLament_HPP
#define UE4SS_SDK_DE_MinersLament_HPP

class UDE_MinersLament_C : public UDrinkEffectComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class APlayerCharacter* Character;

    void OnStartEffect(class APlayerCharacter* Character);
    void OnStopEffect();
    void ExecuteUbergraph_DE_MinersLament(int32 EntryPoint);
};

#endif
