#ifndef UE4SS_SDK_DE_ArkenStout_HPP
#define UE4SS_SDK_DE_ArkenStout_HPP

class UDE_ArkenStout_C : public UDrinkEffectComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class APlayerCharacter* Character;

    void OnLoaded_6720846C4CD973CF4158F2B171D4875F(class UObject* Loaded);
    void OnLoaded_6720846C4CD973CF4158F2B1FFC27104(class UObject* Loaded);
    void OnStartEffect(class APlayerCharacter* Character);
    void OnStopEffect();
    void ExecuteUbergraph_DE_ArkenStout(int32 EntryPoint);
};

#endif
