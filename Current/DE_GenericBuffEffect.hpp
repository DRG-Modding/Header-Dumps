#ifndef UE4SS_SDK_DE_GenericBuffEffect_HPP
#define UE4SS_SDK_DE_GenericBuffEffect_HPP

class UDE_GenericBuffEffect_C : public UDrinkEffectComponent
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OnStartEffect(class APlayerCharacter* Character);
    void OnStopEffect();
    void ExecuteUbergraph_DE_GenericBuffEffect(int32 EntryPoint);
};

#endif
