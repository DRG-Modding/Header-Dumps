#ifndef UE4SS_SDK_BP_RadioactiveGlyphidDeathGas_HPP
#define UE4SS_SDK_BP_RadioactiveGlyphidDeathGas_HPP

class ABP_RadioactiveGlyphidDeathGas_C : public ABP_Damage_Cloud_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    float InitialDamageDelay;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_RadioactiveGlyphidDeathGas(int32 EntryPoint);
};

#endif
