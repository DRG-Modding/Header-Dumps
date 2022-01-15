#ifndef UE4SS_SDK_BP_GreenMaggot_AcidCloud_HPP
#define UE4SS_SDK_BP_GreenMaggot_AcidCloud_HPP

class ABP_GreenMaggot_AcidCloud_C : UBP_Damage_Cloud_Flamable_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    float InitialDamageDelay;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_GreenMaggot_AcidCloud(int32 EntryPoint);
}

#endif
