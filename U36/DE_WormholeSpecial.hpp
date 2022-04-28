#ifndef UE4SS_SDK_DE_WormholeSpecial_HPP
#define UE4SS_SDK_DE_WormholeSpecial_HPP

class UDE_WormholeSpecial_C : public UDrinkEffectComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class APlayerCharacter* Character;
    FTransform On Start Transform;
    class ABP_WormholeLocation_Base_C* ActiveWormhole;

    void Disable Older Active Wormhole Effects();
    void IsLastActiveWormholeEffect(bool& was last effect);
    void Set Original position();
    void ReceiveTick(float DeltaSeconds);
    void OnStartEffect(class APlayerCharacter* Character);
    void OnStopEffect();
    void Spawn Teleport Effects();
    void Disable Active Location Effects();
    void ExecuteUbergraph_DE_WormholeSpecial(int32 EntryPoint);
};

#endif
