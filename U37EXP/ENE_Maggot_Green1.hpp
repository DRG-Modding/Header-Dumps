#ifndef UE4SS_SDK_ENE_Maggot_Green1_HPP
#define UE4SS_SDK_ENE_Maggot_Green1_HPP

class AENE_Maggot_Green1_C : public AENE_Maggot_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void Died();
    void ExecuteUbergraph_ENE_Maggot_Green1(int32 EntryPoint);
};

#endif
