#ifndef UE4SS_SDK_DE_ToothGrinder_HPP
#define UE4SS_SDK_DE_ToothGrinder_HPP

class UDE_ToothGrinder_C : public UDrinkEffectComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class APlayerCharacter* Character;

    void OnStartEffect(class APlayerCharacter* Character);
    void OnStopEffect();
    void ExecuteUbergraph_DE_ToothGrinder(int32 EntryPoint);
};

#endif
