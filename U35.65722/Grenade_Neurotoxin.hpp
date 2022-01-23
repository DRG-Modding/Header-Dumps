#ifndef UE4SS_SDK_Grenade_Neurotoxin_HPP
#define UE4SS_SDK_Grenade_Neurotoxin_HPP

class AGrenade_Neurotoxin_C : public AITM_AOE_Grenade_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* P_Grenade_Neurotoxin_NozzleCone1;
    class UParticleSystemComponent* P_Grenade_Neurotoxin_NozzleCone3;
    class UParticleSystemComponent* P_Grenade_Neurotoxin_NozzleCone2;

    void AddGearStateEntries(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats, FGearStatEntry K2Node_MakeStruct_GearStatEntry, TSubclassOf<class ABP_Damage_Cloud_Base_C> K2Node_ClassDynamicCast_AsBP_Damage_Cloud_Base, bool K2Node_ClassDynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue, FGearStatEntry CallFunc_FormatStatic_GearStatEntry, int32 CallFunc_Array_Add_ReturnValue_1);
    void OnExploded();
    void ExecuteUbergraph_Grenade_Neurotoxin(int32 EntryPoint);
};

#endif
