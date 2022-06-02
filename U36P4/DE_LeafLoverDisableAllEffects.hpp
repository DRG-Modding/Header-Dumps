#ifndef UE4SS_SDK_DE_LeafLoverDisableAllEffects_HPP
#define UE4SS_SDK_DE_LeafLoverDisableAllEffects_HPP

class UDE_LeafLoverDisableAllEffects_C : public UDrinkEffectComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    float TargetScale;
    class APlayerCharacter* Character;
    float StartScale;
    float Progress;

    void OnStartEffect(class APlayerCharacter* Character);
    void ExecuteUbergraph_DE_LeafLoverDisableAllEffects(int32 EntryPoint);
};

#endif
