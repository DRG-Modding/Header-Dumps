#ifndef UE4SS_SDK_DE_CanaryDew_HPP
#define UE4SS_SDK_DE_CanaryDew_HPP

class UDE_CanaryDew_C : public UDrinkEffectComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class APlayerCharacter* Character;

    void OnStartEffect(class APlayerCharacter* Character);
    void OnStopEffect();
    void ExecuteUbergraph_DE_CanaryDew(int32 EntryPoint);
};

#endif
