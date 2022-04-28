#ifndef UE4SS_SDK_DE_GutWrecker_HPP
#define UE4SS_SDK_DE_GutWrecker_HPP

class UDE_GutWrecker_C : public UDrinkEffectComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class APlayerCharacter* Character;

    void ReceiveTick(float DeltaSeconds);
    void OnStartEffect(class APlayerCharacter* Character);
    void OnStopEffect();
    void ExecuteUbergraph_DE_GutWrecker(int32 EntryPoint);
};

#endif
