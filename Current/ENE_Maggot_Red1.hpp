#ifndef UE4SS_SDK_ENE_Maggot_Red1_HPP
#define UE4SS_SDK_ENE_Maggot_Red1_HPP

class AENE_Maggot_Red1_C : public AENE_Maggot_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDamageComponent* Damage;

    void Died();
    void ExecuteUbergraph_ENE_Maggot_Red1(int32 EntryPoint);
};

#endif
