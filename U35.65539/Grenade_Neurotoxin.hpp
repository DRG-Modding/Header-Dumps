#ifndef UE4SS_SDK_Grenade_Neurotoxin_HPP
#define UE4SS_SDK_Grenade_Neurotoxin_HPP

class AGrenade_Neurotoxin_C : UITM_AOE_Grenade_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UParticleSystemComponent* P_Grenade_Neurotoxin_NozzleCone1;
    UParticleSystemComponent* P_Grenade_Neurotoxin_NozzleCone3;
    UParticleSystemComponent* P_Grenade_Neurotoxin_NozzleCone2;

    void AddGearStateEntries(UFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats, FGearStatEntry K2Node_MakeStruct_GearStatEntry, TSubclassOf<ABP_Damage_Cloud_Base_C> K2Node_ClassDynamicCast_AsBP_Damage_Cloud_Base, bool K2Node_ClassDynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue, FGearStatEntry CallFunc_FormatStatic_GearStatEntry, int32 CallFunc_Array_Add_ReturnValue_1);
    void OnExploded();
    void ExecuteUbergraph_Grenade_Neurotoxin(int32 EntryPoint);
}

#endif
